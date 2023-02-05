#!/bin/sh

rm -f firmware/*
cp local_ca_d* Tasmota/tasmota/include/

if [ -f my_user_config_settings.h ]; then
    cat user_config_override_shelly_base.h user_config_override_shelly_plug_s.h my_user_config_settings.h > user_config_override.h
    sh ./compile.sh $*
    if [ -f firmware/tasmota.bin.gz ]; then
        echo "uploading firmware to firmware.iot.ikruglov.com"
        scp firmware/tasmota.bin.gz nas:/volume1/docker/firmware/data/tasmota/release/tasmota-shelly-plug-s.bin.gz
    fi
    exit 0
else
    echo "no my_user_config_settings.h"
    exit 1
fi
