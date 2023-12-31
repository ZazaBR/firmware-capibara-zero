/*
 * This file is part of the Capibara zero (https://github.com/CapibaraZero/fw or https://capibarazero.github.io/).
 * Copyright (c) 2023 Andrea Canale.
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, version 3.
 *
 * This program is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU
 * General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program. If not, see <http://www.gnu.org/licenses/>.
 */

#include <Arduino.h>
#include "ble_hid/BLEHid.hpp" // Without this build fails
#include "SPI.h"
#include "posixsd.hpp"
#include "pins.h"
#include "debug.h"

static void init_sd() {
  SPI.begin(SD_CARD_SCK, SD_CARD_MISO, SD_CARD_MOSI, SD_CARD_CS);
  if(!init_sdcard(SD_CARD_CS)) {
    LOG_ERROR("Error during init SD card");
  };
}

void setup()
{
  SERIAL_DEVICE.begin(115200);
  init_sd();
}

void loop()
{
}