/*=============================================================================

  A1MAIN: C++ Assignment roughwork

  Copyright (c) University College London (UCL). All rights reserved.

  This software is distributed WITHOUT ANY WARRANTY; without even
  the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR
  PURPOSE.

  See LICENSE.txt in the top level directory for details.

=============================================================================*/

#include "catch.hpp"
#include "lrgCatchMain.h"
#include "lrgLinearDataCreator.h"
#include <iostream>
#include <vector>

TEST_CASE( "My first test", "[some group identifier]" ) {
  LinearDataCreator data(2,100,10);
  std::vector<double> xvec;
  for (int i=0; i<data.getnumpoints(); i++) 
    xvec.push_back( data.GetData()[i].first);
  REQUIRE( data.GetData().size() == 10); //checking GetData creates data of the specified size 
  REQUIRE( *std::max_element(xvec.begin(),xvec.end()) <= 1000); //checking GetData() simulates explanatory variable in the range 0-1000
  REQUIRE( *std::min_element(xvec.begin(),xvec.end()) >= 0);
}
