#pragma once
//******************************************************************************
//
// This file is part of the OpenHoldem project
//    Source code:           https://github.com/OpenHoldem/openholdembot/
//    Forums:                http://www.maxinmontreal.com/forums/index.php
//    Licensed under GPL v3: http://www.gnu.org/licenses/gpl.html
//
//******************************************************************************
//
// Purpose: Collecting info from the casino
//   and populating the gamestate.class,
//   usually done by scraping.
//
//******************************************************************************

#include "LibDef.h"

class CLazyScraper;

class GAMESTATE_POPULATOR_API COpenHoldemGamestatePopulator {
public:
  COpenHoldemGamestatePopulator();
  ~COpenHoldemGamestatePopulator();
public:
  void Populate();
private:
  CLazyScraper* lazy_scraper;
};