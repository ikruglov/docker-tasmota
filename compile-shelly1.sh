#!/bin/sh
cat user_config_override_shelly1.h my_user_config_settings.h > user_config_override.h
./compile.sh $*
