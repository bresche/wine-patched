/*
 *  Notepad (notepad.h)
 *
 *  Copyright 1997,98 Marcel Baur <mbaur@g26.ethz.ch>
 *  Copyright 2002 Sylvain Petreolle <spetreolle@yahoo.fr>
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
 */

#include "notepad_res.h"

#define MAX_STRING_LEN      255
#define HELPFILE  "notepad.hlp"

/* hide the following from winerc */
#ifndef RC_INVOKED

#define WINE_RELEASE_INFO "Wine (www.winehq.com)"

#include "commdlg.h"

VOID SetFileName(LPSTR szFileName);

/***** Compatibility *****/

#ifndef OIC_WINLOGO
#define OIC_WINLOGO 32517
#endif
#define DEFAULTICON OIC_WINLOGO

typedef struct
{
  HANDLE  hInstance;
  HWND    hMainWnd;
  HWND    hFindReplaceDlg;
  HWND    hEdit;
  HICON   hMainIcon;
  HICON   hDefaultIcon;
  LPCSTR  lpszIcoFile;
  BOOL    bWrapLongLines;
  CHAR    szFindText[MAX_PATH];
  CHAR    szFileName[MAX_PATH];
  CHAR    szFileTitle[MAX_PATH];
  CHAR    szFilter[2 * MAX_STRING_LEN + 100];
  CHAR    szMarginTop[MAX_PATH];
  CHAR    szMarginBottom[MAX_PATH];
  CHAR    szMarginLeft[MAX_PATH];
  CHAR    szMarginRight[MAX_PATH];
  CHAR    szHeader[MAX_PATH];
  CHAR    szFooter[MAX_PATH];

  FINDREPLACE find;
} NOTEPAD_GLOBALS;

extern NOTEPAD_GLOBALS Globals;

#else  /* RC_INVOKED */

#endif
