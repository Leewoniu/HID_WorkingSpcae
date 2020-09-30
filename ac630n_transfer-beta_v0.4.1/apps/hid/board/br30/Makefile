LIBS = \
--start-group \
   $(AR_DIR)/cpu.a \
   $(AR_DIR)/system.a \
   $(AR_DIR)/btstack.a \
   $(AR_DIR)/btctrler.a \
   $(AR_DIR)/libepmotion.a \
   $(AR_DIR)/libAptFilt_pi32v2_OnChip.a \
   $(AR_DIR)/libEchoSuppress_pi32v2_OnChip.a \
   $(AR_DIR)/libNoiseSuppress_pi32v2_OnChip.a \
   $(AR_DIR)/libSplittingFilter_pi32v2_OnChip.a \
   $(AR_DIR)/libDelayEstimate_pi32v2_OnChip.a \
   $(AR_DIR)/libOpcore_maskrom_pi32v2_OnChip.a \
   $(AR_DIR)/wtg_dec_lib.a \
   $(AR_DIR)/libFFT_pi32v2_OnChip.a \
   $(AR_DIR)/crypto_toolbox_Ospeed.a \
   $(AR_DIR)/agreement.a \
   $(AR_DIR)/compressor.a \
   $(AR_DIR)/crossover_coff.a \
   $(AR_DIR)/limiter.a \
--end-group

ifeq ($(OTA_UPDATE),y)
LIBS += \
   $(AR_DIR)/update.a \

endif

objs += \
	  $(ROOT)/apps/$(APP_CASE)/board/$(CPU)/board_ac637n_demo.o \

#algorithm in mask
#$(AR_DIR)/libOpcore_maskrom_pi32v2_OnChip.a \
   $(AR_DIR)/bt_aac_dec_lib_br30_seg_2.a \
   $(AR_DIR)/bfilterfun_lib.a \
