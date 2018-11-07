/* ========================================================================
 * Copyright 1988-2006 University of Washington
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * ========================================================================
 */

/*
 * Program:	Windows conversion tables
 *
 * Author:	Mark Crispin
 *
 * Date:	16 October 2000
 * Last Edited:	30 August 2006
 */

				/* Windows Thai */
static const unsigned short windows_874tab[128] = {
  0x20ac,UBOGON,UBOGON,UBOGON,UBOGON,0x2026,UBOGON,UBOGON,
  UBOGON,UBOGON,UBOGON,UBOGON,UBOGON,UBOGON,UBOGON,UBOGON,
  UBOGON,0x2018,0x2019,0x201c,0x201d,0x2022,0x2013,0x2014,
  UBOGON,UBOGON,UBOGON,UBOGON,UBOGON,UBOGON,UBOGON,UBOGON,
  0x00a0,0x0e01,0x0e02,0x0e03,0x0e04,0x0e05,0x0e06,0x0e07,
  0x0e08,0x0e09,0x0e0a,0x0e0b,0x0e0c,0x0e0d,0x0e0e,0x0e0f,
  0x0e10,0x0e11,0x0e12,0x0e13,0x0e14,0x0e15,0x0e16,0x0e17,
  0x0e18,0x0e19,0x0e1a,0x0e1b,0x0e1c,0x0e1d,0x0e1e,0x0e1f,
  0x0e20,0x0e21,0x0e22,0x0e23,0x0e24,0x0e25,0x0e26,0x0e27,
  0x0e28,0x0e29,0x0e2a,0x0e2b,0x0e2c,0x0e2d,0x0e2e,0x0e2f,
  0x0e30,0x0e31,0x0e32,0x0e33,0x0e34,0x0e35,0x0e36,0x0e37,
  0x0e38,0x0e39,0x0e3a,UBOGON,UBOGON,UBOGON,UBOGON,0x0e3f,
  0x0e40,0x0e41,0x0e42,0x0e43,0x0e44,0x0e45,0x0e46,0x0e47,
  0x0e48,0x0e49,0x0e4a,0x0e4b,0x0e4c,0x0e4d,0x0e4e,0x0e4f,
  0x0e50,0x0e51,0x0e52,0x0e53,0x0e54,0x0e55,0x0e56,0x0e57,
  0x0e58,0x0e59,0x0e5a,0x0e5b,UBOGON,UBOGON,UBOGON,UBOGON
};

				/* Windows Latin-2 */
static const unsigned short windows_1250tab[128] = {
  0x20ac,UBOGON,0x201a,UBOGON,0x201e,0x2026,0x2020,0x2021,
  UBOGON,0x2030,0x0160,0x2039,0x015a,0x0164,0x017d,0x0179,
  UBOGON,0x2018,0x2019,0x201c,0x201d,0x2022,0x2013,0x2014,
  UBOGON,0x2122,0x0161,0x203a,0x015b,0x0165,0x017e,0x017a,
  0x00a0,0x02c7,0x02d8,0x0141,0x00a4,0x0104,0x00a6,0x00a7,
  0x00a8,0x00a9,0x015e,0x00ab,0x00ac,0x00ad,0x00ae,0x017b,
  0x00b0,0x00b1,0x02db,0x0142,0x00b4,0x00b5,0x00b6,0x00b7,
  0x00b8,0x0105,0x015f,0x00bb,0x013d,0x02dd,0x013e,0x017c,
  0x0154,0x00c1,0x00c2,0x0102,0x00c4,0x0139,0x0106,0x00c7,
  0x010c,0x00c9,0x0118,0x00cb,0x011a,0x00cd,0x00ce,0x010e,
  0x0110,0x0143,0x0147,0x00d3,0x00d4,0x0150,0x00d6,0x00d7,
  0x0158,0x016e,0x00da,0x0170,0x00dc,0x00dd,0x0162,0x00df,
  0x0155,0x00e1,0x00e2,0x0103,0x00e4,0x013a,0x0107,0x00e7,
  0x010d,0x00e9,0x0119,0x00eb,0x011b,0x00ed,0x00ee,0x010f,
  0x0111,0x0144,0x0148,0x00f3,0x00f4,0x0151,0x00f6,0x00f7,
  0x0159,0x016f,0x00fa,0x0171,0x00fc,0x00fd,0x0163,0x02d9
};

				/* Windows Cyrillic */
