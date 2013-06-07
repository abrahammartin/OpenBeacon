/***************************************************************
 *
 * OpenBeacon.org - Reader Position Settings
 *
 * Copyright 2009 Milosch Meriac <meriac@bitmanufaktur.de>
 *
 ***************************************************************/

/*
    This program is free software; you can redistribute it and/or modify
    it under the terms of the GNU Affero General Public License as
    published by the Free Software Foundation; version 3.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU Affero General Public License
    along with this program; if not, write to the Free Software Foundation,
    Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA.
*/

#ifndef BMREADERPOSITIONS_H_
#define BMREADERPOSITIONS_H_

typedef struct
{
	uint32_t id, room, floor, group;
	double x, y;
} TReaderItem;

#define IPv4(a,b,c,d) ( ((uint32_t)a)<<24 | ((uint32_t)b)<<16 | ((uint32_t)c)<<8 | ((uint32_t)d)<<0 )

static const TReaderItem g_ReaderList[] = {

	// HTW: group 1
	{IPv4 (10, 1, 254, 100), 707, 7, 1, 15.5, 5.5},
	{IPv4 (10, 1, 254, 103), 707, 7, 1, 0.5, 0.5},
	{IPv4 (10, 1, 254, 104), 707, 7, 1, 0.5, 5.5},
	{IPv4 (10, 1, 254, 105), 707, 7, 1, 8.0, 3.0},
	{IPv4 (10, 1, 254, 106), 707, 7, 1, 15.5, 0.5},

	// Cambridge TestBed
	{1229, 134, 1, 1, 238, 145},
	{1283, 201, 1, 1, 426, 368},
	{1247, 203, 1, 1, 558, 249},
	{1265, 204, 1, 1, 497, 587},
	{1266, 206, 1, 1, 608, 464},
	{1241, 206, 1, 1, 677, 587},
	{1330, 208, 1, 1, 817, 486},
	{1337, 024, 1, 1, 1320, 228},

	// BruCON  2011: group 4
	// Lounge Level 1
	{0x65, 1, 1, 4, 151, 452},
	{0x66, 1, 1, 4, 839, 506},
	{0x6F, 1, 1, 4, 775, 608},
	{0x73, 1, 1, 4, 461, 236},
	{0xC4, 1, 1, 4, 681, 232},
	{0xC5, 1, 1, 4, 314, 522},
	{116, 1, 1, 4, 410, 657},
	{108, 1, 1, 4, 1006, 280},
};

#define READER_COUNT (sizeof(g_ReaderList)/sizeof(g_ReaderList[0]))

#endif
