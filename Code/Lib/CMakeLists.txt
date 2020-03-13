#/*============================================================================
#
#  ASSIGNMENT1: PHAS0100 Assignment 1.
#
#  Copyright (c) University College London (UCL). All rights reserved.
#
#  This software is distributed WITHOUT ANY WARRANTY; without even
#  the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR
#  PURPOSE.
#
#  See LICENSE.txt in the top level directory for details.
#
#============================================================================*/

set(ASSIGNMENT1_LIBRARY_NAME assignment1)

set(ASSIGNMENT1_LIBRARY_SRCS
  lrgBasicTypes.cpp
  lrgMyFunctions.cpp
  lrgException.cpp
  lrgLinearDataCreator.cpp
  lrgNormalEquationsSolverStrategy.cpp
  lrgGradientDescentSolverStrategy.cpp
)

set(ASSIGNMENT1_LIBRARY_HDRS
  lrgExceptionMacro.h
  lrgDataCreatorI.h
  lrgLinearModelSolverStrategyI
)

add_library(${ASSIGNMENT1_LIBRARY_NAME} ${ASSIGNMENT1_LIBRARY_HDRS} ${ASSIGNMENT1_LIBRARY_SRCS})

if(BUILD_SHARED_LIBS)
  if(WIN32)
    add_definitions(-DASSIGNMENT1_WINDOWS_EXPORT)
  endif(WIN32)
endif(BUILD_SHARED_LIBS)

target_link_libraries(${ASSIGNMENT1_LIBRARY_NAME} PRIVATE ${ALL_THIRD_PARTY_LIBRARIES})

