/*
 * FRU.h
 *
 * Copyright 2017-present Facebook. All Rights Reserved.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.
 */

#pragma once
#include <string>
#include <object-tree/Object.h>
#include "FruIdAccessMechanism.h"
using namespace openbmc::qin;

class FRU : public Object {
  private:
    const std::vector<std::pair<std::string, std::string>> fruIdInfoList_; // To store fruId information
                                                                           // This information is fixed and does not change over time

  public:
    /*
    * Contructor
    */
    FRU(const std::string &name, Object* parent, std::unique_ptr<FruIdAccessMechanism> fruIdAccess)
       : Object(name, parent) , fruIdInfoList_(fruIdAccess.get()->getFruIdInfoList()){}


    /*
     * Returns fruIdInfoList_
     */
    const std::vector<std::pair<std::string, std::string>> & getFruIdInfoList(){
      return fruIdInfoList_;
    }
};