/*=============================================================================

  ASSIGNMENT1: PHAS0100 Assignment 1.

  Copyright (c) University College London (UCL). All rights reserved.

  This software is distributed WITHOUT ANY WARRANTY; without even
  the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR
  PURPOSE.

  See LICENSE.txt in the top level directory for details.

=============================================================================*/

#define CATCH_CONFIG_RUNNER  // This tells Catch we provide main.
#include "catch.hpp"
#include "lrgCatchMain.h"

// Global! Only do this in a private test harness.
namespace lrg
{
int argc;
char** argv;
}

int main (int argc, char * const argv[])
{
  lrg::argc = argc;
  lrg::argv = const_cast<char**>(argv);

  Catch::Session session; // There must be exactly once instance

  int tmpArgc = 1;
  char *tmpCommandName = new char[256];
  strcpy(tmpCommandName, argv[0]);

  int returnCode = session.applyCommandLine(tmpArgc, const_cast<char **>(&tmpCommandName));
  if(returnCode != 0) // Indicates a command line error
    return returnCode;

  int sessionReturnCode = session.run();

  delete [] tmpCommandName;
  return sessionReturnCode;
}

