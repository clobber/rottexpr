/*
Copyright (C) 1994-1995  Apogee Software, Ltd.
Copyright (C) 2002-2015  icculus.org, GNU/Linux port
Copyright (C) 2017-2018  Steven LeVesque

This program is free software; you can redistribute it and/or
modify it under the terms of the GNU General Public License
as published by the Free Software Foundation; either version 2
of the License, or (at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <https://www.gnu.org/licenses/>.
*/
#ifndef _rt_fc_a_public
#define _rt_fc_a_public

//***************************************************************************
//
//    RT_FC_A.ASM - Maprow stuff for floor and ceiling
//
//***************************************************************************

void DrawSkyPost (byte * buf, byte * src, int height);
void DrawRow(int count, byte * dest, byte * src);
void DrawRotRow(int count, byte * dest, byte * src);
void DrawMaskedRotRow(int count, byte * dest, byte * src);

#endif

