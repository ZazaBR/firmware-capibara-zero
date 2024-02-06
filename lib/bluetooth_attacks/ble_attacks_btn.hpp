/*
 * This file is part of the Capibara zero (https://github.com/CapibaraZero/fw or https://capibarazero.github.io/).
 * Copyright (c) 2024 Andrea Canale.
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

#ifndef BLE_ATTACK_BTN_H
#define BLE_ATTACK_BTN_H

#include "gui.hpp"
#include "bluetooth_attacks.hpp"
#include "FS.h"

void scan_ble(Gui *gui, BluetoothAttack *attack);
void sniff_ble(Gui *gui, BluetoothAttack *attack);
void start_applejuice(BluetoothAttack *attack);
void start_samsung_ble_spam(BluetoothAttack *attack);
void start_swift_pair_spam(BluetoothAttack *attack);
void kill_applejuice_task();
void kill_samsung_ble_spam();
void kill_swift_pair_spam();

#endif