static const unsigned short windows_1251tab[128] = {
  0x0402,0x0403,0x201a,0x0453,0x201e,0x2026,0x2020,0x2021,
  0x20ac,0x2030,0x0409,0x2039,0x040a,0x040c,0x040b,0x040f,
  0x0452,0x2018,0x2019,0x201c,0x201d,0x2022,0x2013,0x2014,
  UBOGON,0x2122,0x0459,0x203a,0x045a,0x045c,0x045b,0x045f,
  0x00a0,0x040e,0x045e,0x0408,0x00a4,0x0490,0x00a6,0x00a7,
  0x0401,0x00a9,0x0404,0x00ab,0x00ac,0x00ad,0x00ae,0x0407,
  0x00b0,0x00b1,0x0406,0x0456,0x0491,0x00b5,0x00b6,0x00b7,
  0x0451,0x2116,0x0454,0x00bb,0x0458,0x0405,0x0455,0x0457,
  0x0410,0x0411,0x0412,0x0413,0x0414,0x0415,0x0416,0x0417,
  0x0418,0x0419,0x041a,0x041b,0x041c,0x041d,0x041e,0x041f,
  0x0420,0x0421,0x0422,0x0423,0x0424,0x0425,0x0426,0x0427,
  0x0428,0x0429,0x042a,0x042b,0x042c,0x042d,0x042e,0x042f,
  0x0430,0x0431,0x0432,0x0433,0x0434,0x0435,0x0436,0x0437,
  0x0438,0x0439,0x043a,0x043b,0x043c,0x043d,0x043e,0x043f,
  0x0440,0x0441,0x0442,0x0443,0x0444,0x0445,0x0446,0x0447,
  0x0448,0x0449,0x044a,0x044b,0x044c,0x044d,0x044e,0x044f
};

				/* Windows Latin-1 */
static const unsigned short windows_1252tab[128] = {
  0x20ac,UBOGON,0x201a,0x0192,0x201e,0x2026,0x2020,0x2021,
  0x02c6,0x2030,0x0160,0x2039,0x0152,UBOGON,0x017d,UBOGON,
  UBOGON,0x2018,0x2019,0x201c,0x201d,0x2022,0x2013,0x2014,
  0x02dc,0x2122,0x0161,0x203a,0x0153,UBOGON,0x017e,0x0178,
  0x00a0,0x00a1,0x00a2,0x00a3,0x00a4,0x00a5,0x00a6,0x00a7,
  0x00a8,0x00a9,0x00aa,0x00ab,0x00ac,0x00ad,0x00ae,0x00af,
  0x00b0,0x00b1,0x00b2,0x00b3,0x00b4,0x00b5,0x00b6,0x00b7,
  0x00b8,0x00b9,0x00ba,0x00bb,0x00bc,0x00bd,0x00be,0x00bf,
  0x00c0,0x00c1,0x00c2,0x00c3,0x00c4,0x00c5,0x00c6,0x00c7,
  0x00c8,0x00c9,0x00ca,0x00cb,0x00cc,0x00cd,0x00ce,0x00cf,
  0x00d0,0x00d1,0x00d2,0x00d3,0x00d4,0x00d5,0x00d6,0x00d7,
  0x00d8,0x00d9,0x00da,0x00db,0x00dc,0x00dd,0x00de,0x00df,
  0x00e0,0x00e1,0x00e2,0x00e3,0x00e4,0x00e5,0x00e6,0x00e7,
  0x00e8,0x00e9,0x00ea,0x00eb,0x00ec,0x00ed,0x00ee,0x00ef,
  0x00f0,0x00f1,0x00f2,0x00f3,0x00f4,0x00f5,0x00f6,0x00f7,
  0x00f8,0x00f9,0x00fa,0x00fb,0x00fc,0x00fd,0x00fe,0x00ff
};


				/* Windows Greek */
