# It's possibile to set makefile definitions here.
# Originally used to configure flash size and font allocation, but that's now in pico_flash_mem.ld in this folder.

MCU_FLASH_SIZE = 2048
# 2097152 = 2 * 1024 * 1024
TARGET_DEVICE_FLAGS  = \
                   -DPICO_FLASH_SPI_CLKDIV=2 \
                   -DPICO_FLASH_SIZE_BYTES=2097152 \
                   -DPICO_BOOT_STAGE2_CHOOSE_W25Q080=1
