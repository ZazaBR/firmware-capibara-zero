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

#include <list>

#include "../Page.hpp"
#include "Grid.hpp"
#include "List.hpp"
#include "Text.hpp"

#ifndef BADUSB_PAYLOAD_BROWSER_PAGE_H
#define BADUSB_PAYLOAD_BROWSER_PAGE_H

class BadUSBPayloadBrowserPage : public Page {
 private:
  Text *title;
  List *go_back;
  Grid *badusb_grid;

 public:
  BadUSBPayloadBrowserPage(GFXForms *_screen);
  ~BadUSBPayloadBrowserPage();
  void display();
  void display(std::list<std::string> *files);
  void click(int pos, void callback()) { badusb_grid->click(pos, callback); };
  void set_selected(int pos, bool status) {
    badusb_grid->set_selected(pos, status);
  };
  void up() {};
  void down() {};
  void left() {};
  void right() {};
};

#endif
