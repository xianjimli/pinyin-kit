/*
 * pinyincmpdemo.c
 * Copyright (C) 2006-2007 Li XianJing <xianjimli@hotmail.com>
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, write to the
 * Free Software Foundation, Inc., 59 Temple Place - Suite 330, 
 * Boston, MA 02111-1307, USA.
 */

#include <assert.h>
#include <stdio.h>
#include "pinyin.h"

int main(int argc, char* argv[])
{
	unsigned short wstr1[] = {0x4e2d, 0};
	unsigned short wstr2[] = {0x56fd, 0};
	
	assert(pinyin_charcmp(0x4e2d, 0x56fd) > 0);
	assert(pinyin_strcmp(wstr1, wstr2) > 0);
	assert(pinyin_strncmp(wstr1, wstr2, 1) > 0);

	assert(pinyin_charcasecmp(0x4e2d, 0x56fd) > 0);
	assert(pinyin_strcasecmp(wstr1, wstr2) > 0);
	assert(pinyin_strncasecmp(wstr1, wstr2, 1) > 0);

	assert(pinyin_charcmp('a', 'A') > 0);
	assert(pinyin_charcasecmp('a', 'A') == 0);
	
	printf("%d %d\n", pinyin_charcmp(0x4e2d, 0x56fd),
		pinyin_strcmp(wstr1, wstr2));
	
	return 0;
}

