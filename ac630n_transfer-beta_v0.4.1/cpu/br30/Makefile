

objs += \
	  $(ROOT)/cpu/$(CPU)/setup.o \
	  $(ROOT)/cpu/$(CPU)/adc_api.o \
	  $(ROOT)/cpu/$(CPU)/pwm_led.o \
	  $(ROOT)/cpu/$(CPU)/iic_hw.o \
	  $(ROOT)/cpu/$(CPU)/iic_soft.o \
	  $(ROOT)/cpu/$(CPU)/uart_dev.o \
	  $(ROOT)/cpu/$(CPU)/spi.o \
	  $(ROOT)/cpu/$(CPU)/charge.o \
	  $(ROOT)/cpu/$(CPU)/chargestore.o \
	  $(ROOT)/cpu/$(CPU)/power_api.o
ifneq ($(APP_CASE),hid)
ifneq ($(APP_CASE),spp_and_le)
ifneq ($(APP_CASE),dongle)
objs += \
	  $(ROOT)/cpu/$(CPU)/audio_eq.o \
	  $(ROOT)/cpu/$(CPU)/audio_drc.o \
	  $(ROOT)/cpu/$(CPU)/audio_dec.o \
	  $(ROOT)/cpu/$(CPU)/audio_enc.o \
	  $(ROOT)/cpu/$(CPU)/eq_config.o \
	  $(ROOT)/cpu/$(CPU)/audio_mic_codec.o \
	  $(ROOT)/cpu/$(CPU)/tone_player.o \
	  $(ROOT)/cpu/$(CPU)/app_audio.o \
	  $(ROOT)/cpu/$(CPU)/audio_sync.o \
	  $(ROOT)/cpu/$(CPU)/lp_touch_key.o \
	  $(ROOT)/cpu/$(CPU)/lp_touch_key_epd.o \
	  $(ROOT)/cpu/$(CPU)/audio_capture.o \
	  $(ROOT)/cpu/$(CPU)/audio_plink.o \
	  $(ROOT)/cpu/$(CPU)/audio_dac_digital_volume.o \
	  $(ROOT)/cpu/$(CPU)/overlay_code.o \
	  $(ROOT)/cpu/$(CPU)/aec_tool.o \

ifeq ($(CONFIG_ANC_ENABLE),y)
objs += \
	  $(ROOT)/cpu/$(CPU)/audio_anc.o
endif

endif
endif
endif
	  # $(ROOT)/cpu/$(CPU)/mcpwm.o \