static const unsigned short windows_1253tab[128] = {
  0x20ac,UBOGON,0x201a,0x0192,0x201e,0x2026,0x2020,0x2021,
  UBOGON,0x2030,UBOGON,0x2039,UBOGON,UBOGON,UBOGON,UBOGON,
  UBOGON,0x2018,0x2019,0x201c,0x201d,0x2022,0x2013,0x2014,
  UBOGON,0x2122,UBOGON,0x203a,UBOGON,UBOGON,UBOGON,UBOGON,
  0x00a0,0x0385,0x0386,0x00a3,0x00a4,0x00a5,0x00a6,0x00a7,
  0x00a8,0x00a9,UBOGON,0x00ab,0x00ac,0x00ad,0x00ae,0x2015,
  0x00b0,0x00b1,0x00b2,0x00b3,0x0384,0x00b5,0x00b6,0x00b7,
  0x0388,0x0389,0x038a,0x00bb,0x038c,0x00bd,0x038e,0x038f,
  0x0390,0x0391,0x0392,0x0393,0x0394,0x0395,0x0396,0x0397,
  0x0398,0x0399,0x039a,0x039b,0x039c,0x039d,0x039e,0x039f,
  0x03a0,0x03a1,UBOGON,0x03a3,0x03a4,0x03a5,0x03a6,0x03a7,
  0x03a8,0x03a9,0x03aa,0x03ab,0x03ac,0x03ad,0x03ae,0x03af,
  0x03b0,0x03b1,0x03b2,0x03b3,0x03b4,0x03b5,0x03b6,0x03b7,
  0x03b8,0x03b9,0x03ba,0x03bb,0x03bc,0x03bd,0x03be,0x03bf,
  0x03c0,0x03c1,0x03c2,0x03c3,0x03c4,0x03c5,0x03c6,0x03c7,
  0x03c8,0x03c9,0x03ca,0x03cb,0x03cc,0x03cd,0x03ce,UBOGON
};

				/* Windows Turkish */
static const unsigned short windows_1254tab[128] = {
  0x20ac,UBOGON,0x201a,0x0192,0x201e,0x2026,0x2020,0x2021,
  0x02c6,0x2030,0x0160,0x2039,0x0152,UBOGON,UBOGON,UBOGON,
  UBOGON,0x2018,0x2019,0x201c,0x201d,0x2022,0x2013,0x2014,
  0x02dc,0x2122,0x0161,0x203a,0x0153,UBOGON,UBOGON,0x0178,
  0x00a0,0x00a1,0x00a2,0x00a3,0x00a4,0x00a5,0x00a6,0x00a7,
  0x00a8,0x00a9,0x00aa,0x00ab,0x00ac,0x00ad,0x00ae,0x00af,
  0x00b0,0x00b1,0x00b2,0x00b3,0x00b4,0x00b5,0x00b6,0x00b7,
  0x00b8,0x00b9,0x00ba,0x00bb,0x00bc,0x00bd,0x00be,0x00bf,
  0x00c0,0x00c1,0x00c2,0x00c3,0x00c4,0x00c5,0x00c6,0x00c7,
  0x00c8,0x00c9,0x00ca,0x00cb,0x00cc,0x00cd,0x00ce,0x00cf,
  0x011e,0x00d1,0x00d2,0x00d3,0x00d4,0x00d5,0x00d6,0x00d7,
  0x00d8,0x00d9,0x00da,0x00db,0x00dc,0x0130,0x015e,0x00df,
  0x00e0,0x00e1,0x00e2,0x00e3,0x00e4,0x00e5,0x00e6,0x00e7,
  0x00e8,0x00e9,0x00ea,0x00eb,0x00ec,0x00ed,0x00ee,0x00ef,
  0x011f,0x00f1,0x00f2,0x00f3,0x00f4,0x00f5,0x00f6,0x00f7,
  0x00f8,0x00f9,0x00fa,0x00fb,0x00fc,0x0131,0x015f,0x00ff
};

				/* Windows Hebrew */
