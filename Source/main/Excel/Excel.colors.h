/*
	Copyright 1996, 1997, 1998, 2000
	        Hekkelman Programmatuur B.V.  All rights reserved.
	
	Redistribution and use in source and binary forms, with or without
	modification, are permitted provided that the following conditions are met:
	1. Redistributions of source code must retain the above copyright notice,
	   this list of conditions and the following disclaimer.
	2. Redistributions in binary form must reproduce the above copyright notice,
	   this list of conditions and the following disclaimer in the documentation
	   and/or other materials provided with the distribution.
	3. All advertising materials mentioning features or use of this software
	   must display the following acknowledgement:
	   
	    This product includes software developed by Hekkelman Programmatuur B.V.
	
	4. The name of Hekkelman Programmatuur B.V. may not be used to endorse or
	   promote products derived from this software without specific prior
	   written permission.
	
	THIS SOFTWARE IS PROVIDED ``AS IS'' AND ANY EXPRESS OR IMPLIED WARRANTIES,
	INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND
	FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL
	AUTHORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL,
	EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO,
	PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS;
	OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY,
	WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR
	OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF
	ADVISED OF THE POSSIBILITY OF SUCH DAMAGE. 
*/
// Excel color table

const rgb_color
	kExcelColorTable[56] = {
		{ 0x00, 0x00, 0x00, 0x00 },			// 1
		{ 0xFF, 0xFF, 0xFF, 0x00 },			// 2
		{ 0xFF, 0x00, 0x00, 0x00 },			// 3
		{ 0x00, 0xFF, 0x00, 0x00 },			// 4
		{ 0x00, 0x00, 0xFF, 0x00 },			// 5
		{ 0xFF, 0xFF, 0x00, 0x00 },			// 6
		{ 0xFF, 0x00, 0xFF, 0x00 },			// 7
		{ 0x00, 0xFF, 0xFF, 0x00 },			// 8
		{ 0x7F, 0x00, 0x00, 0x00 },			// 9
		{ 0x00, 0x7F, 0x00, 0x00 },			// 10
		{ 0x00, 0x00, 0x7F, 0x00 },			// 11
		{ 0x7F, 0x7F, 0x00, 0x00 },			// 12
		{ 0x00, 0x7F, 0x7F, 0x00 },			// 13
		{ 0x7F, 0x00, 0x7F, 0x00 },			// 14
		{ 0xBF, 0xBF, 0xBF, 0x00 },			// 15
		{ 0x7F, 0x7F, 0x7F, 0x00 },			// 16
		{ 0x7F, 0x7F, 0xFF, 0x00 },			// 17
		{ 0x7F, 0x1F, 0x5F, 0x00 },			// 18
		{ 0xFF, 0xFF, 0xBF, 0x00 },			// 19
		{ 0x9F, 0xDF, 0xDF, 0x00 },			// 20
		{ 0x5F, 0x00, 0x7F, 0x00 },			// 21
		{ 0xFF, 0x7F, 0x7F, 0x00 },			// 22
		{ 0x00, 0x7F, 0xBF, 0x00 },			// 23
		{ 0xBF, 0xBF, 0xFF, 0x00 },			// 24
		{ 0x00, 0x00, 0x7F, 0x00 },			// 25
		{ 0xFF, 0x00, 0xFF, 0x00 },			// 26
		{ 0xFF, 0xFF, 0x00, 0x00 },			// 27
		{ 0x00, 0xFF, 0xFF, 0x00 },			// 28
		{ 0x7F, 0x00, 0x7F, 0x00 },			// 29
		{ 0x7F, 0x00, 0x00, 0x00 },			// 30
		{ 0x00, 0x7F, 0x7F, 0x00 },			// 31
		{ 0x00, 0x00, 0xFF, 0x00 },			// 32
		{ 0x00, 0xC8, 0xFF, 0x00 },			// 33
		{ 0x60, 0xFF, 0xFF, 0x00 },			// 34
		{ 0xC0, 0xFF, 0xC0, 0x00 },			// 35
		{ 0xFF, 0xFF, 0x90, 0x00 },			// 36
		{ 0xA0, 0xC8, 0xEF, 0x00 },			// 37
		{ 0xCF, 0x98, 0xCF, 0x00 },			// 38
		{ 0xCF, 0x97, 0xFF, 0x00 },			// 39
		{ 0xDF, 0xDF, 0xDF, 0x00 },			// 40
		{ 0x2F, 0x67, 0xFF, 0x00 },			// 41
		{ 0x2F, 0xC8, 0xC0, 0x00 },			// 42
		{ 0x2F, 0x97, 0x2F, 0x00 },			// 43
		{ 0x90, 0x98, 0x30, 0x00 },			// 44
		{ 0x90, 0x60, 0x2F, 0x00 },			// 45
		{ 0x90, 0x60, 0x5F, 0x00 },			// 46
		{ 0x60, 0x60, 0x90, 0x00 },			// 47
		{ 0x89, 0x90, 0x89, 0x00 },			// 48
		{ 0x2F, 0x30, 0xC0, 0x00 },			// 49
		{ 0x2F, 0x60, 0x5F, 0x00 },			// 50
		{ 0x00, 0x2F, 0x00, 0x00 },			// 51
		{ 0x2F, 0x2F, 0x00, 0x00 },			// 52
		{ 0x5F, 0x2F, 0x00, 0x00 },			// 53
		{ 0x90, 0x30, 0x60, 0x00 },			// 54
		{ 0x2F, 0x2F, 0x90, 0x00 },			// 55
		{ 0x3F, 0x3F, 0x3F, 0x00 }			// 56
	};
