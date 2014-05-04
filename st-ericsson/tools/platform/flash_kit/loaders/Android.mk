#Android makefile to build loaders as a part of Android Build

#LOCAL_PATH := $(my-dir)
include $(CLEAR_VARS)

.phony: clean-loaders config-loaders build-loaders install-loader distclean-loaders clobber

#Source location
PRIVATE_LOADERS_TOOLS_PATH := $(abspath $(TOOLS_PATH))
PRIVATE_LOADERS_PROCESSING_PATH := $(abspath $(PROCESSING_PATH))
PRIVATE_LOADERS_STORAGE_PATH := $(abspath $(STORAGE_PATH))
PRIVATE_LOADERS_LOADERS_DIR := $(PRIVATE_LOADERS_TOOLS_PATH)/platform/flash_kit/loaders
PRIVATE_LOADERS_LCD_DIR := $(PRIVATE_LOADERS_TOOLS_PATH)/platform/flash_kit/loader_communication

#Output
#FLASHKIT_INSTALL_BASE defined in vendor/st-ericsson/u8500/BoardConfig.mk
PRIVATE_LOADERS_INSTALLDIR := $(FLASHKIT_INSTALL_BASE)/loaders

#Locations and flags for modules loaders depend on
PRIVATE_LOADERS_LCMLDR_INSTALLDIR := $(abspath $(TOP))/$(TARGET_OUT_INTERMEDIATES)/FLASHKIT/LOADERS/loader_communication_module

PRIVATE_LOADERS_COPS_DIR := $(PRIVATE_LOADERS_PROCESSING_PATH)/security_framework/cops/
PRIVATE_LOADERS_COPS_MAKEFILE := ldr.mk
PRIVATE_LOADERS_COPS_INSTALL := $(abspath $(TOP))/$(TARGET_OUT_INTERMEDIATES)/FLASHKIT/LOADERS/cops_install

PRIVATE_LOADERS_BASSAPP_DIR := $(PRIVATE_LOADERS_PROCESSING_PATH)/security_framework/bass_app/
PRIVATE_LOADERS_BASSAPP_INSTALL := $(abspath $(TOP))/$(TARGET_OUT_INTERMEDIATES)/FLASHKIT/LOADERS/bass_install
PRIVATE_LOADERS_BASSAPP_MAKEFILE := Makefile

PRIVATE_LOADERS_CSPSA_DIR := $(PRIVATE_LOADERS_STORAGE_PATH)/parameter_storage/cspsa

PRIVATE_LOADERS_OUT_DIR = $(abspath $(TOP))/$(TARGET_OUT_INTERMEDIATES)/FLASHKIT/LOADERS
PRIVATE_LC_LCM_OUT_DIR = $(abspath $(TOP))/$(TARGET_OUT_INTERMEDIATES)/FLASHKIT/LCM

# Require that we add this in BoardConfiguration
# CROSS_PREFIX := arm-eabi
# CROSS_COMPILE := $(CROSS_PREFIX)-
PRIVATE_LOADERS_FLAGS := BINDEST=$(PRIVATE_LOADERS_INSTALLDIR)\
			 AUTO_DIR=$(PRIVATE_LOADERS_LCMLDR_INSTALLDIR)\
			 CSPSA=$(PRIVATE_LOADERS_CSPSA_DIR)\
			 COPS_MAKEFILE=$(PRIVATE_LOADERS_COPS_MAKEFILE)\
			 COPS_DIR=$(PRIVATE_LOADERS_COPS_DIR)\
			 COPS_INSTALL=$(PRIVATE_LOADERS_COPS_INSTALL)\
			 BASSAPP_MAKEFILE=$(PRIVATE_LOADERS_BASSAPP_MAKEFILE) \
			 BASSAPP_DIR=$(PRIVATE_LOADERS_BASSAPP_DIR)\
			 BASSAPP_INSTALL=$(PRIVATE_LOADERS_BASSAPP_INSTALL)\
			 CROSS_PREFIX=arm-eabi\
			 STE_PLATFORM=$(FLASHKIT_SET_HWCONFIG)\
			 LCD_DIR=$(PRIVATE_LOADERS_LCD_DIR)\
			 PATH=$(PATH)\
			 LDR_DIR=$(PRIVATE_LOADERS_LOADERS_DIR)\
			 LCM_DIR=$(PRIVATE_LOADERS_LCD_DIR)/lcmodule\
			 PRIVATE_LC_LCM_OUT_DIR=$(PRIVATE_LC_LCM_OUT_DIR)\
			 FLASHING_NONSIGNED=$(FLASHKIT_LOADERS_NONSIGNED_ARCHIVE)



config-loaders:
	mkdir -p $(PRIVATE_LOADERS_OUT_DIR)
	PATH=$(PATH) $(MAKE) -C $(PRIVATE_LOADERS_LOADERS_DIR) -f Makefile LOADERS_DEBUG=$(PRIVATE_LOADERS_DEBUG) $(PRIVATE_LOADERS_FLAGS) CONFIG_DIR=$(PRIVATE_LOADERS_OUT_DIR) OUT_DIR=$(PRIVATE_LOADERS_OUT_DIR) COPS_PLATFORM_TYPE=$(COPS_PLATFORM_TYPE) config

build-loaders: config-loaders build-lcm
	PATH=$(PATH) $(MAKE) -C $(PRIVATE_LOADERS_LOADERS_DIR) -f Makefile CONFIG_DIR=$(PRIVATE_LOADERS_OUT_DIR) COPS_PLATFORM_TYPE=$(COPS_PLATFORM_TYPE) build

install-loaders: build-loaders
	PATH=$(PATH) $(MAKE) -C $(PRIVATE_LOADERS_LOADERS_DIR) -f Makefile CONFIG_DIR=$(PRIVATE_LOADERS_OUT_DIR) COPS_PLATFORM_TYPE=$(COPS_PLATFORM_TYPE) install

clean-loaders:
	PATH=$(PATH) $(MAKE) -C $(PRIVATE_LOADERS_LOADERS_DIR) -f Makefile CONFIG_DIR=$(PRIVATE_LOADERS_OUT_DIR) COPS_PLATFORM_TYPE=$(COPS_PLATFORM_TYPE) clean

distclean-loaders:
	PATH=$(PATH) $(MAKE) -C $(PRIVATE_LOADERS_LOADERS_DIR) -f Makefile CONFIG_DIR=$(PRIVATE_LOADERS_OUT_DIR) COPS_PLATFORM_TYPE=$(COPS_PLATFORM_TYPE) distclean

clean clobber: distclean-loaders

st-ericsson-flashkit: config-loaders build-loaders install-loaders