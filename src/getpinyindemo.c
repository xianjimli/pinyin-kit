/*
 * getpinyindemo.c
 *
 * Copyright (C) 2006-2007 Li XianJing <http://blog.csdn.net/absurd/>
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

#include <stdio.h>
#include "pinyin.h"

void usage(void)
{
    printf("Usage: \n\ttest <hanzhi>\n");
}

int main(int argc ,char *argv[])
{
    if (argc == 2)
        printf ("pinyin is: %s\n", get_pinyin (argv[1]));
    else 
        usage();
    
    return 0;
}
