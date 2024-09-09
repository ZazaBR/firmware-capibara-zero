/*
 * This file is part of the Capibara zero (https://github.com/CapibaraZero/fw or
 * https://capibarazero.github.io/). Copyright (c) 2024 Andrea Canale.
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

#include "../Page.hpp"
#include "GFXForms.hpp"
#include "Grid.hpp"
#include "List.hpp"
#include "../../../../include/debug.h"

#ifndef WIFI_SCAN_SAVE_RESULTS_PAGE_H
#define WIFI_SCAN_SAVE_RESULTS_PAGE_H

class WifiScanSaveResultPage : public Page {
 private:
  int selection_index = 0;
  List *save_sd;
  List *sniff_filter;
  List *go_back;
  List *exit_btn;
  bool empty = false;
 public:
  WifiScanSaveResultPage(uint8_t _position_limit, uint8_t _lower_limit,
         uint8_t _position_increment, GFXForms *screen, Gui *_gui) : Page(_position_limit, _lower_limit, _position_increment, screen, _gui) {};
  ~WifiScanSaveResultPage();

  void up();
  void down();
  void left() {};
  void right() {};
  
  void display() {
       LOG_ERROR("WifiScanSaveResultPage::display() not implemented");
  };
  void display(bool _empty);
  int get_index() { return selection_index; }
  
};

#endif