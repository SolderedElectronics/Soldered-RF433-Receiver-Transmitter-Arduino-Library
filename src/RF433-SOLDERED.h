/**
 **************************************************
 *
 * @file        Generic-easyC-SOLDERED.h
 * @brief       Header file for sensor specific code.
 *
 *
 * @copyright   GNU General Public License v3.0
 * @authors     @ soldered.com, Robert Peric
 ***************************************************/

#ifndef _RF433_H
#define _RF433_H

#include "Arduino.h"
#include "libs/RadioHead/RH_ASK.h"

class RF433 : public RH_ASK
{
  public:
    RF433();

  protected:
  private:
};

#endif
