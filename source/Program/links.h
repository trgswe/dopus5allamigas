/*

Directory Opus 5
Original APL release version 5.82
Copyright 1993-2012 Jonathan Potter & GP Software

This program is free software; you can redistribute it and/or
modify it under the terms of the AROS Public License version 1.1.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
AROS Public License for more details.

The release of Directory Opus 5 under the GPL in NO WAY affects
the existing commercial status of Directory Opus for Windows.

For more information on Directory Opus for Windows please see:

                 http://www.gpsoft.com.au

*/

#if (defined(__PPC__) || defined(__i386__)) && defined(__GNUC__)
#pragma pack(2)
#endif

typedef struct
{
	char			sli_Path[256];
	struct FileInfoBlock	sli_Fib;
} SoftLinkInfo;

#if (defined(__PPC__) || defined(__i386__)) && defined(__GNUC__)
#pragma pack()
#endif

BOOL ReadSoftLinkDopus(BPTR,char *,char *,SoftLinkInfo *);
