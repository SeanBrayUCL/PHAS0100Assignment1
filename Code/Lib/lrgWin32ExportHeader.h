/*=============================================================================

  ASSIGNMENT1: PHAS0100 Assignment 1.

  Copyright (c) University College London (UCL). All rights reserved.

  This software is distributed WITHOUT ANY WARRANTY; without even
  the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR
  PURPOSE.

  See LICENSE.txt in the top level directory for details.

=============================================================================*/

#ifndef lrgWin32ExportHeader_h
#define lrgWin32ExportHeader_h

/**
* \file lrgWin32ExportHeader.h
* \brief Header to sort Windows dllexport/dllimport.
*/

#if (defined(_WIN32) || defined(WIN32)) && !defined(ASSIGNMENT1_STATIC)
  #ifdef ASSIGNMENT1_WINDOWS_EXPORT
    #define ASSIGNMENT1_WINEXPORT __declspec(dllexport)
  #else
    #define ASSIGNMENT1_WINEXPORT __declspec(dllimport)
  #endif  /* ASSIGNMENT1_WINEXPORT */
#else
/* linux/mac needs nothing */
  #define ASSIGNMENT1_WINEXPORT
#endif

#endif
