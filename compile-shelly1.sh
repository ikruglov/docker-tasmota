#!/bin/sh

rm -f firmware/*
cp local_ca_d* Tasmota/tasmota/include/

if [ -f my_user_config_settings.h ]; then
    cat user_config_override_shelly1.h my_user_config_settings.h > user_config_override.h
    sh ./compile.sh $*
    exit $?
else
    echo "no my_user_config_settings.h"
    exit 1
fi
