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
#include "lrgGradientDescentSolverStrategy.h"
#include <iostream>
#include <vector>
#include <math.h>

 LinearDataCreator data(1,2,1000);
 NormalEquationsSolverStrategy NE;
 GradientDescentSolverStrategy GD(1,1,0.1,100);
 std::vector<double> xvec;

TEST_CASE( "Checking the number of returned items is correct", "[LinearDataCreator.GetData()]" ) {
  REQUIRE( data.GetData().size() == 1000); 
}

TEST_CASE( "Checking the distribution of returned items is correct", "[LinearDataCreator.GetData()]" ) { 
  for (int i=0; i<data.getnumpoints(); i++) 
  xvec.push_back( data.GetData()[i].first);
  REQUIRE( *std::max_element(xvec.begin(),xvec.end()) <= 10); //checking GetData() simulates explanatory variable in the range 0-1000
  REQUIRE( *std::min_element(xvec.begin(),xvec.end()) >= 0);
}

TEST_CASE( "Checking NE FitData returns finite results", "[NormalEquationsSolverStrategy]" ) { 
  REQUIRE( isinf(NE.FitData(data.GetData()).first) == 0); 
  REQUIRE( isinf(NE.FitData(data.GetData()).second) == 0);
}

TEST_CASE( "Checking NE FitData returns not nan results", "[NormalEquationsSolverStrategy]" ) { 
  REQUIRE( isnan(NE.FitData(data.GetData()).first) == 0); 
  REQUIRE( isnan(NE.FitData(data.GetData()).second) == 0);
}

TEST_CASE( "Checking GD FitData returns finite results", "[GradientDescent]" ) { 
  REQUIRE( isinf(GD.FitData(data.GetData()).first) == 0); 
  REQUIRE( isinf(GD.FitData(data.GetData()).second) == 0);
}

TEST_CASE( "Checking GD FitData returns not nan results", "[GradientDescent]" ) { 
  REQUIRE( isnan(GD.FitData(data.GetData()).first) == 0); 
  REQUIRE( isnan(GD.FitData(data.GetData()).second) == 0);
}
