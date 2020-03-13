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
#include "lrgNormalEquationsSolverStrategy.h"
#include <iostream>
#include <vector>

 LinearDataCreator data(2,100,10);
 NormalEquationsSolverStrategy output;
 std::vector<double> xvec;


 
TEST_CASE( "Checking the number of returned items is correct", "[LinearDataCreator.GetData()]" ) {
  REQUIRE( data.GetData().size() == 10); 
}

TEST_CASE( "Checking the distribution of returned items is correct", "[LinearDataCreator.GetData()]" ) { 
  for (int i=0; i<data.getnumpoints(); i++) 
  xvec.push_back( data.GetData()[i].first);
  REQUIRE( *std::max_element(xvec.begin(),xvec.end()) <= 1000); //checking GetData() simulates explanatory variable in the range 0-1000
  REQUIRE( *std::min_element(xvec.begin(),xvec.end()) >= 0);
}
