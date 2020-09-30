#ifndef _ANC_H_
#define _ANC_H_

#include "generic/typedef.h"
#include "system/task.h"
#include "anc_btspp.h"

#define ANC_COEFF_NUM	(488 + 100)
#define ANC_COEFF_SIZE	(ANC_COEFF_NUM << 2)

typedef enum {
    ANC_OFF = 1,		/*关闭模式*/
    ANC_ON,				/*降噪模式*/
    ANC_TRANSPARENCY,	/*通透模式*/
    ANC_TRAIN,			/*训练模式*/
} ANC_mode_t;

typedef enum {
    TRANS_LPF_1K,		//LPF 1K
    TRANS_LPF_2K,		//LPF 2K
    TRANS_LPF_3K,		//LPF 3K
    TRANS_LPF_4K,		//LPF 4K
    TRANS_LPF_5K,		//LPF 5K
    TRANS_LPF_6K,		//LPF 6K
    TRANS_LPF_7K,		//LPF 7K
    TRANS_LPF_8K,		//LPF 8K
} ANC_trans_lpf_t;		//通透模式低通滤波器组

typedef enum {
    TRANS_HPF_1K,		//HPF 1K
    TRANS_HPF_1_5K,		//HPF 1.5K
    TRANS_HPF_2K,		//HPF 2K
    TRANS_HPF_2_5K,		//HPF 2.5K
} ANC_trans_hpf_t;		//通透模式高通滤波器组

typedef enum {
    TRANS_ERR_TIMEOUT = 1,	//训练超时
    TRANS_ERR_MICERR,		//训练中MIC异常
    TRANS_ERR_FORCE_EXIT	//强制退出训练
} ANC_trans_errmsg_t;

#define ANC_MANA_UART  	   0
#define ANC_AUTO_UART 	   1
#define ANC_AUTO_BT_SPP    2

typedef struct {
    u8 start;//ANC状态
    u8 mode; //ANC模式
    u8 dac_gain_l;//dac左声道增益
    u8 dac_gain_r;//dac右声道增益
    u8 ref_mic_gain;//参考mic
    u8 err_mic_gain;//误差mic
    u8 train_way; //训练方式
    u8 trans_hpf_en; //通透模式高通使能
    u8 trans_lpf_en; //通透模式低通使能
    u8 fz_fir_en; //FZ补偿滤波器使能
    u8 anc_fade_en;//ANC淡入淡出使能
    s16 fz_gain;  //FZ补偿增益
    int train_err;//训练结果 0:成功 other:失败
    int anc_gain;//ANC增益
    s32 *fz_coeff;//FZ补偿滤波器表
    s32 *coeff;//降噪模式滤波器表
    s16 *ffwz_nch_coeff;//通透模式低通滤波器表
    s16 *ffwz_lpf_coeff;//通透模式高通滤波器表
    anc_train_para_t train_para;
    void (*train_callback)(u8, u8);
    void (*pow_callback)(u8, u8);
} audio_anc_t;

#define ANC_DB_HEAD_LEN		8/*ANC配置区数据头长度*/
#define ANCIF_VERSION		0x0001
#define ANCIF_VER_LEN		2
#define ANCIF_TAG			"ANC"
#define ANCIF_TAG_LEN		3
typedef struct {
    char tag[4];/*'A' 'N' 'C' '\0',最后有一个结束符*/
    u16 crc16;
    u16 version;
    int coeff[0];
} anc_db_t;


int audio_anc_train(audio_anc_t *param, u8 en);

/*
 *Description 	: audio_anc_open
 *Arguements  	: param is audio anc param
 *Returns	 	: 0  open success
 *		   		: -EPERM 不支持ANC
 *		   		: -EINVAL 参数错误
 *Notes			:
 */
int audio_anc_open(audio_anc_t *param);

int audio_anc_close();

void audio_anc_gain(int gain);

void audio_anc_fade(int gain, u8 en);

int audio_anc_mode(audio_anc_t *param);

void audio_anc_test(audio_anc_t *param);

void anc_train_para_init(anc_train_para_t *para);

void audio_anc_fz_gain(u8 fz_en, s16 fz_gain);

enum {
    ANC_DB_COEFF,
    ANC_DB_MODE,
};
int *anc_db_get(u8 id, u32 len);
int anc_db_put(u8 id, u8 *buf, u16 len);
int *anc_db_load(u32 len);

#endif/*_ANC_H_*/