static const unsigned short windows_1255tab[128] = {
  0x20ac,UBOGON,0x201a,0x0192,0x201e,0x2026,0x2020,0x2021,
  0x02c6,0x2030,UBOGON,0x2039,UBOGON,UBOGON,UBOGON,UBOGON,
  UBOGON,0x2018,0x2019,0x201c,0x201d,0x2022,0x2013,0x2014,
  0x02dc,0x2122,UBOGON,0x203a,UBOGON,UBOGON,UBOGON,UBOGON,
  0x00a0,0x00a1,0x00a2,0x00a3,0x20aa,0x00a5,0x00a6,0x00a7,
  0x00a8,0x00a9,0x00d7,0x00ab,0x00ac,0x00ad,0x00ae,0x00af,
  0x00b0,0x00b1,0x00b2,0x00b3,0x00b4,0x00b5,0x00b6,0x00b7,
  0x00b8,0x00b9,0x00f7,0x00bb,0x00bc,0x00bd,0x00be,0x00bf,
  0x05b0,0x05b1,0x05b2,0x05b3,0x05b4,0x05b5,0x05b6,0x05b7,
  0x05b8,0x05b9,UBOGON,0x05bb,0x05bc,0x05bd,0x05be,0x05bf,
  0x05c0,0x05c1,0x05c2,0x05c3,0x05f0,0x05f1,0x05f2,0x05f3,
  0x05f4,UBOGON,UBOGON,UBOGON,UBOGON,UBOGON,UBOGON,UBOGON,
  0x05d0,0x05d1,0x05d2,0x05d3,0x05d4,0x05d5,0x05d6,0x05d7,
  0x05d8,0x05d9,0x05da,0x05db,0x05dc,0x05dd,0x05de,0x05df,
  0x05e0,0x05e1,0x05e2,0x05e3,0x05e4,0x05e5,0x05e6,0x05e7,
  0x05e8,0x05e9,0x05ea,UBOGON,UBOGON,0x200e,0x200f,UBOGON
};

				/* Windows Arabic */
static const unsigned short windows_1256tab[128] = {
  0x20ac,0x067e,0x201a,0x0192,0x201e,0x2026,0x2020,0x2021,
  0x02c6,0x2030,0x0679,0x2039,0x0152,0x0686,0x0698,0x0688,
  0x06af,0x2018,0x2019,0x201c,0x201d,0x2022,0x2013,0x2014,
  0x06a9,0x2122,0x0691,0x203a,0x0153,0x200c,0x200d,0x06ba,
  0x00a0,0x060c,0x00a2,0x00a3,0x00a4,0x00a5,0x00a6,0x00a7,
  0x00a8,0x00a9,0x06be,0x00ab,0x00ac,0x00ad,0x00ae,0x00af,
  0x00b0,0x00b1,0x00b2,0x00b3,0x00b4,0x00b5,0x00b6,0x00b7,
  0x00b8,0x00b9,0x061b,0x00bb,0x00bc,0x00bd,0x00be,0x061f,
  0x06c1,0x0621,0x0622,0x0623,0x0624,0x0625,0x0626,0x0627,
  0x0628,0x0629,0x062a,0x062b,0x062c,0x062d,0x062e,0x062f,
  0x0630,0x0631,0x0632,0x0633,0x0634,0x0635,0x0636,0x00d7,
  0x0637,0x0638,0x0639,0x063a,0x0640,0x0641,0x0642,0x0643,
  0x00e0,0x0644,0x00e2,0x0645,0x0646,0x0647,0x0648,0x00e7,
  0x00e8,0x00e9,0x00ea,0x00eb,0x0649,0x064a,0x00ee,0x00ef,
  0x064b,0x064c,0x064d,0x064e,0x00f4,0x064f,0x0650,0x00f7,
  0x0651,0x00f9,0x0652,0x00fb,0x00fc,0x200e,0x200f,0x06d2
};

				/* Windows Baltic */
