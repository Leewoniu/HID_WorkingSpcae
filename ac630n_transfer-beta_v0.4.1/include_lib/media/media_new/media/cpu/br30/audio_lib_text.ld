
		. = ALIGN(4);
        media_text_start = .;

        /*
		*(.aec_code)
		*(.aec_const)

		. = ALIGN(4);
		*(.res_code)
		*(.res_const)

		. = ALIGN(4);
		*(.ns_code)
		*(.ns_const)

		*(.nlp_code)
		*(.nlp_const)
		*(.der_code)
		*(.der_const)
		*(.qmf_code)
		*(.qmf_const)
		*(.fft_code)
		*(.fft_const)
        */

		*(.ns_sparse_code )
		*(.aec_sparse_code)
		*(.nlp_sparse_code)
		*(.der_sparse_code)
		*(.qmf_sparse_code)
		*(.bt_audioplc_code)
		*(.bt_audioplc_sparse_code)
		*(.bt_audioplc_const)
		*(.dms_sparse_code)

		. = ALIGN(4);
        *(.pcm_code)
        *(.pcm_const)
		/* *(.cvsd_code) */
		/* *(.cvsd_const) */
		/* *(.g729_code) */
		/* *(.g729_const) */
		/* *(.mp3_code) */
		/* *(.mp3_const) */
        /**(.bfilt_code)*/
		*(.msbc_code)
		*(.msbc_const)
		/* *(.mty_code) */
		/* *(.mty_const) */
		*(.sbc_code)
		*(.sbc_const)
		*(.sine_code)
		*(.sine_const)
		/* *(.wav_code) */
		/* *(.wav_const) */
		/* *(.wma_code) */
		/* *(.wma_const) */
        *(.aac_code)
        *(.aac_const)
		*(.amr_code)
		*(.amr_const)
		/* *(.ape_code) */
		/* *(.ape_const) */
		*(.audio_decoder_code)
		*(.audio_decoder_const)
		/* *(.cvsd_code) */
		/* *(.cvsd_const) */
		/* *(.dts_code) */
		/* *(.dts_const) */
		/* *(.flac_code) */
		/* *(.flac_const) */
		/* *(.m4a_code) */
		/* *(.m4a_const) */
		*(.media_device_code)
		*(.media_device_const)
		*(.audio_encoder_code)
		*(.audio_encoder_const)
		*(.mixer_code)
		*(.mixer_const)
		*(.dec_server_code)
		*(.dec_server_const)
		*(.rec_server_code)
		*(.rec_server_const)
		*(.auto_mute_code)
		*(.auto_mute_const)
		*(.plc_code)
		*(.plc_const)
		*(.wireless_sync_code)
		*(.wireless_sync_const)
		*(.sbc_eng_code)
		*(.sbc_eng_const)

		*(.audio_codec_code)

		. = ALIGN(4);
    	_audio_decoder_begin = .;
    	PROVIDE(audio_decoder_begin = .);
    	    *(.audio_decoder)
    	_audio_decoder_end = .;
    	PROVIDE(audio_decoder_end = .);

    	_audio_encoder_begin = .;
    	PROVIDE(audio_encoder_begin = .);
    	    *(.audio_encoder)
    	_audio_encoder_end = .;
    	PROVIDE(audio_encoder_end = .);

    	_audio_package_begin = .;
    	PROVIDE(audio_package_begin = .);
    	    *(.audio_package)
    	_audio_package_end = .;
    	PROVIDE(audio_package_end = .);

    	_audio_dev_begin = .;
    	PROVIDE(audio_dev_begin = .);
    	    *(.audio_device)
    	_audio_dev_end = .;
    	PROVIDE(audio_dev_end = .);

    	_audio_hwaccel_begin = .;
    	PROVIDE(audio_hwaccel_begin = .);
    	    *(.audio_hwaccel)
    	_audio_hwaccel_end = .;
    	PROVIDE(audio_hwaccel_end = .);

		. = ALIGN(4);
    	media_code_begin = .;
    	    *(.media.*.text)
    	media_code_end = .;
		. = ALIGN(4);
		media_code_size = media_code_end - media_code_begin;

		. = ALIGN(4);
        media_text_end = .;