static const unsigned short windows_1257tab[128] = {
  0x20ac,UBOGON,0x201a,UBOGON,0x201e,0x2026,0x2020,0x2021,
  UBOGON,0x2030,UBOGON,0x2039,UBOGON,0x00a8,0x02c7,0x00b8,
  UBOGON,0x2018,0x2019,0x201c,0x201d,0x2022,0x2013,0x2014,
  UBOGON,0x2122,UBOGON,0x203a,UBOGON,0x00af,0x02db,UBOGON,
  0x00a0,UBOGON,0x00a2,0x00a3,0x00a4,UBOGON,0x00a6,0x00a7,
  0x00d8,0x00a9,0x0156,0x00ab,0x00ac,0x00ad,0x00ae,0x00c6,
  0x00b0,0x00b1,0x00b2,0x00b3,0x00b4,0x00b5,0x00b6,0x00b7,
  0x00f8,0x00b9,0x0157,0x00bb,0x00bc,0x00bd,0x00be,0x00e6,
  0x0104,0x012e,0x0100,0x0106,0x00c4,0x00c5,0x0118,0x0112,
  0x010c,0x00c9,0x0179,0x0116,0x0122,0x0136,0x012a,0x013b,
  0x0160,0x0143,0x0145,0x00d3,0x014c,0x00d5,0x00d6,0x00d7,
  0x0172,0x0141,0x015a,0x016a,0x00dc,0x017b,0x017d,0x00df,
  0x0105,0x012f,0x0101,0x0107,0x00e4,0x00e5,0x0119,0x0113,
  0x010d,0x00e9,0x017a,0x0117,0x0123,0x0137,0x012b,0x013c,
  0x0161,0x0144,0x0146,0x00f3,0x014d,0x00f5,0x00f6,0x00f7,
  0x0173,0x0142,0x015b,0x016b,0x00fc,0x017c,0x017e,0x02d9
};

				/* Windows Vietnamese */
static const unsigned short windows_1258tab[128] = {
  0x20ac,UBOGON,0x201a,0x0192,0x201e,0x2026,0x2020,0x2021,
  0x02c6,0x2030,UBOGON,0x2039,0x0152,UBOGON,UBOGON,UBOGON,
  UBOGON,0x2018,0x2019,0x201c,0x201d,0x2022,0x2013,0x2014,
  0x02dc,0x2122,UBOGON,0x203a,0x0153,UBOGON,UBOGON,0x0178,
  0x00a0,0x00a1,0x00a2,0x00a3,0x00a4,0x00a5,0x00a6,0x00a7,
  0x00a8,0x00a9,0x00aa,0x00ab,0x00ac,0x00ad,0x00ae,0x00af,
  0x00b0,0x00b1,0x00b2,0x00b3,0x00b4,0x00b5,0x00b6,0x00b7,
  0x00b8,0x00b9,0x00ba,0x00bb,0x00bc,0x00bd,0x00be,0x00bf,
  0x00c0,0x00c1,0x00c2,0x0102,0x00c4,0x00c5,0x00c6,0x00c7,
  0x00c8,0x00c9,0x00ca,0x00cb,0x0300,0x00cd,0x00ce,0x00cf,
  0x0110,0x00d1,0x0309,0x00d3,0x00d4,0x01a0,0x00d6,0x00d7,
  0x00d8,0x00d9,0x00da,0x00db,0x00dc,0x01af,0x0303,0x00df,
  0x00e0,0x00e1,0x00e2,0x0103,0x00e4,0x00e5,0x00e6,0x00e7,
  0x00e8,0x00e9,0x00ea,0x00eb,0x0301,0x00ed,0x00ee,0x00ef,
  0x0111,0x00f1,0x0323,0x00f3,0x00f4,0x01a1,0x00f6,0x00f7,
  0x00f8,0x00f9,0x00fa,0x00fb,0x00fc,0x01b0,0x20ab,0x00ff
};
