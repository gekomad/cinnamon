#if !defined(BITMAP_H)
#define BITMAP_H
#include "maindefine.h"
#ifdef _MSC_VER
#include "LIMITS.H"
#endif
#define  RANK_1 0xff00ULL
#define  RANK_3 0xff000000ULL
#define  RANK_4 0xff00000000ULL
#define  RANK_6 0xff000000000000ULL

const uchar TABLOG_VERT45[64] = { 1, 2, 4, 8, 16, 32, 64, 128, 1, 2, 4, 8, 16, 32, 64, 128, 1, 2, 4, 8, 16, 32, 64, 128, 1, 2, 4, 8, 16, 32, 64, 128, 1, 2, 4, 8, 16, 32, 64, 128, 1, 2, 4, 8, 16, 32, 64, 128, 1, 2, 4, 8, 16, 32, 64, 128, 1, 2, 4, 8, 16, 32, 64, 128 };

const uchar TABLOG_VERT90[64] = { 1, 1, 1, 1, 1, 1, 1, 1, 2, 2, 2, 2, 2, 2, 2, 2, 4, 4, 4, 4, 4, 4, 4, 4, 8, 8, 8, 8, 8, 8, 8, 8, 16, 16, 16, 16, 16, 16, 16, 16, 32, 32, 32, 32, 32, 32, 32, 32, 64, 64, 64, 64, 64, 64, 64, 64, 128, 128, 128, 128, 128, 128, 128, 128 };

#ifndef PERFT_MODE

#define  FILE_0 0x101010101010101ULL
#define  FILE_1 0x202020202020202ULL
#define  FILE_2 0x404040404040404ULL
#define  FILE_3 0x808080808080808ULL
#define  FILE_4 0x1010101010101010ULL
#define  FILE_5 0x2020202020202020ULL
#define  FILE_6 0x4040404040404040ULL
#define  FILE_7 0x8080808080808080ULL

const char COLORS[64] = { WHITE, BLACK, WHITE, BLACK, WHITE, BLACK, WHITE, BLACK, BLACK, WHITE,

  BLACK, WHITE, BLACK, WHITE, BLACK, WHITE, WHITE, BLACK, WHITE, BLACK, WHITE, BLACK, WHITE, BLACK, BLACK, WHITE, BLACK, WHITE, BLACK, WHITE, BLACK, WHITE, WHITE, BLACK, WHITE, BLACK, WHITE, BLACK, WHITE, BLACK, BLACK, WHITE, BLACK, WHITE, BLACK, WHITE, BLACK, WHITE, WHITE, BLACK, WHITE, BLACK, WHITE, BLACK, WHITE, BLACK, BLACK, WHITE, BLACK, WHITE, BLACK, WHITE, BLACK, WHITE
};

const u64 RANK[8] = { 0xFFULL, RANK_1, 0xFF0000ULL, RANK_3, RANK_4, 0xFF0000000000ULL, RANK_6,

  0xFF00000000000000ULL
};

const u64 LINK_ROOKS[64][64] = { {0xffffffffffffffffULL, 0xffffffffffffffffULL, 0x2ULL, 0x6ULL, 0xeULL,

				  0x1eULL, 0x3eULL, 0x7eULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0x100ULL, 0xffffffffffffffffULL,

				  0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL,

				  0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL,

				  0x10100ULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0x1010100ULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0x101010100ULL,

				  0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL,

				  0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL,

				  0x10101010100ULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0x10101010100ULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL}, {0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0x4ULL, 0xcULL, 0x1cULL, 0x3cULL, 0x7cULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL,

																																																	  0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL,

																																																	  0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0x200ULL,

																																																	  0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL,

																																																	  0xffffffffffffffffULL, 0x20200ULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL,

																																																	  0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0x2020200ULL,

																																																	  0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL,

																																																	  0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0x202020200ULL,

																																																	  0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL,

																																																	  0xffffffffffffffffULL, 0x20202020200ULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL,

																																																	  0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0x2020202020200ULL,

																																																	  0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL},

{0x2ULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL,

 0xffffffffffffffffULL, 0x8ULL, 0x18ULL, 0x38ULL, 0x78ULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL,

 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL,

 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL,

 0xffffffffffffffffULL, 0x400ULL, 0xffffffffffffffffULL,

 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0x40400ULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0x4040400ULL,

 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL,

 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL,

 0xffffffffffffffffULL, 0x404040400ULL, 0xffffffffffffffffULL,

 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0x40404040400ULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0x4040404040400ULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL}, {0x6ULL, 0x4ULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL,

																																																								       0xffffffffffffffffULL, 0x10ULL, 0x30ULL, 0x70ULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL,

																																																								       0xffffffffffffffffULL,

																																																								       0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL,

																																																								       0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL,

																																																								       0xffffffffffffffffULL, 0xffffffffffffffffULL, 0x800ULL,

																																																								       0xffffffffffffffffULL,

																																																								       0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL,

																																																								       0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL,

																																																								       0x80800ULL,

																																																								       0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL,

																																																								       0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL,

																																																								       0xffffffffffffffffULL, 0x8080800ULL, 0xffffffffffffffffULL,

																																																								       0xffffffffffffffffULL,

																																																								       0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL,

																																																								       0xffffffffffffffffULL, 0xffffffffffffffffULL, 0x808080800ULL,

																																																								       0xffffffffffffffffULL,

																																																								       0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL,

																																																								       0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL,

																																																								       0x80808080800ULL,

																																																								       0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL,

																																																								       0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL,

																																																								       0xffffffffffffffffULL, 0x8080808080800ULL, 0xffffffffffffffffULL,

																																																								       0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL},

{0xeULL, 0xcULL, 0x8ULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL,

 0xffffffffffffffffULL, 0x20ULL, 0x60ULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0x1000ULL,

 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL,

 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL,

 0xffffffffffffffffULL, 0x101000ULL, 0xffffffffffffffffULL,

 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0x10101000ULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0x1010101000ULL,

 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL,

 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL,

 0xffffffffffffffffULL, 0x101010101000ULL, 0xffffffffffffffffULL,

 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0x10101010101000ULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL}, {0x1eULL, 0x1cULL, 0x18ULL, 0x10ULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL,

																												       0xffffffffffffffffULL, 0x40ULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL,

																												       0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL,

																												       0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0x2000ULL,

																												       0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL,

																												       0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0x202000ULL,

																												       0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL,

																												       0xffffffffffffffffULL, 0x20202000ULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL,

																												       0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0x2020202000ULL,

																												       0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL,

																												       0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0x202020202000ULL,

																												       0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL,

																												       0xffffffffffffffffULL, 0x20202020202000ULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL},

{0x3eULL, 0x3cULL, 0x38ULL, 0x30ULL, 0x20ULL, 0xffffffffffffffffULL,

 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0x4000ULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0x404000ULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL,

 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL,

 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0x40404000ULL,

 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0x4040404000ULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0x404040404000ULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL,

 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL,

 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0x40404040404000ULL,

 0xffffffffffffffffULL}, {0x7eULL, 0x7cULL, 0x78ULL, 0x70ULL, 0x60ULL, 0x40ULL, 0xffffffffffffffffULL,

			  0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL,

			  0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL,

			  0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL,

			  0x8000ULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL,

			  0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0x808000ULL, 0xffffffffffffffffULL,

			  0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL,

			  0xffffffffffffffffULL, 0xffffffffffffffffULL, 0x80808000ULL, 0xffffffffffffffffULL,

			  0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL,

			  0x8080808000ULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL,

			  0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0x808080808000ULL, 0xffffffffffffffffULL,

			  0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL,

			  0xffffffffffffffffULL, 0xffffffffffffffffULL, 0x80808080808000ULL}, {0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL,

											       0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL,

											       0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL,

											       0xffffffffffffffffULL, 0x200ULL, 0x600ULL, 0xe00ULL, 0x1e00ULL, 0x3e00ULL, 0x7e00ULL,

											       0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL,

											       0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL,

											       0xffffffffffffffffULL, 0xffffffffffffffffULL, 0x10000ULL,

											       0xffffffffffffffffULL,

											       0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL,

											       0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL,

											       0x1010000ULL,

											       0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL,

											       0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL,

											       0xffffffffffffffffULL, 0x101010000ULL, 0xffffffffffffffffULL,

											       0xffffffffffffffffULL,

											       0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL,

											       0xffffffffffffffffULL, 0xffffffffffffffffULL, 0x10101010000ULL,

											       0xffffffffffffffffULL,

											       0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL,

											       0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL,

											       0x1010101010000ULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL,

											       0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL,

											       0xffffffffffffffffULL, 0xffffffffffffffffULL},

{0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL,

 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL,

 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL,

 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0x400ULL, 0xc00ULL,

 0x1c00ULL, 0x3c00ULL, 0x7c00ULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0x20000ULL,

 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL,

 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL,

 0xffffffffffffffffULL, 0x2020000ULL, 0xffffffffffffffffULL,

 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0x202020000ULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0x20202020000ULL,

 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL,

 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL,

 0xffffffffffffffffULL, 0x2020202020000ULL, 0xffffffffffffffffULL,

 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL,

 0xffffffffffffffffULL, 0xffffffffffffffffULL}, {0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL,

						 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL,

						 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0x200ULL,

						 0xffffffffffffffffULL,

						 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0x800ULL, 0x1800ULL,

						 0x3800ULL, 0x7800ULL,

						 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL,

						 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL,

						 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL,

						 0xffffffffffffffffULL, 0x40000ULL, 0xffffffffffffffffULL,

						 0xffffffffffffffffULL,

						 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL,

						 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0x4040000ULL,

						 0xffffffffffffffffULL,

						 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL,

						 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL,

						 0x404040000ULL,

						 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL,

						 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL,

						 0xffffffffffffffffULL, 0x40404040000ULL, 0xffffffffffffffffULL,

						 0xffffffffffffffffULL,

						 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL,

						 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0x40404040000ULL,

						 0xffffffffffffffffULL,

						 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL,

						 0xffffffffffffffffULL},

{0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL,

 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL,

 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0x600ULL, 0x400ULL,

 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0x1000ULL, 0x3000ULL, 0x7000ULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0x80000ULL, 0xffffffffffffffffULL,

 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL,

 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL,

 0x8080000ULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0x808080000ULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0x80808080000ULL, 0xffffffffffffffffULL,

 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL,

 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL,

 0x8080808080000ULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL,

 0xffffffffffffffffULL, 0xffffffffffffffffULL}, {0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL,

						 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL,

						 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xe00ULL, 0xc00ULL, 0x800ULL,

						 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL,

						 0x2000ULL, 0x6000ULL,

						 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL,

						 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL,

						 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL,

						 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL,

						 0x100000ULL,

						 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL,

						 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL,

						 0xffffffffffffffffULL, 0x10100000ULL, 0xffffffffffffffffULL,

						 0xffffffffffffffffULL,

						 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL,

						 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0x1010100000ULL,

						 0xffffffffffffffffULL,

						 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL,

						 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL,

						 0x101010100000ULL,

						 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL,

						 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL,

						 0xffffffffffffffffULL, 0x10101010100000ULL, 0xffffffffffffffffULL,

						 0xffffffffffffffffULL, 0xffffffffffffffffULL},

{0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL,

 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL,

 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0x1e00ULL, 0x1c00ULL,

 0x1800ULL, 0x1000ULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0x4000ULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0x200000ULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL,

 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL,

 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0x20200000ULL,

 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0x2020200000ULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0x202020200000ULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL,

 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL,

 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0x20202020200000ULL,

 0xffffffffffffffffULL, 0xffffffffffffffffULL}, {0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL,

						 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL,

						 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0x3e00ULL, 0x3c00ULL,

						 0x3800ULL, 0x3000ULL,

						 0x2000ULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL,

						 0xffffffffffffffffULL,

						 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL,

						 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL,

						 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL,

						 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL,

						 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0x400000ULL,

						 0xffffffffffffffffULL,

						 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL,

						 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL,

						 0x40400000ULL,

						 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL,

						 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL,

						 0xffffffffffffffffULL, 0x4040400000ULL, 0xffffffffffffffffULL,

						 0xffffffffffffffffULL,

						 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL,

						 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0x404040400000ULL,

						 0xffffffffffffffffULL,

						 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL,

						 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL,

						 0x40404040400000ULL, 0xffffffffffffffffULL},

{0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL,

 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL,

 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0x7e00ULL, 0x7c00ULL,

 0x7800ULL, 0x7000ULL, 0x6000ULL, 0x4000ULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0x800000ULL, 0xffffffffffffffffULL,

 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL,

 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL,

 0x80800000ULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0x8080800000ULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0x808080800000ULL, 0xffffffffffffffffULL,

 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL,

 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL,

 0x80808080800000ULL}, {0x100ULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL,

			0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL,

			0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL,

			0xffffffffffffffffULL, 0xffffffffffffffffULL, 0x20000ULL, 0x60000ULL, 0xe0000ULL,

			0x1e0000ULL, 0x3e0000ULL, 0x7e0000ULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL,

			0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL,

			0x1000000ULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL,

			0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0x101000000ULL, 0xffffffffffffffffULL,

			0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL,

			0xffffffffffffffffULL, 0xffffffffffffffffULL, 0x10101000000ULL, 0xffffffffffffffffULL,

			0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL,

			0x1010101000000ULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL,

			0xffffffffffffffffULL, 0xffffffffffffffffULL},

{0xffffffffffffffffULL, 0x200ULL, 0xffffffffffffffffULL,

 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0x40000ULL, 0xc0000ULL, 0x1c0000ULL, 0x3c0000ULL, 0x7c0000ULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0x2000000ULL, 0xffffffffffffffffULL,

 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL,

 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL,

 0x202000000ULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0x20202000000ULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0x2020202000000ULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL}, {0xffffffffffffffffULL, 0xffffffffffffffffULL, 0x400ULL,

																																																																     0xffffffffffffffffULL,

																																																																     0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL,

																																																																     0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL,

																																																																     0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL,

																																																																     0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL,

																																																																     0x20000ULL,

																																																																     0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL,

																																																																     0x80000ULL,

																																																																     0x180000ULL, 0x380000ULL, 0x780000ULL, 0xffffffffffffffffULL,

																																																																     0xffffffffffffffffULL,

																																																																     0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL,

																																																																     0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL,

																																																																     0xffffffffffffffffULL, 0xffffffffffffffffULL, 0x4000000ULL,

																																																																     0xffffffffffffffffULL,

																																																																     0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL,

																																																																     0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL,

																																																																     0x404000000ULL,

																																																																     0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL,

																																																																     0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL,

																																																																     0xffffffffffffffffULL, 0x40404000000ULL, 0xffffffffffffffffULL,

																																																																     0xffffffffffffffffULL,

																																																																     0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL,

																																																																     0xffffffffffffffffULL, 0xffffffffffffffffULL, 0x4040404000000ULL,

																																																																     0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL,

																																																																     0xffffffffffffffffULL, 0xffffffffffffffffULL},

{0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL,

 0x800ULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0x60000ULL, 0x40000ULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0x100000ULL, 0x300000ULL, 0x700000ULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL,

 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL,

 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL,

 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL,

 0x8000000ULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0x808000000ULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0x80808000000ULL, 0xffffffffffffffffULL,

 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL,

 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL,

 0x8080808000000ULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL,

 0xffffffffffffffffULL, 0xffffffffffffffffULL}, {0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL,

						 0xffffffffffffffffULL, 0x1000ULL, 0xffffffffffffffffULL,

						 0xffffffffffffffffULL,

						 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL,

						 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL,

						 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL,

						 0xe0000ULL,

						 0xc0000ULL, 0x80000ULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL,

						 0xffffffffffffffffULL, 0x200000ULL, 0x600000ULL, 0xffffffffffffffffULL,

						 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL,

						 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL,

						 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL,

						 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0x10000000ULL,

						 0xffffffffffffffffULL,

						 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL,

						 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL,

						 0x1010000000ULL,

						 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL,

						 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL,

						 0xffffffffffffffffULL, 0x101010000000ULL, 0xffffffffffffffffULL,

						 0xffffffffffffffffULL,

						 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL,

						 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0x10101010000000ULL,

						 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL},

{0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL,

 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0x2000ULL,

 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0x1e0000ULL, 0x1c0000ULL, 0x180000ULL, 0x100000ULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL,

 0xffffffffffffffffULL, 0x400000ULL, 0xffffffffffffffffULL,

 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0x20000000ULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0x2020000000ULL,

 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL,

 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL,

 0xffffffffffffffffULL, 0x202020000000ULL, 0xffffffffffffffffULL,

 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0x20202020000000ULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL},

{0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL,

 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL,

 0x4000ULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0x3e0000ULL, 0x3c0000ULL, 0x380000ULL, 0x300000ULL, 0x200000ULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0x40000000ULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL,

 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL,

 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0x4040000000ULL,

 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0x404040000000ULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0x40404040000000ULL, 0xffffffffffffffffULL}, {0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL,

																																																    0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL,

																																																    0xffffffffffffffffULL, 0x8000ULL, 0xffffffffffffffffULL,

																																																    0xffffffffffffffffULL,

																																																    0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL,

																																																    0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL,

																																																    0x7e0000ULL, 0x7c0000ULL, 0x780000ULL, 0x700000ULL, 0x600000ULL, 0x400000ULL,

																																																    0xffffffffffffffffULL,

																																																    0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL,

																																																    0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL,

																																																    0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL,

																																																    0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL,

																																																    0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL,

																																																    0xffffffffffffffffULL, 0x80000000ULL, 0xffffffffffffffffULL,

																																																    0xffffffffffffffffULL,

																																																    0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL,

																																																    0xffffffffffffffffULL, 0xffffffffffffffffULL, 0x8080000000ULL,

																																																    0xffffffffffffffffULL,

																																																    0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL,

																																																    0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL,

																																																    0x808080000000ULL,

																																																    0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL,

																																																    0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL,

																																																    0xffffffffffffffffULL, 0x80808080000000ULL},

{0x10100ULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL,

 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0x10000ULL, 0xffffffffffffffffULL,

 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0x2000000ULL, 0x6000000ULL, 0xe000000ULL, 0x1e000000ULL, 0x3e000000ULL, 0x7e000000ULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0x100000000ULL,

 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0x10100000000ULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0x1010100000000ULL, 0xffffffffffffffffULL,

 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL,

 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL},

{0xffffffffffffffffULL, 0x20200ULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0x20000ULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL,

 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0x4000000ULL, 0xc000000ULL, 0x1c000000ULL, 0x3c000000ULL, 0x7c000000ULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL,

 0x200000000ULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0x20200000000ULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL,

 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0x2020200000000ULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL}, {0xffffffffffffffffULL, 0xffffffffffffffffULL, 0x40400ULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0x40000ULL,

																																		    0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0x2000000ULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0x8000000ULL, 0x18000000ULL, 0x38000000ULL, 0x78000000ULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0x400000000ULL, 0xffffffffffffffffULL,
																																		    0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL,
																																		    0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0x40400000000ULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0x4040400000000ULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL}, {0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0x80800ULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0x80000ULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL,
																																																																																		     0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL,
																																																																																		     0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0x6000000ULL, 0x4000000ULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0x10000000ULL, 0x30000000ULL, 0x70000000ULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL,
																																																																																		     0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0x800000000ULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL,
																																																																																		     0xffffffffffffffffULL, 0xffffffffffffffffULL, 0x80800000000ULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL,
																																																																																		     0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0x8080800000000ULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL}, {0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0x101000ULL,
																																																																																																															  0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL,
																																																																																																															  0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0x100000ULL, 0xffffffffffffffffULL,
																																																																																																															  0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL,
																																																																																																															  0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL,
																																																																																																															  0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xe000000ULL, 0xc000000ULL,
																																																																																																															  0x8000000ULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0x20000000ULL,
																																																																																																															  0x60000000ULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL,
																																																																																																															  0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL,
																																																																																																															  0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0x1000000000ULL,
																																																																																																															  0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL,
																																																																																																															  0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0x101000000000ULL, 0xffffffffffffffffULL,
																																																																																																															  0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL,
																																																																																																															  0xffffffffffffffffULL, 0xffffffffffffffffULL, 0x10101000000000ULL, 0xffffffffffffffffULL,
																																																																																																															  0xffffffffffffffffULL, 0xffffffffffffffffULL}, {0xffffffffffffffffULL, 0xffffffffffffffffULL,
																																																																																																																					  0xffffffffffffffffULL, 0xffffffffffffffffULL,
																																																																																																																					  0xffffffffffffffffULL, 0x202000ULL, 0xffffffffffffffffULL,
																																																																																																																					  0xffffffffffffffffULL, 0xffffffffffffffffULL,
																																																																																																																					  0xffffffffffffffffULL, 0xffffffffffffffffULL,
																																																																																																																					  0xffffffffffffffffULL, 0xffffffffffffffffULL, 0x200000ULL,
																																																																																																																					  0xffffffffffffffffULL, 0xffffffffffffffffULL,
																																																																																																																					  0xffffffffffffffffULL, 0xffffffffffffffffULL,
																																																																																																																					  0xffffffffffffffffULL, 0xffffffffffffffffULL,
																																																																																																																					  0xffffffffffffffffULL, 0xffffffffffffffffULL,
																																																																																																																					  0xffffffffffffffffULL, 0xffffffffffffffffULL, 0x1e000000ULL,
																																																																																																																					  0x1c000000ULL, 0x18000000ULL, 0x10000000ULL,
																																																																																																																					  0xffffffffffffffffULL, 0xffffffffffffffffULL,
																																																																																																																					  0xffffffffffffffffULL, 0x40000000ULL, 0xffffffffffffffffULL,
																																																																																																																					  0xffffffffffffffffULL,
																																																																																																																					  0xffffffffffffffffULL, 0xffffffffffffffffULL,
																																																																																																																					  0xffffffffffffffffULL, 0xffffffffffffffffULL,
																																																																																																																					  0xffffffffffffffffULL, 0xffffffffffffffffULL,
																																																																																																																					  0xffffffffffffffffULL, 0xffffffffffffffffULL,
																																																																																																																					  0xffffffffffffffffULL, 0xffffffffffffffffULL,
																																																																																																																					  0xffffffffffffffffULL, 0x2000000000ULL, 0xffffffffffffffffULL,
																																																																																																																					  0xffffffffffffffffULL, 0xffffffffffffffffULL,
																																																																																																																					  0xffffffffffffffffULL, 0xffffffffffffffffULL,
																																																																																																																					  0xffffffffffffffffULL, 0xffffffffffffffffULL,
																																																																																																																					  0x202000000000ULL, 0xffffffffffffffffULL,
																																																																																																																					  0xffffffffffffffffULL, 0xffffffffffffffffULL,
																																																																																																																					  0xffffffffffffffffULL, 0xffffffffffffffffULL,
																																																																																																																					  0xffffffffffffffffULL, 0xffffffffffffffffULL,
																																																																																																																					  0x20202000000000ULL, 0xffffffffffffffffULL,
																																																																																																																					  0xffffffffffffffffULL}, {0xffffffffffffffffULL,
																																																																																																																								   0xffffffffffffffffULL,
																																																																																																																								   0xffffffffffffffffULL,
																																																																																																																								   0xffffffffffffffffULL,
																																																																																																																								   0xffffffffffffffffULL,
																																																																																																																								   0xffffffffffffffffULL, 0x404000ULL,
																																																																																																																								   0xffffffffffffffffULL,
																																																																																																																								   0xffffffffffffffffULL,
																																																																																																																								   0xffffffffffffffffULL,
																																																																																																																								   0xffffffffffffffffULL,
																																																																																																																								   0xffffffffffffffffULL,
																																																																																																																								   0xffffffffffffffffULL,
																																																																																																																								   0xffffffffffffffffULL, 0x400000ULL,
																																																																																																																								   0xffffffffffffffffULL,
																																																																																																																								   0xffffffffffffffffULL,
																																																																																																																								   0xffffffffffffffffULL,
																																																																																																																								   0xffffffffffffffffULL,
																																																																																																																								   0xffffffffffffffffULL,
																																																																																																																								   0xffffffffffffffffULL,
																																																																																																																								   0xffffffffffffffffULL,
																																																																																																																								   0xffffffffffffffffULL,
																																																																																																																								   0xffffffffffffffffULL, 0x3e000000ULL,
																																																																																																																								   0x3c000000ULL, 0x38000000ULL,
																																																																																																																								   0x30000000ULL, 0x20000000ULL,
																																																																																																																								   0xffffffffffffffffULL,
																																																																																																																								   0xffffffffffffffffULL,
																																																																																																																								   0xffffffffffffffffULL,
																																																																																																																								   0xffffffffffffffffULL,
																																																																																																																								   0xffffffffffffffffULL,
																																																																																																																								   0xffffffffffffffffULL,
																																																																																																																								   0xffffffffffffffffULL,
																																																																																																																								   0xffffffffffffffffULL,
																																																																																																																								   0xffffffffffffffffULL,
																																																																																																																								   0xffffffffffffffffULL,
																																																																																																																								   0xffffffffffffffffULL,
																																																																																																																								   0xffffffffffffffffULL,
																																																																																																																								   0xffffffffffffffffULL,
																																																																																																																								   0xffffffffffffffffULL,
																																																																																																																								   0xffffffffffffffffULL,
																																																																																																																								   0xffffffffffffffffULL,
																																																																																																																								   0xffffffffffffffffULL,
																																																																																																																								   0x4000000000ULL,
																																																																																																																								   0xffffffffffffffffULL,
																																																																																																																								   0xffffffffffffffffULL,
																																																																																																																								   0xffffffffffffffffULL,
																																																																																																																								   0xffffffffffffffffULL,
																																																																																																																								   0xffffffffffffffffULL,
																																																																																																																								   0xffffffffffffffffULL,
																																																																																																																								   0xffffffffffffffffULL,
																																																																																																																								   0x404000000000ULL,
																																																																																																																								   0xffffffffffffffffULL,
																																																																																																																								   0xffffffffffffffffULL,
																																																																																																																								   0xffffffffffffffffULL,
																																																																																																																								   0xffffffffffffffffULL,
																																																																																																																								   0xffffffffffffffffULL,
																																																																																																																								   0xffffffffffffffffULL,
																																																																																																																								   0xffffffffffffffffULL,
																																																																																																																								   0x40404000000000ULL,
																																																																																																																								   0xffffffffffffffffULL},
  {0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0x808000ULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL,
   0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0x800000ULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL,

   0xffffffffffffffffULL, 0x7e000000ULL, 0x7c000000ULL, 0x78000000ULL, 0x70000000ULL, 0x60000000ULL, 0x40000000ULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0x8000000000ULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0x808000000000ULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL,
   0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0x80808000000000ULL}, {0x1010100ULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0x1010000ULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0x1000000ULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL,
														      0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0x200000000ULL, 0x600000000ULL, 0xe00000000ULL, 0x1e00000000ULL, 0x3e00000000ULL, 0x7e00000000ULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0x10000000000ULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0x1010000000000ULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL}, {0xffffffffffffffffULL, 0x2020200ULL,
																																																																																																										       0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL,
																																																																																																										       0xffffffffffffffffULL, 0x2020000ULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL,
																																																																																																										       0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0x2000000ULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL,
																																																																																																										       0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL,
																																																																																																										       0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL,
																																																																																																										       0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0x400000000ULL, 0xc00000000ULL, 0x1c00000000ULL,
																																																																																																										       0x3c00000000ULL, 0x7c00000000ULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL,
																																																																																																										       0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0x20000000000ULL,
																																																																																																										       0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL,
																																																																																																										       0xffffffffffffffffULL, 0x2020000000000ULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL,
																																																																																																										       0xffffffffffffffffULL, 0xffffffffffffffffULL}, {0xffffffffffffffffULL, 0xffffffffffffffffULL, 0x4040400ULL, 0xffffffffffffffffULL,
																																																																																																																       0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL,
																																																																																																																       0xffffffffffffffffULL,
																																																																																																																       0xffffffffffffffffULL, 0x4040000ULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL,
																																																																																																																       0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL,
																																																																																																																       0xffffffffffffffffULL, 0x4000000ULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL,
																																																																																																																       0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL,
																																																																																																																       0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL,
																																																																																																																       0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0x200000000ULL,
																																																																																																																       0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0x800000000ULL,
																																																																																																																       0x1800000000ULL, 0x3800000000ULL, 0x7800000000ULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL,
																																																																																																																       0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL,
																																																																																																																       0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL,
																																																																																																																       0xffffffffffffffffULL, 0x40000000000ULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL,
																																																																																																																       0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL,
																																																																																																																       0xffffffffffffffffULL, 0x4040000000000ULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL,
																																																																																																																       0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL}, {0xffffffffffffffffULL,
																																																																																																																									      0xffffffffffffffffULL,
																																																																																																																									      0xffffffffffffffffULL,
																																																																																																																									      0x8080800ULL,
																																																																																																																									      0xffffffffffffffffULL,
																																																																																																																									      0xffffffffffffffffULL,
																																																																																																																									      0xffffffffffffffffULL,
																																																																																																																									      0xffffffffffffffffULL,
																																																																																																																									      0xffffffffffffffffULL,
																																																																																																																									      0xffffffffffffffffULL,
																																																																																																																									      0xffffffffffffffffULL,
																																																																																																																									      0x8080000ULL,
																																																																																																																									      0xffffffffffffffffULL,
																																																																																																																									      0xffffffffffffffffULL,
																																																																																																																									      0xffffffffffffffffULL,
																																																																																																																									      0xffffffffffffffffULL,
																																																																																																																									      0xffffffffffffffffULL,
																																																																																																																									      0xffffffffffffffffULL,
																																																																																																																									      0xffffffffffffffffULL,
																																																																																																																									      0x8000000ULL,
																																																																																																																									      0xffffffffffffffffULL,
																																																																																																																									      0xffffffffffffffffULL,
																																																																																																																									      0xffffffffffffffffULL,
																																																																																																																									      0xffffffffffffffffULL,
																																																																																																																									      0xffffffffffffffffULL,
																																																																																																																									      0xffffffffffffffffULL,
																																																																																																																									      0xffffffffffffffffULL,
																																																																																																																									      0xffffffffffffffffULL,
																																																																																																																									      0xffffffffffffffffULL,
																																																																																																																									      0xffffffffffffffffULL,
																																																																																																																									      0xffffffffffffffffULL,
																																																																																																																									      0xffffffffffffffffULL,
																																																																																																																									      0x600000000ULL,
																																																																																																																									      0x400000000ULL,
																																																																																																																									      0xffffffffffffffffULL,
																																																																																																																									      0xffffffffffffffffULL,
																																																																																																																									      0xffffffffffffffffULL,
																																																																																																																									      0x1000000000ULL,
																																																																																																																									      0x3000000000ULL,
																																																																																																																									      0x7000000000ULL,
																																																																																																																									      0xffffffffffffffffULL,
																																																																																																																									      0xffffffffffffffffULL,
																																																																																																																									      0xffffffffffffffffULL,
																																																																																																																									      0xffffffffffffffffULL,
																																																																																																																									      0xffffffffffffffffULL,
																																																																																																																									      0xffffffffffffffffULL,
																																																																																																																									      0xffffffffffffffffULL,
																																																																																																																									      0xffffffffffffffffULL,

																																																																																																																									      0xffffffffffffffffULL,
																																																																																																																									      0xffffffffffffffffULL,
																																																																																																																									      0xffffffffffffffffULL,
																																																																																																																									      0x80000000000ULL,
																																																																																																																									      0xffffffffffffffffULL,
																																																																																																																									      0xffffffffffffffffULL,
																																																																																																																									      0xffffffffffffffffULL,
																																																																																																																									      0xffffffffffffffffULL,
																																																																																																																									      0xffffffffffffffffULL,
																																																																																																																									      0xffffffffffffffffULL,
																																																																																																																									      0xffffffffffffffffULL,
																																																																																																																									      0x8080000000000ULL,
																																																																																																																									      0xffffffffffffffffULL,
																																																																																																																									      0xffffffffffffffffULL,
																																																																																																																									      0xffffffffffffffffULL,
																																																																																																																									      0xffffffffffffffffULL},
  {0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0x10101000ULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0x10100000ULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL,
   0xffffffffffffffffULL, 0x10000000ULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xe00000000ULL, 0xc00000000ULL, 0x800000000ULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0x2000000000ULL, 0x6000000000ULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0x100000000000ULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL,
   0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0x10100000000000ULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL}, {0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0x20202000ULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0x20200000ULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0x20000000ULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL,
																										  0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0x1e00000000ULL, 0x1c00000000ULL, 0x1800000000ULL, 0x1000000000ULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0x4000000000ULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0x200000000000ULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL,
																										  0x20200000000000ULL,
																										  0xffffffffffffffffULL, 0xffffffffffffffffULL}, {0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0x40404000ULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0x40400000ULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0x40000000ULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0x3e00000000ULL,
																																  0x3c00000000ULL, 0x3800000000ULL, 0x3000000000ULL, 0x2000000000ULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0x400000000000ULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0x40400000000000ULL, 0xffffffffffffffffULL}, {0xffffffffffffffffULL, 0xffffffffffffffffULL,
																																																																																																																					       0xffffffffffffffffULL, 0xffffffffffffffffULL,
																																																																																																																					       0xffffffffffffffffULL, 0xffffffffffffffffULL,
																																																																																																																					       0xffffffffffffffffULL, 0x80808000ULL,
																																																																																																																					       0xffffffffffffffffULL, 0xffffffffffffffffULL,
																																																																																																																					       0xffffffffffffffffULL, 0xffffffffffffffffULL,
																																																																																																																					       0xffffffffffffffffULL, 0xffffffffffffffffULL,
																																																																																																																					       0xffffffffffffffffULL, 0x80800000ULL,
																																																																																																																					       0xffffffffffffffffULL, 0xffffffffffffffffULL,
																																																																																																																					       0xffffffffffffffffULL, 0xffffffffffffffffULL,
																																																																																																																					       0xffffffffffffffffULL, 0xffffffffffffffffULL,
																																																																																																																					       0xffffffffffffffffULL, 0x80000000ULL,
																																																																																																																					       0xffffffffffffffffULL, 0xffffffffffffffffULL,
																																																																																																																					       0xffffffffffffffffULL, 0xffffffffffffffffULL,
																																																																																																																					       0xffffffffffffffffULL, 0xffffffffffffffffULL,
																																																																																																																					       0xffffffffffffffffULL, 0xffffffffffffffffULL,
																																																																																																																					       0x7e00000000ULL, 0x7c00000000ULL, 0x7800000000ULL,
																																																																																																																					       0x7000000000ULL, 0x6000000000ULL, 0x4000000000ULL,

																																																																																																																					       0xffffffffffffffffULL, 0xffffffffffffffffULL,
																																																																																																																					       0xffffffffffffffffULL, 0xffffffffffffffffULL,
																																																																																																																					       0xffffffffffffffffULL, 0xffffffffffffffffULL,
																																																																																																																					       0xffffffffffffffffULL, 0xffffffffffffffffULL,
																																																																																																																					       0xffffffffffffffffULL, 0xffffffffffffffffULL,
																																																																																																																					       0xffffffffffffffffULL, 0xffffffffffffffffULL,
																																																																																																																					       0xffffffffffffffffULL, 0xffffffffffffffffULL,
																																																																																																																					       0xffffffffffffffffULL, 0xffffffffffffffffULL,
																																																																																																																					       0xffffffffffffffffULL, 0x800000000000ULL,
																																																																																																																					       0xffffffffffffffffULL, 0xffffffffffffffffULL,
																																																																																																																					       0xffffffffffffffffULL, 0xffffffffffffffffULL,
																																																																																																																					       0xffffffffffffffffULL, 0xffffffffffffffffULL,
																																																																																																																					       0xffffffffffffffffULL, 0x80800000000000ULL},
  {0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL,
   0x101010000ULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0x101000000ULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0x100000000ULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0x20000000000ULL,
   0x60000000000ULL, 0xe0000000000ULL, 0x1e0000000000ULL, 0x3e0000000000ULL, 0x7e0000000000ULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0x1000000000000ULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL}, {0x101010100ULL, 0x202020200ULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0x202020000ULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL,
																																																									       0xffffffffffffffffULL, 0xffffffffffffffffULL, 0x202000000ULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0x200000000ULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL,
																																																									       0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0x40000000000ULL, 0xc0000000000ULL, 0x1c0000000000ULL, 0x3c0000000000ULL, 0x7c0000000000ULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL,
																																																									       0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0x2000000000000ULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL}, {0xffffffffffffffffULL, 0xffffffffffffffffULL, 0x404040400ULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0x404040000ULL,
																																																																																															 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0x404000000ULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL,
																																																																																															 0xffffffffffffffffULL,
																																																																																															 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0x400000000ULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL,
																																																																																															 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0x20000000000ULL, 0xffffffffffffffffULL,
																																																																																															 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0x80000000000ULL, 0x180000000000ULL, 0x380000000000ULL, 0x780000000000ULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL,
																																																																																															 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL,
																																																																																															 0xffffffffffffffffULL, 0x4000000000000ULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL}, {0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL,
																																																																																																																			 0x808080800ULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL,
																																																																																																																			 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL,
																																																																																																																			 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0x808080000ULL,
																																																																																																																			 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL,
																																																																																																																			 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL,
																																																																																																																			 0xffffffffffffffffULL, 0x808000000ULL, 0xffffffffffffffffULL,
																																																																																																																			 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL,
																																																																																																																			 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL,
																																																																																																																			 0x800000000ULL,
																																																																																																																			 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL,
																																																																																																																			 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL,
																																																																																																																			 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL,
																																																																																																																			 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL,
																																																																																																																			 0x60000000000ULL, 0x40000000000ULL, 0xffffffffffffffffULL,
																																																																																																																			 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0x100000000000ULL,
																																																																																																																			 0x300000000000ULL, 0x700000000000ULL, 0xffffffffffffffffULL,
																																																																																																																			 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL,
																																																																																																																			 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL,
																																																																																																																			 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL,
																																																																																																																			 0xffffffffffffffffULL, 0x8000000000000ULL, 0xffffffffffffffffULL,
																																																																																																																			 0xffffffffffffffffULL, 0xffffffffffffffffULL,
																																																																																																																			 0xffffffffffffffffULL}, {0xffffffffffffffffULL, 0xffffffffffffffffULL,
																																																																																																																						  0xffffffffffffffffULL, 0xffffffffffffffffULL,
																																																																																																																						  0x1010101000ULL, 0xffffffffffffffffULL,
																																																																																																																						  0xffffffffffffffffULL, 0xffffffffffffffffULL,
																																																																																																																						  0xffffffffffffffffULL, 0xffffffffffffffffULL,
																																																																																																																						  0xffffffffffffffffULL, 0xffffffffffffffffULL,
																																																																																																																						  0x1010100000ULL, 0xffffffffffffffffULL,
																																																																																																																						  0xffffffffffffffffULL, 0xffffffffffffffffULL,
																																																																																																																						  0xffffffffffffffffULL, 0xffffffffffffffffULL,
																																																																																																																						  0xffffffffffffffffULL, 0xffffffffffffffffULL,
																																																																																																																						  0x1010000000ULL, 0xffffffffffffffffULL,
																																																																																																																						  0xffffffffffffffffULL, 0xffffffffffffffffULL,
																																																																																																																						  0xffffffffffffffffULL, 0xffffffffffffffffULL,
																																																																																																																						  0xffffffffffffffffULL, 0xffffffffffffffffULL,
																																																																																																																						  0x1000000000ULL, 0xffffffffffffffffULL,
																																																																																																																						  0xffffffffffffffffULL, 0xffffffffffffffffULL,
																																																																																																																						  0xffffffffffffffffULL, 0xffffffffffffffffULL,
																																																																																																																						  0xffffffffffffffffULL, 0xffffffffffffffffULL,
																																																																																																																						  0xffffffffffffffffULL, 0xffffffffffffffffULL,
																																																																																																																						  0xffffffffffffffffULL, 0xffffffffffffffffULL,
																																																																																																																						  0xe0000000000ULL, 0xc0000000000ULL, 0x80000000000ULL,
																																																																																																																						  0xffffffffffffffffULL, 0xffffffffffffffffULL,
																																																																																																																						  0xffffffffffffffffULL, 0x200000000000ULL,
																																																																																																																						  0x600000000000ULL, 0xffffffffffffffffULL,
																																																																																																																						  0xffffffffffffffffULL, 0xffffffffffffffffULL,
																																																																																																																						  0xffffffffffffffffULL, 0xffffffffffffffffULL,
																																																																																																																						  0xffffffffffffffffULL, 0xffffffffffffffffULL,
																																																																																																																						  0xffffffffffffffffULL, 0xffffffffffffffffULL,
																																																																																																																						  0xffffffffffffffffULL, 0xffffffffffffffffULL,
																																																																																																																						  0xffffffffffffffffULL, 0x10000000000000ULL,
																																																																																																																						  0xffffffffffffffffULL, 0xffffffffffffffffULL,
																																																																																																																						  0xffffffffffffffffULL}, {0xffffffffffffffffULL,
																																																																																																																									   0xffffffffffffffffULL,
																																																																																																																									   0xffffffffffffffffULL,
																																																																																																																									   0xffffffffffffffffULL,
																																																																																																																									   0xffffffffffffffffULL,
																																																																																																																									   0x2020202000ULL,
																																																																																																																									   0xffffffffffffffffULL,
																																																																																																																									   0xffffffffffffffffULL,
																																																																																																																									   0xffffffffffffffffULL,
																																																																																																																									   0xffffffffffffffffULL,
																																																																																																																									   0xffffffffffffffffULL,
																																																																																																																									   0xffffffffffffffffULL,
																																																																																																																									   0xffffffffffffffffULL,
																																																																																																																									   0x2020200000ULL,
																																																																																																																									   0xffffffffffffffffULL,
																																																																																																																									   0xffffffffffffffffULL,
																																																																																																																									   0xffffffffffffffffULL,
																																																																																																																									   0xffffffffffffffffULL,
																																																																																																																									   0xffffffffffffffffULL,
																																																																																																																									   0xffffffffffffffffULL,
																																																																																																																									   0xffffffffffffffffULL,
																																																																																																																									   0x2020000000ULL,
																																																																																																																									   0xffffffffffffffffULL,
																																																																																																																									   0xffffffffffffffffULL,
																																																																																																																									   0xffffffffffffffffULL,
																																																																																																																									   0xffffffffffffffffULL,
																																																																																																																									   0xffffffffffffffffULL,
																																																																																																																									   0xffffffffffffffffULL,
																																																																																																																									   0xffffffffffffffffULL,
																																																																																																																									   0x2000000000ULL,
																																																																																																																									   0xffffffffffffffffULL,
																																																																																																																									   0xffffffffffffffffULL,
																																																																																																																									   0xffffffffffffffffULL,
																																																																																																																									   0xffffffffffffffffULL,
																																																																																																																									   0xffffffffffffffffULL,
																																																																																																																									   0xffffffffffffffffULL,
																																																																																																																									   0xffffffffffffffffULL,
																																																																																																																									   0xffffffffffffffffULL,
																																																																																																																									   0xffffffffffffffffULL,
																																																																																																																									   0xffffffffffffffffULL,
																																																																																																																									   0x1e0000000000ULL,
																																																																																																																									   0x1c0000000000ULL,
																																																																																																																									   0x180000000000ULL,
																																																																																																																									   0x100000000000ULL,
																																																																																																																									   0xffffffffffffffffULL,
																																																																																																																									   0xffffffffffffffffULL,
																																																																																																																									   0xffffffffffffffffULL,
																																																																																																																									   0x400000000000ULL,
																																																																																																																									   0xffffffffffffffffULL,
																																																																																																																									   0xffffffffffffffffULL,
																																																																																																																									   0xffffffffffffffffULL,
																																																																																																																									   0xffffffffffffffffULL,
																																																																																																																									   0xffffffffffffffffULL,
																																																																																																																									   0xffffffffffffffffULL,
																																																																																																																									   0xffffffffffffffffULL,
																																																																																																																									   0xffffffffffffffffULL,
																																																																																																																									   0xffffffffffffffffULL,
																																																																																																																									   0xffffffffffffffffULL,
																																																																																																																									   0xffffffffffffffffULL,
																																																																																																																									   0xffffffffffffffffULL,
																																																																																																																									   0xffffffffffffffffULL,
																																																																																																																									   0x20000000000000ULL,
																																																																																																																									   0xffffffffffffffffULL,
																																																																																																																									   0xffffffffffffffffULL},
  {0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0x4040404000ULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL,
   0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0x4040400000ULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0x4040000000ULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0x4000000000ULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0x3e0000000000ULL, 0x3c0000000000ULL, 0x380000000000ULL, 0x300000000000ULL, 0x200000000000ULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL,
   0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0x40000000000000ULL, 0xffffffffffffffffULL}, {0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0x8080808000ULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0x8080800000ULL, 0xffffffffffffffffULL,
																																																	  0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0x8080000000ULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0x8000000000ULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0x7e0000000000ULL, 0x7c0000000000ULL, 0x780000000000ULL, 0x700000000000ULL,
																																																	  0x600000000000ULL, 0x400000000000ULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL,
																																																	  0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0x80000000000000ULL}, {0x10101010100ULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0x10101010000ULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL,
																																																																																       0xffffffffffffffffULL, 0x10101000000ULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL,
																																																																																       0x10100000000ULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0x10000000000ULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL,
																																																																																       0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0x2000000000000ULL, 0x6000000000000ULL, 0xe000000000000ULL, 0x1e000000000000ULL,
																																																																																       0x3e000000000000ULL, 0x7e000000000000ULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL,
																																																																																       0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL}, {0xffffffffffffffffULL, 0x20202020200ULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0x20202020000ULL,
																																																																																															    0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0x20202000000ULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL,
																																																																																															    0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0x20200000000ULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL,
																																																																																															    0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0x20000000000ULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL,
																																																																																															    0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL,
																																																																																															    0xffffffffffffffffULL, 0x4000000000000ULL, 0xc000000000000ULL, 0x1c000000000000ULL, 0x3c000000000000ULL, 0x7c000000000000ULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL,
																																																																																															    0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL}, {0xffffffffffffffffULL,
																																																																																																											  0xffffffffffffffffULL, 0x40404040400ULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL,
																																																																																																											  0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0x40404040000ULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL,
																																																																																																											  0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0x40404000000ULL,
																																																																																																											  0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL,
																																																																																																											  0xffffffffffffffffULL, 0x40400000000ULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL,
																																																																																																											  0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0x40000000000ULL, 0xffffffffffffffffULL,
																																																																																																											  0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL,
																																																																																																											  0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL,
																																																																																																											  0x2000000000000ULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0x8000000000000ULL, 0x18000000000000ULL,
																																																																																																											  0x38000000000000ULL, 0x78000000000000ULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL,
																																																																																																											  0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL}, {0xffffffffffffffffULL, 0xffffffffffffffffULL,
																																																																																																																							0xffffffffffffffffULL, 0x80808080800ULL,
																																																																																																																							0xffffffffffffffffULL, 0xffffffffffffffffULL,
																																																																																																																							0xffffffffffffffffULL,
																																																																																																																							0xffffffffffffffffULL, 0xffffffffffffffffULL,
																																																																																																																							0xffffffffffffffffULL, 0xffffffffffffffffULL,
																																																																																																																							0x80808080000ULL, 0xffffffffffffffffULL,
																																																																																																																							0xffffffffffffffffULL, 0xffffffffffffffffULL,
																																																																																																																							0xffffffffffffffffULL, 0xffffffffffffffffULL,
																																																																																																																							0xffffffffffffffffULL, 0xffffffffffffffffULL,
																																																																																																																							0x80808000000ULL, 0xffffffffffffffffULL,
																																																																																																																							0xffffffffffffffffULL, 0xffffffffffffffffULL,
																																																																																																																							0xffffffffffffffffULL, 0xffffffffffffffffULL,
																																																																																																																							0xffffffffffffffffULL, 0xffffffffffffffffULL,
																																																																																																																							0x80800000000ULL, 0xffffffffffffffffULL,
																																																																																																																							0xffffffffffffffffULL, 0xffffffffffffffffULL,
																																																																																																																							0xffffffffffffffffULL, 0xffffffffffffffffULL,
																																																																																																																							0xffffffffffffffffULL, 0xffffffffffffffffULL,
																																																																																																																							0x80000000000ULL, 0xffffffffffffffffULL,
																																																																																																																							0xffffffffffffffffULL, 0xffffffffffffffffULL,
																																																																																																																							0xffffffffffffffffULL, 0xffffffffffffffffULL,
																																																																																																																							0xffffffffffffffffULL,
																																																																																																																							0xffffffffffffffffULL, 0xffffffffffffffffULL,
																																																																																																																							0xffffffffffffffffULL, 0xffffffffffffffffULL,
																																																																																																																							0xffffffffffffffffULL, 0xffffffffffffffffULL,
																																																																																																																							0x6000000000000ULL, 0x4000000000000ULL,
																																																																																																																							0xffffffffffffffffULL, 0xffffffffffffffffULL,
																																																																																																																							0xffffffffffffffffULL, 0x10000000000000ULL,
																																																																																																																							0x30000000000000ULL, 0x70000000000000ULL,
																																																																																																																							0xffffffffffffffffULL, 0xffffffffffffffffULL,
																																																																																																																							0xffffffffffffffffULL, 0xffffffffffffffffULL,
																																																																																																																							0xffffffffffffffffULL, 0xffffffffffffffffULL,
																																																																																																																							0xffffffffffffffffULL, 0xffffffffffffffffULL},
  {0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0x101010101000ULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0x101010100000ULL,
   0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0x101010000000ULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0x101000000000ULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0x100000000000ULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL,
   0xffffffffffffffffULL, 0xe000000000000ULL, 0xc000000000000ULL, 0x8000000000000ULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0x20000000000000ULL, 0x60000000000000ULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL}, {0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0x202020202000ULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0x202020200000ULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL,
																																															       0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0x202020000000ULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0x202000000000ULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0x200000000000ULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL,
																																															       0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0x1e000000000000ULL, 0x1c000000000000ULL, 0x18000000000000ULL, 0x10000000000000ULL, 0xffffffffffffffffULL,
																																															       0xffffffffffffffffULL, 0xffffffffffffffffULL, 0x40000000000000ULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL}, {0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0x404040404000ULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0x404040400000ULL, 0xffffffffffffffffULL,
																																																																															    0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0x404040000000ULL,
																																																																															    0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0x404000000000ULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0x400000000000ULL,
																																																																															    0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0x3e000000000000ULL, 0x3c000000000000ULL, 0x38000000000000ULL, 0x30000000000000ULL, 0x20000000000000ULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL,
																																																																															    0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL,
																																																																															    0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL}, {0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0x808080808000ULL, 0xffffffffffffffffULL,
																																																																																																	0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0x808080800000ULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL,
																																																																																																	0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0x808080000000ULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL,
																																																																																																	0xffffffffffffffffULL,
																																																																																																	0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0x808000000000ULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL,
																																																																																																	0xffffffffffffffffULL, 0xffffffffffffffffULL, 0x800000000000ULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL,
																																																																																																	0xffffffffffffffffULL, 0xffffffffffffffffULL, 0x7e000000000000ULL, 0x7c000000000000ULL, 0x78000000000000ULL, 0x70000000000000ULL, 0x60000000000000ULL, 0x40000000000000ULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL,
																																																																																																	0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL,
																																																																																																	0xffffffffffffffffULL}, {0x10101010100ULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0x1010101010000ULL,
																																																																																																				 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0x1010101000000ULL,
																																																																																																				 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0x1010100000000ULL,
																																																																																																				 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0x1010000000000ULL,
																																																																																																				 0xffffffffffffffffULL,
																																																																																																				 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0x1000000000000ULL, 0xffffffffffffffffULL,
																																																																																																				 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL,
																																																																																																				 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL,
																																																																																																				 0x200000000000000ULL, 0x600000000000000ULL, 0xe00000000000000ULL, 0x1e00000000000000ULL, 0x3e00000000000000ULL, 0x7e00000000000000ULL}, {0xffffffffffffffffULL, 0x2020202020200ULL,
																																																																																																																					  0xffffffffffffffffULL, 0xffffffffffffffffULL,
																																																																																																																					  0xffffffffffffffffULL, 0xffffffffffffffffULL,
																																																																																																																					  0xffffffffffffffffULL, 0xffffffffffffffffULL,
																																																																																																																					  0xffffffffffffffffULL, 0x2020202020000ULL,
																																																																																																																					  0xffffffffffffffffULL, 0xffffffffffffffffULL,
																																																																																																																					  0xffffffffffffffffULL, 0xffffffffffffffffULL,
																																																																																																																					  0xffffffffffffffffULL, 0xffffffffffffffffULL,
																																																																																																																					  0xffffffffffffffffULL, 0x2020202000000ULL,
																																																																																																																					  0xffffffffffffffffULL, 0xffffffffffffffffULL,
																																																																																																																					  0xffffffffffffffffULL, 0xffffffffffffffffULL,
																																																																																																																					  0xffffffffffffffffULL, 0xffffffffffffffffULL,
																																																																																																																					  0xffffffffffffffffULL, 0x2020200000000ULL,
																																																																																																																					  0xffffffffffffffffULL, 0xffffffffffffffffULL,
																																																																																																																					  0xffffffffffffffffULL, 0xffffffffffffffffULL,
																																																																																																																					  0xffffffffffffffffULL, 0xffffffffffffffffULL,
																																																																																																																					  0xffffffffffffffffULL, 0x2020000000000ULL,
																																																																																																																					  0xffffffffffffffffULL, 0xffffffffffffffffULL,
																																																																																																																					  0xffffffffffffffffULL, 0xffffffffffffffffULL,
																																																																																																																					  0xffffffffffffffffULL, 0xffffffffffffffffULL,
																																																																																																																					  0xffffffffffffffffULL, 0x2000000000000ULL,
																																																																																																																					  0xffffffffffffffffULL, 0xffffffffffffffffULL,
																																																																																																																					  0xffffffffffffffffULL, 0xffffffffffffffffULL,
																																																																																																																					  0xffffffffffffffffULL, 0xffffffffffffffffULL,
																																																																																																																					  0xffffffffffffffffULL, 0xffffffffffffffffULL,
																																																																																																																					  0xffffffffffffffffULL, 0xffffffffffffffffULL,
																																																																																																																					  0xffffffffffffffffULL, 0xffffffffffffffffULL,
																																																																																																																					  0xffffffffffffffffULL, 0xffffffffffffffffULL,
																																																																																																																					  0xffffffffffffffffULL, 0xffffffffffffffffULL,
																																																																																																																					  0xffffffffffffffffULL, 0x400000000000000ULL,
																																																																																																																					  0xc00000000000000ULL, 0x1c00000000000000ULL,
																																																																																																																					  0x3c00000000000000ULL, 0x7c00000000000000ULL},
  {0xffffffffffffffffULL, 0xffffffffffffffffULL, 0x4040404040400ULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL,
   0xffffffffffffffffULL, 0xffffffffffffffffULL, 0x40404040000ULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0x4040404000000ULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0x4040400000000ULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0x4040000000000ULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0x4000000000000ULL,
   0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0x200000000000000ULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0x800000000000000ULL, 0x1800000000000000ULL, 0x3800000000000000ULL, 0x7800000000000000ULL}, {0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0x8080808080800ULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0x8080808080000ULL, 0xffffffffffffffffULL,
																																																												      0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0x8080808000000ULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0x8080800000000ULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL,
																																																												      0x8080000000000ULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0x8000000000000ULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL,
																																																												      0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0x600000000000000ULL, 0x400000000000000ULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0x1000000000000000ULL, 0x3000000000000000ULL, 0x7000000000000000ULL},

{0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0x10101010101000ULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0x10101010100000ULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0x10101010000000ULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0x10101000000000ULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL,
 0xffffffffffffffffULL, 0x10100000000000ULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0x10000000000000ULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xe00000000000000ULL, 0xc00000000000000ULL, 0x800000000000000ULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0x2000000000000000ULL, 0x6000000000000000ULL}, {0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL,
																																																																																		       0x20202020202000ULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0x20202020200000ULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL,
																																																																																		       0xffffffffffffffffULL, 0xffffffffffffffffULL, 0x20202020000000ULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0x20202000000000ULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL,
																																																																																		       0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0x20200000000000ULL, 0xffffffffffffffffULL,
																																																																																		       0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0x20000000000000ULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL,
																																																																																		       0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0x1e00000000000000ULL, 0x1c00000000000000ULL, 0x1800000000000000ULL, 0x1000000000000000ULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0x4000000000000000ULL}, {0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL,
																																																																																																																		      0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL,
																																																																																																																		      0x40404040404000ULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL,
																																																																																																																		      0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL,
																																																																																																																		      0xffffffffffffffffULL, 0xffffffffffffffffULL, 0x40404040400000ULL,
																																																																																																																		      0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL,
																																																																																																																		      0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL,
																																																																																																																		      0xffffffffffffffffULL, 0x40404040000000ULL, 0xffffffffffffffffULL,
																																																																																																																		      0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL,
																																																																																																																		      0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL,
																																																																																																																		      0x40404000000000ULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL,
																																																																																																																		      0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL,
																																																																																																																		      0xffffffffffffffffULL, 0xffffffffffffffffULL, 0x40400000000000ULL,
																																																																																																																		      0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL,
																																																																																																																		      0xffffffffffffffffULL,
																																																																																																																		      0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL,
																																																																																																																		      0x40000000000000ULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL,
																																																																																																																		      0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL,
																																																																																																																		      0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL,
																																																																																																																		      0xffffffffffffffffULL, 0x3e00000000000000ULL, 0x3c00000000000000ULL,
																																																																																																																		      0x3800000000000000ULL, 0x3000000000000000ULL, 0x2000000000000000ULL,
																																																																																																																		      0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL},
  {0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0x80808080808000ULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL,
   0xffffffffffffffffULL, 0xffffffffffffffffULL, 0x80808080800000ULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0x80808080000000ULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0x80808000000000ULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0x80800000000000ULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL,
   0x80000000000000ULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL, 0x7e00000000000000ULL, 0x7c00000000000000ULL, 0x7800000000000000ULL, 0x7000000000000000ULL, 0x6000000000000000ULL, 0x4000000000000000ULL, 0xffffffffffffffffULL, 0xffffffffffffffffULL},

}

;

const u64 QUADRANTS[64] = { 0xF0F0F0FULL, 0xF0F0F0FULL, 0xF0F0F0FULL, 0xF0F0F0FULL, 0xF0F0F0F0ULL,

  0xF0F0F0F0ULL, 0xF0F0F0F0ULL, 0xF0F0F0F0ULL, 0xF0F0F0FULL, 0xF0F0F0FULL, 0xF0F0F0FULL, 0xF0F0F0FULL, 0xF0F0F0F0ULL, 0xF0F0F0F0ULL, 0xF0F0F0F0ULL, 0xF0F0F0F0ULL, 0xF0F0F0FULL, 0xF0F0F0FULL, 0xF0F0F0FULL, 0xF0F0F0FULL, 0xF0F0F0F0ULL, 0xF0F0F0F0ULL, 0xF0F0F0F0ULL, 0xF0F0F0F0ULL, 0xF0F0F0FULL, 0xF0F0F0FULL, 0xF0F0F0FULL, 0xF0F0F0FULL, 0xF0F0F0F0ULL, 0xF0F0F0F0ULL, 0xF0F0F0F0ULL, 0xF0F0F0F0ULL, 0xF0D0F0F00000000ULL, 0xF0D0F0F00000000ULL, 0xF0D0F0F00000000ULL, 0xF0D0F0F00000000ULL, 0xF0F0F0F000000000ULL, 0xF0F0F0F000000000ULL, 0xF0F0F0F000000000ULL, 0xF0F0F0F000000000ULL, 0xF0D0F0F00000000ULL, 0xF0D0F0F00000000ULL,

  0xF0D0F0F00000000ULL, 0xF0D0F0F00000000ULL, 0xF0F0F0F000000000ULL, 0xF0F0F0F000000000ULL,

  0xF0F0F0F000000000ULL, 0xF0F0F0F000000000ULL, 0xF0D0F0F00000000ULL, 0xF0D0F0F00000000ULL, 0xF0D0F0F00000000ULL, 0xF0D0F0F00000000ULL, 0xF0F0F0F000000000ULL, 0xF0F0F0F000000000ULL, 0xF0F0F0F000000000ULL, 0xF0F0F0F000000000ULL, 0xF0D0F0F00000000ULL, 0xF0D0F0F00000000ULL, 0xF0D0F0F00000000ULL, 0xF0D0F0F00000000ULL, 0xF0F0F0F000000000ULL, 0xF0F0F0F000000000ULL, 0xF0F0F0F000000000ULL, 0xF0F0F0F000000000ULL
};

#endif
const u64 VERT_ORIZZ[64] = { 0x1010101010101feULL, 0x2020202020202fdULL, 0x4040404040404fbULL,

  0x8080808080808f7ULL, 0x10101010101010efULL, 0x20202020202020dfULL, 0x40404040404040bfULL, 0x808080808080807fULL, 0x10101010101fe01ULL, 0x20202020202fd02ULL, 0x40404040404fb04ULL,

  0x80808080808f708ULL, 0x101010101010ef10ULL, 0x202020202020df20ULL, 0x404040404040bf40ULL, 0x8080808080807f80ULL, 0x101010101fe0101ULL, 0x202020202fd0202ULL, 0x404040404fb0404ULL, 0x808080808f70808ULL, 0x1010101010ef1010ULL, 0x2020202020df2020ULL, 0x4040404040bf4040ULL,

  0x80808080807f8080ULL, 0x1010101fe010101ULL, 0x2020202fd020202ULL, 0x4040404fb040404ULL,

  0x8080808f7080808ULL, 0x10101010ef101010ULL, 0x20202020df202020ULL, 0x40404040bf404040ULL,

  0x808080807f808080ULL, 0x10101fe01010101ULL, 0x20202fd02020202ULL, 0x40404fb04040404ULL, 0x80808f708080808ULL, 0x101010ef10101010ULL, 0x202020df20202020ULL, 0x404040bf40404040ULL, 0x8080807f80808080ULL, 0x101fe0101010101ULL, 0x202fd0202020202ULL, 0x404fb0404040404ULL,

  0x808f70808080808ULL, 0x1010ef1010101010ULL, 0x2020df2020202020ULL, 0x4040bf4040404040ULL, 0x80807f8080808080ULL, 0x1fe010101010101ULL, 0x2fd020202020202ULL, 0x4fb040404040404ULL,

  0x8f7080808080808ULL, 0x10ef101010101010ULL, 0x20df202020202020ULL, 0x40bf404040404040ULL, 0x807f808080808080ULL, 0xfe01010101010101ULL, 0xfd02020202020202ULL, 0xfb04040404040404ULL, 0xf708080808080808ULL, 0xef10101010101010ULL, 0xdf20202020202020ULL, 0xbf40404040404040ULL,

  0x7f80808080808080ULL
};

#define ORIZZONTAL_0_8 0xFFFF
#define ORIZZONTAL_48_56 0xFFFF000000000000
#define ORIZZONTAL_0 0xff
#define ORIZZONTAL_7 ORIZZONTAL_0
#define ORIZZONTAL_8 0xff00
#define ORIZZONTAL_48 0xff000000000000ULL
#define ORIZZONTAL_56 0xFF00000000000000ULL

const uchar pos_posMod8[64] = { 0, 0, 0, 0, 0, 0, 0, 0, 8, 8, 8, 8, 8, 8, 8, 8, 16, 16, 16, 16, 16, 16,

  16, 16, 24, 24, 24, 24, 24, 24, 24, 24, 32, 32, 32, 32, 32, 32, 32, 32, 40, 40, 40, 40, 40, 40, 40, 40, 48, 48, 48, 48, 48, 48, 48, 48, 56, 56, 56, 56, 56, 56, 56, 56
};

const u64 ORIZZONTAL[64] = { ORIZZONTAL_0, 0xffULL, 0xffULL, 0xffULL, 0xffULL, 0xffULL, 0xffULL, ORIZZONTAL_7, ORIZZONTAL_8, 0xff00ULL, 0xff00ULL, 0xff00ULL, 0xff00ULL, 0xff00ULL, 0xff00ULL, 0xff00ULL, 0xff0000ULL, 0xff0000ULL, 0xff0000ULL, 0xff0000ULL, 0xff0000ULL, 0xff0000ULL, 0xff0000ULL, 0xff0000ULL, 0xff000000ULL, 0xff000000ULL, 0xff000000ULL, 0xff000000ULL,

  0xff000000ULL, 0xff000000ULL, 0xff000000ULL, 0xff000000ULL, 0xff00000000ULL, 0xff00000000ULL,

  0xff00000000ULL, 0xff00000000ULL, 0xff00000000ULL, 0xff00000000ULL, 0xff00000000ULL,

  0xff00000000ULL, 0xff0000000000ULL, 0xff0000000000ULL, 0xff0000000000ULL, 0xff0000000000ULL, 0xff0000000000ULL, 0xff0000000000ULL, 0xff0000000000ULL, 0xff0000000000ULL, ORIZZONTAL_48, 0xff000000000000ULL, 0xff000000000000ULL, 0xff000000000000ULL, 0xff000000000000ULL, 0xff000000000000ULL, 0xff000000000000ULL, 0xff000000000000ULL, 0xff00000000000000ULL, 0xff00000000000000ULL, 0xff00000000000000ULL, 0xff00000000000000ULL, 0xff00000000000000ULL, 0xff00000000000000ULL, 0xff00000000000000ULL, 0xff00000000000000ULL
};

const u64 ISOLATED_MASK[64] = { 0x202020202020202ULL, 0x505050505050505ULL, 0xA0A0A0A0A0A0A0AULL,

  0x1414141414141414ULL, 0x2828282828282828ULL, 0x5050505050505050ULL, 0xA0A0A0A0A0A0A0A0ULL,

  0x4040404040404040ULL, 0x202020202020202ULL, 0x505050505050505ULL, 0xA0A0A0A0A0A0A0AULL,

  0x1414141414141414ULL, 0x2828282828282828ULL, 0x5050505050505050ULL, 0xA0A0A0A0A0A0A0A0ULL, 0x4040404040404040ULL, 0x202020202020202ULL, 0x505050505050505ULL, 0xA0A0A0A0A0A0A0AULL, 0x1414141414141414ULL, 0x2828282828282828ULL, 0x5050505050505050ULL, 0xA0A0A0A0A0A0A0A0ULL, 0x4040404040404040ULL, 0x202020202020202ULL, 0x505050505050505ULL, 0xA0A0A0A0A0A0A0AULL,

  0x1414141414141414ULL, 0x2828282828282828ULL, 0x5050505050505050ULL, 0xA0A0A0A0A0A0A0A0ULL,

  0x4040404040404040ULL, 0x202020202020202ULL, 0x505050505050505ULL, 0xA0A0A0A0A0A0A0AULL,

  0x1414141414141414ULL, 0x2828282828282828ULL, 0x5050505050505050ULL, 0xA0A0A0A0A0A0A0A0ULL, 0x4040404040404040ULL, 0x202020202020202ULL, 0x505050505050505ULL, 0xA0A0A0A0A0A0A0AULL, 0x1414141414141414ULL, 0x2828282828282828ULL, 0x5050505050505050ULL, 0xA0A0A0A0A0A0A0A0ULL, 0x4040404040404040ULL, 0x202020202020202ULL, 0x505050505050505ULL, 0xA0A0A0A0A0A0A0AULL, 0x1414141414141414ULL, 0x2828282828282828ULL, 0x5050505050505050ULL, 0xA0A0A0A0A0A0A0A0ULL,

  0x4040404040404040ULL, 0x202020202020202ULL, 0x505050505050505ULL, 0xA0A0A0A0A0A0A0AULL,

  0x1414141414141414ULL, 0x2828282828282828ULL, 0x5050505050505050ULL, 0xA0A0A0A0A0A0A0A0ULL,

  0x4040404040404040ULL
};

const u64 RIGHT[64] = { 0x8040201008040200ULL, 0x80402010080400ULL, 0x804020100800ULL,

  0x8040201000ULL, 0x80402000ULL, 0x804000ULL, 0x8000ULL, 0x0ULL, 0x4020100804020000ULL,

  0x8040201008040001ULL, 0x80402010080002ULL, 0x804020100004ULL, 0x8040200008ULL,

  0x80400010ULL, 0x800020ULL, 0x40ULL, 0x2010080402000000ULL, 0x4020100804000100ULL, 0x8040201008000201ULL, 0x80402010000402ULL, 0x804020000804ULL, 0x8040001008ULL, 0x80002010ULL, 0x4020ULL, 0x1008040200000000ULL, 0x2010080400010000ULL, 0x4020100800020100ULL, 0x8040201000040201ULL, 0x80402000080402ULL, 0x804000100804ULL, 0x8000201008ULL, 0x402010ULL,

  0x804020000000000ULL, 0x1008040001000000ULL, 0x2010080002010000ULL, 0x4020100004020100ULL,

  0x8040200008040201ULL, 0x80400010080402ULL, 0x800020100804ULL, 0x40201008ULL,

  0x402000000000000ULL, 0x804000100000000ULL, 0x1008000201000000ULL, 0x2010000402010000ULL, 0x4020000804020100ULL, 0x8040001008040201ULL, 0x80002010080402ULL, 0x4020100804ULL, 0x200000000000000ULL, 0x400010000000000ULL, 0x800020100000000ULL, 0x1000040201000000ULL, 0x2000080402010000ULL, 0x4000100804020100ULL, 0x8000201008040201ULL, 0x402010080402ULL, 0x0ULL, 0x1000000000000ULL, 0x2010000000000ULL, 0x4020100000000ULL, 0x8040201000000ULL,

  0x10080402010000ULL, 0x20100804020100ULL, 0x40201008040201ULL
};

const u64 LEFT[64] = { 0x0ULL, 0x100ULL, 0x10200ULL, 0x1020400ULL, 0x102040800ULL,

  0x10204081000ULL, 0x1020408102000ULL, 0x102040810204000ULL, 0x2ULL, 0x10004ULL, 0x1020008ULL,

  0x102040010ULL, 0x10204080020ULL, 0x1020408100040ULL, 0x102040810200080ULL, 0x204081020400000ULL, 0x204ULL, 0x1000408ULL, 0x102000810ULL, 0x10204001020ULL, 0x1020408002040ULL, 0x102040810004080ULL, 0x204081020008000ULL, 0x408102040000000ULL,

  0x20408ULL, 0x100040810ULL, 0x10200081020ULL, 0x1020400102040ULL, 0x102040800204080ULL,

  0x204081000408000ULL, 0x408102000800000ULL, 0x810204000000000ULL, 0x2040810ULL, 0x10004081020ULL, 0x1020008102040ULL, 0x102040010204080ULL, 0x204080020408000ULL, 0x408100040800000ULL, 0x810200080000000ULL, 0x1020400000000000ULL, 0x204081020ULL, 0x1000408102040ULL, 0x102000810204080ULL, 0x204001020408000ULL, 0x408002040800000ULL, 0x810004080000000ULL, 0x1020008000000000ULL, 0x2040000000000000ULL, 0x20408102040ULL,

  0x100040810204080ULL, 0x200081020408000ULL, 0x400102040800000ULL, 0x800204080000000ULL,

  0x1000408000000000ULL, 0x2000800000000000ULL, 0x4000000000000000ULL, 0x2040810204080ULL,

  0x4081020408000ULL, 0x8102040800000ULL, 0x10204080000000ULL, 0x20408000000000ULL,

  0x40800000000000ULL, 0x80000000000000ULL, 0x0ULL
};

const uchar ROT45ROT_90_MASK[64] = { 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x2, 0x2, 0x2, 0x2, 0x2, 0x2, 0x2, 0x2, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x4, 0x4, 0x4, 0x4, 0x4, 0x4, 0x4, 0x4, 0x5, 0x5, 0x5, 0x5, 0x5, 0x5, 0x5, 0x5, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x7, 0x7, 0x7, 0x7, 0x7, 0x7, 0x7, 0x7 };

const u64 LEFT_RIGHT[64] = { LEFT[0] | RIGHT[0], LEFT[1] | RIGHT[1], LEFT[2] | RIGHT[2],

  LEFT[3] | RIGHT[3], LEFT[4] | RIGHT[4], LEFT[5] | RIGHT[5], LEFT[6] | RIGHT[6], LEFT[7] | RIGHT[7],

  LEFT[8] | RIGHT[8], LEFT[9] | RIGHT[9], LEFT[10] | RIGHT[10], LEFT[11] | RIGHT[11], LEFT[12] | RIGHT[12], LEFT[13] | RIGHT[13], LEFT[14] | RIGHT[14], LEFT[15] | RIGHT[15],

  LEFT[16] | RIGHT[16], LEFT[17] | RIGHT[17], LEFT[18] | RIGHT[18], LEFT[19] | RIGHT[19], LEFT[20] | RIGHT[20], LEFT[21] | RIGHT[21], LEFT[22] | RIGHT[22], LEFT[23] | RIGHT[23],

  LEFT[24] | RIGHT[24], LEFT[25] | RIGHT[25], LEFT[26] | RIGHT[26], LEFT[27] | RIGHT[27], LEFT[28] | RIGHT[28], LEFT[29] | RIGHT[29], LEFT[30] | RIGHT[30], LEFT[31] | RIGHT[31], LEFT[32] | RIGHT[32], LEFT[33] | RIGHT[33], LEFT[34] | RIGHT[34], LEFT[35] | RIGHT[35],

  LEFT[36] | RIGHT[36], LEFT[37] | RIGHT[37], LEFT[38] | RIGHT[38], LEFT[39] | RIGHT[39], LEFT[40] | RIGHT[40], LEFT[41] | RIGHT[41], LEFT[42] | RIGHT[42], LEFT[43] | RIGHT[43], LEFT[44] | RIGHT[44], LEFT[45] | RIGHT[45], LEFT[46] | RIGHT[46], LEFT[47] | RIGHT[47],

  LEFT[48] | RIGHT[48], LEFT[49] | RIGHT[49], LEFT[50] | RIGHT[50], LEFT[51] | RIGHT[51], LEFT[52] | RIGHT[52], LEFT[53] | RIGHT[53], LEFT[54] | RIGHT[54], LEFT[55] | RIGHT[55], LEFT[56] | RIGHT[56], LEFT[57] | RIGHT[57], LEFT[58] | RIGHT[58], LEFT[59] | RIGHT[59],

  LEFT[60] | RIGHT[60], LEFT[61] | RIGHT[61], LEFT[62] | RIGHT[62], LEFT[63] | RIGHT[63]
};

#ifndef PERFT_MODE
const u64 BIG_DIAG_LEFT[64] = { 0x8040201008040200ULL, 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL,

  0x0ULL, 0x0ULL, 0x8040201008040001ULL, 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, 0x8040201008000201ULL, 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, 0x8040201000040201ULL, 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, 0x8040200008040201ULL, 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, 0x8040001008040201ULL, 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL,

  0x8000201008040201ULL, 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL,

  0x40201008040201ULL
};

const u64 BIG_DIAG_RIGHT[64] = { 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL,

  0x102040810204000ULL, 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, 0x102040810200080ULL, 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, 0x102040810004080ULL, 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, 0x102040800204080ULL, 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, 0x102040010204080ULL, 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, 0x102000810204080ULL, 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, 0x100040810204080ULL, 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL,

  0x2040810204080ULL, 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, 0x0
};

const uchar MOVE_ORDER[12][64] = { {90, 90, 100, 100, 100, 100, 90, 90, 50, 60, 60, 70, 70, 60, 60, 50, 30, 42, 42, 50, 50, 42, 42, 30, 20, 32, 32, 40, 40, 32, 32, 20, 10, 22, 22, 30, 30, 22, 22, 10, 5, 11, 11, 15, 15, 11, 11, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 11, 11, 15, 15, 11, 11, 5, 10, 22, 22, 30, 30, 22, 22, 10, 20, 32, 32, 40, 40, 32, 32, 20, 30, 42, 42, 50, 50, 42, 42, 30, 50, 60, 60, 70, 70, 60, 60, 50, 90, 90, 100, 100, 100, 100, 90, 90},

{0, 10, 10, 20, 20, 20, 10, 0, 10, 24, 24, 26, 26, 26, 24, 10, 10, 28, 28,

 50, 50, 40, 28, 10, 10, 23, 23, 40, 40, 36, 23, 10, 10, 22, 22, 30, 30, 28, 22, 10, 0, 26, 26, 30, 30, 26, 26, 0, 5, 20, 20, 20, 23, 20, 20, 5, 0, 0, 15, 15, 15, 15, 5, 0}, {0, 0, 15, 15, 15, 15, 5, 0, 5, 20, 20, 20, 23, 20, 20, 5, 0, 26, 26, 30, 30, 26, 26, 0, 10, 22, 22, 30, 30, 28, 22, 10, 10, 23, 23, 40, 40, 36, 23, 10, 10, 28, 28, 50, 50, 40, 28, 10, 10, 24, 24, 26, 26, 26, 24, 10, 0, 10, 10, 20, 20, 20, 10, 0},

{0, 10, 10, 20, 20, 20, 10, 0, 10, 24, 24, 26, 26, 26, 24, 10, 10, 28, 28,

 50, 50, 40, 28, 10, 10, 23, 23, 40, 40, 36, 23, 10, 10, 22, 22, 30, 30, 28, 22, 10, 0, 26, 26, 30, 30, 26, 26, 0, 5, 20, 20, 20, 23, 20, 20, 5, 0, 0, 15, 15, 15, 15, 5, 0}, {0, 0, 15, 15, 15, 15, 5, 0, 5, 20, 20, 20, 23, 20, 20, 5, 0, 26, 26, 30, 30, 26, 26, 0, 10, 22, 22, 30, 30, 28, 22, 10, 10, 23, 23, 40, 40, 36, 23, 10, 10, 28, 28, 50, 50, 40, 28, 10, 10, 24, 24, 26, 26, 26, 24, 10, 0, 10, 10, 20, 20, 20, 10, 0},

{0, 10, 10, 20, 20, 20, 10, 0, 10, 24, 24, 26, 26, 26, 24, 10, 10, 28, 28,

 50, 50, 40, 28, 10, 10, 23, 23, 40, 40, 36, 23, 10, 10, 22, 22, 30, 30, 28, 22, 10, 0, 26, 26, 30, 30, 26, 26, 0, 5, 20, 20, 20, 23, 20, 20, 5, 0, 0, 15, 15, 15, 15, 5, 0}, {0, 0, 15, 15, 15, 15, 5, 0, 5, 20, 20, 20, 23, 20, 20, 5, 0, 26, 26, 30, 30, 26, 26, 0, 10, 22, 22, 30, 30, 28, 22, 10, 10, 23, 23, 40, 40, 36, 23, 10, 10, 28, 28, 50, 50, 40, 28, 10, 10, 24, 24, 26, 26, 26, 24, 10, 0, 10, 10, 20, 20, 20, 10, 0},

{0, 10, 10, 20, 20, 20, 10, 0, 10, 24, 24, 26, 26, 26, 24, 10, 10, 28, 28,

 50, 50, 40, 28, 10, 10, 23, 23, 40, 40, 36, 23, 10, 10, 22, 22, 30, 30, 28, 22, 10, 0, 26, 26, 30, 30, 26, 26, 0, 5, 20, 20, 20, 23, 20, 20, 5, 0, 0, 15, 15, 15, 15, 5, 0}, {0, 0, 15, 15, 15, 15, 5, 0, 5, 20, 20, 20, 23, 20, 20, 5, 0, 26, 26, 30, 30, 26, 26, 0, 10, 22, 22, 30, 30, 28, 22, 10, 10, 23, 23, 40, 40, 36, 23, 10, 10, 28, 28, 50, 50, 40, 28, 10, 10, 24, 24, 26, 26, 26, 24, 10, 0, 10, 10, 20, 20, 20, 10, 0},

{0, 10, 10, 20, 20, 20, 10, 0, 10, 24, 24, 26, 26, 26, 24, 10, 10, 28, 28,

 50, 50, 40, 28, 10, 10, 23, 23, 40, 40, 36, 23, 10, 10, 22, 22, 30, 30, 28, 22, 10, 0, 26, 26, 30, 30, 26, 26, 0, 5, 20, 20, 20, 23, 20, 20, 5, 0, 0, 15, 15, 15, 15, 5, 0}, {0, 0, 15, 15, 15, 15, 5, 0, 5, 20, 20, 20, 23, 20, 20, 5, 0, 26, 26, 30, 30, 26, 26, 0, 10, 22, 22, 30, 30, 28, 22, 10, 10, 23, 23, 40, 40, 36, 23, 10, 10, 28, 28, 50, 50, 40, 28, 10, 10, 24, 24, 26, 26, 26, 24, 10, 0, 10, 10, 20, 20, 20, 10, 0}
};

#endif

const char get_row[64] = {	//a >> 3
  0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 2, 2, 2, 2, 2, 2, 2, 2,

  3, 3, 3, 3, 3, 3, 3, 3, 4, 4, 4, 4, 4, 4, 4, 4, 5, 5, 5, 5, 5, 5, 5, 5,

  6, 6, 6, 6, 6, 6, 6, 6, 7, 7, 7, 7, 7, 7, 7, 7
};

const char get_column[64] = {	//a % 8
  0, 1, 2, 3, 4, 5, 6, 7, 0, 1, 2, 3, 4, 5, 6, 7, 0, 1, 2, 3, 4, 5, 6, 7,

  0, 1, 2, 3, 4, 5, 6, 7, 0, 1, 2, 3, 4, 5, 6, 7, 0, 1, 2, 3, 4, 5, 6, 7,

  0, 1, 2, 3, 4, 5, 6, 7, 0, 1, 2, 3, 4, 5, 6, 7
};

const u64 PAWNS_7_2[2] = { 0xFF000000000000ULL, 0xFF00ULL };

#define VERTICAL_0 0x101010101010101ULL
#define VERTICAL_1 0x202020202020202ULL
#define VERTICAL_2 0x404040404040404ULL
#define VERTICAL_3 0x808080808080808ULL
#define VERTICAL_4 0x1010101010101010ULL
#define VERTICAL_5 0x2020202020202020ULL
#define VERTICAL_6 0x4040404040404040ULL
#define VERTICAL_7 0x8080808080808080ULL
#define VERTICAL_8 0x101010101010101ULL
#define VERTICAL_9 0x202020202020202ULL
#define VERTICAL_10 0x404040404040404ULL
#define VERTICAL_11 0x808080808080808ULL
#define VERTICAL_12 0x1010101010101010ULL
#define VERTICAL_13 0x2020202020202020ULL
#define VERTICAL_14 0x4040404040404040ULL
#define VERTICAL_15 0x8080808080808080ULL
#define VERTICAL_16 0x101010101010101ULL
#define VERTICAL_17 0x202020202020202ULL
#define VERTICAL_18 0x404040404040404ULL
#define VERTICAL_19 0x808080808080808ULL
#define VERTICAL_20 0x1010101010101010ULL
#define VERTICAL_21 0x2020202020202020ULL
#define VERTICAL_22 0x4040404040404040ULL
#define VERTICAL_23 0x8080808080808080ULL
#define VERTICAL_24 0x101010101010101ULL
#define VERTICAL_25 0x202020202020202ULL
#define VERTICAL_26 0x404040404040404ULL
#define VERTICAL_27 0x808080808080808ULL
#define VERTICAL_28 0x1010101010101010ULL
#define VERTICAL_29 0x2020202020202020ULL
#define VERTICAL_30 0x4040404040404040ULL
#define VERTICAL_31 0x8080808080808080ULL
#define VERTICAL_32 0x101010101010101ULL
#define VERTICAL_33 0x202020202020202ULL
#define VERTICAL_34 0x404040404040404ULL
#define VERTICAL_35 0x808080808080808ULL
#define VERTICAL_36 0x1010101010101010ULL
#define VERTICAL_37 0x2020202020202020ULL
#define VERTICAL_38 0x4040404040404040ULL
#define VERTICAL_39 0x8080808080808080ULL
#define VERTICAL_40 0x101010101010101ULL
#define VERTICAL_41 0x202020202020202ULL
#define VERTICAL_42 0x404040404040404ULL
#define VERTICAL_43 0x808080808080808ULL
#define VERTICAL_44 0x1010101010101010ULL
#define VERTICAL_45 0x2020202020202020ULL
#define VERTICAL_46 0x4040404040404040ULL
#define VERTICAL_47 0x8080808080808080ULL
#define VERTICAL_48 0x101010101010101ULL
#define VERTICAL_49 0x202020202020202ULL
#define VERTICAL_50 0x404040404040404ULL
#define VERTICAL_51 0x808080808080808ULL
#define VERTICAL_52 0x1010101010101010ULL
#define VERTICAL_53 0x2020202020202020ULL
#define VERTICAL_54 0x4040404040404040ULL
#define VERTICAL_55 0x8080808080808080ULL
#define VERTICAL_56 0x101010101010101ULL
#define VERTICAL_57 0x202020202020202ULL
#define VERTICAL_58 0x404040404040404ULL
#define VERTICAL_59 0x808080808080808ULL
#define VERTICAL_60 0x1010101010101010ULL
#define VERTICAL_61 0x2020202020202020ULL
#define VERTICAL_62 0x4040404040404040ULL
#define VERTICAL_63 0x8080808080808080ULL

#define TABLOG_0 0x1ULL
#define TABLOG_1 0x2ULL
#define TABLOG_2 0x4ULL
#define TABLOG_3 0x8ULL
#define TABLOG_4 0x10ULL
#define TABLOG_5 0x20ULL
#define TABLOG_6 0x40ULL
#define TABLOG_7 0x80ULL
#define TABLOG_8 0x100ULL
#define TABLOG_9 0x200ULL
#define TABLOG_10 0x400ULL
#define TABLOG_11 0x800ULL
#define TABLOG_12 0x1000ULL
#define TABLOG_13 0x2000ULL
#define TABLOG_14 0x4000ULL
#define TABLOG_15 0x8000ULL
#define TABLOG_16 0x10000ULL
#define TABLOG_17 0x20000ULL
#define TABLOG_18 0x40000ULL
#define TABLOG_19 0x80000ULL
#define TABLOG_20 0x100000ULL
#define TABLOG_21 0x200000ULL
#define TABLOG_22 0x400000ULL
#define TABLOG_23 0x800000ULL
#define TABLOG_24 0x1000000ULL
#define TABLOG_25 0x2000000ULL
#define TABLOG_26 0x4000000ULL
#define TABLOG_27 0x8000000ULL
#define TABLOG_28 0x10000000ULL
#define TABLOG_29 0x20000000ULL
#define TABLOG_30 0x40000000ULL
#define TABLOG_31 0x80000000ULL
#define TABLOG_32 0x100000000ULL
#define TABLOG_33 0x200000000ULL
#define TABLOG_34 0x400000000ULL
#define TABLOG_35 0x800000000ULL
#define TABLOG_36 0x1000000000ULL
#define TABLOG_37 0x2000000000ULL
#define TABLOG_38 0x4000000000ULL
#define TABLOG_39 0x8000000000ULL
#define TABLOG_40 0x10000000000ULL
#define TABLOG_41 0x20000000000ULL
#define TABLOG_42 0x40000000000ULL
#define TABLOG_43 0x80000000000ULL
#define TABLOG_44 0x100000000000ULL
#define TABLOG_45 0x200000000000ULL
#define TABLOG_46 0x400000000000ULL
#define TABLOG_47 0x800000000000ULL
#define TABLOG_48 0x1000000000000ULL
#define TABLOG_49 0x2000000000000ULL
#define TABLOG_50 0x4000000000000ULL
#define TABLOG_51 0x8000000000000ULL
#define TABLOG_52 0x10000000000000ULL
#define TABLOG_53 0x20000000000000ULL
#define TABLOG_54 0x40000000000000ULL
#define TABLOG_55 0x80000000000000ULL
#define TABLOG_56 0x100000000000000ULL
#define TABLOG_57 0x200000000000000ULL
#define TABLOG_58 0x400000000000000ULL
#define TABLOG_59 0x800000000000000ULL
#define TABLOG_60 0x1000000000000000ULL
#define TABLOG_61 0x2000000000000000ULL
#define TABLOG_62 0x4000000000000000ULL
#define TABLOG_63 0x8000000000000000ULL

#define NOTTABLOG_0 0xfffffffffffffffeULL
#define NOTTABLOG_1 0xfffffffffffffffdULL
#define NOTTABLOG_2 0xfffffffffffffffbULL
#define NOTTABLOG_3 0xfffffffffffffff7ULL
#define NOTTABLOG_4 0xffffffffffffffefULL
#define NOTTABLOG_5 0xffffffffffffffdfULL
#define NOTTABLOG_6 0xffffffffffffffbfULL
#define NOTTABLOG_7 0xffffffffffffff7fULL
#define NOTTABLOG_8 0xfffffffffffffeffULL
#define NOTTABLOG_9 0xfffffffffffffdffULL
#define NOTTABLOG_10 0xfffffffffffffbffULL
#define NOTTABLOG_11 0xfffffffffffff7ffULL
#define NOTTABLOG_12 0xffffffffffffefffULL
#define NOTTABLOG_13 0xffffffffffffdfffULL
#define NOTTABLOG_14 0xffffffffffffbfffULL
#define NOTTABLOG_15 0xffffffffffff7fffULL
#define NOTTABLOG_16 0xfffffffffffeffffULL
#define NOTTABLOG_17 0xfffffffffffdffffULL
#define NOTTABLOG_18 0xfffffffffffbffffULL
#define NOTTABLOG_19 0xfffffffffff7ffffULL
#define NOTTABLOG_20 0xffffffffffefffffULL
#define NOTTABLOG_21 0xffffffffffdfffffULL
#define NOTTABLOG_22 0xffffffffffbfffffULL
#define NOTTABLOG_23 0xffffffffff7fffffULL
#define NOTTABLOG_24 0xfffffffffeffffffULL
#define NOTTABLOG_25 0xfffffffffdffffffULL
#define NOTTABLOG_26 0xfffffffffbffffffULL
#define NOTTABLOG_27 0xfffffffff7ffffffULL
#define NOTTABLOG_28 0xffffffffefffffffULL
#define NOTTABLOG_29 0xffffffffdfffffffULL
#define NOTTABLOG_30 0xffffffffbfffffffULL
#define NOTTABLOG_31 0xffffffff7fffffffULL
#define NOTTABLOG_32 0xfffffffeffffffffULL
#define NOTTABLOG_33 0xfffffffdffffffffULL
#define NOTTABLOG_34 0xfffffffbffffffffULL
#define NOTTABLOG_35 0xfffffff7ffffffffULL
#define NOTTABLOG_36 0xffffffefffffffffULL
#define NOTTABLOG_37 0xffffffdfffffffffULL
#define NOTTABLOG_38 0xffffffbfffffffffULL
#define NOTTABLOG_39 0xffffff7fffffffffULL
#define NOTTABLOG_40 0xfffffeffffffffffULL
#define NOTTABLOG_41 0xfffffdffffffffffULL
#define NOTTABLOG_42 0xfffffbffffffffffULL
#define NOTTABLOG_43 0xfffff7ffffffffffULL
#define NOTTABLOG_44 0xffffefffffffffffULL
#define NOTTABLOG_45 0xffffdfffffffffffULL
#define NOTTABLOG_46 0xffffbfffffffffffULL
#define NOTTABLOG_47 0xffff7fffffffffffULL
#define NOTTABLOG_48 0xfffeffffffffffffULL
#define NOTTABLOG_49 0xfffdffffffffffffULL
#define NOTTABLOG_50 0xfffbffffffffffffULL
#define NOTTABLOG_51 0xfff7ffffffffffffULL
#define NOTTABLOG_52 0xffefffffffffffffULL
#define NOTTABLOG_53 0xffdfffffffffffffULL
#define NOTTABLOG_54 0xffbfffffffffffffULL
#define NOTTABLOG_55 0xff7fffffffffffffULL
#define NOTTABLOG_56 0xfeffffffffffffffULL
#define NOTTABLOG_57 0xfdffffffffffffffULL
#define NOTTABLOG_58 0xfbffffffffffffffULL
#define NOTTABLOG_59 0xf7ffffffffffffffULL
#define NOTTABLOG_60 0xefffffffffffffffULL
#define NOTTABLOG_61 0xdfffffffffffffffULL
#define NOTTABLOG_62 0xbfffffffffffffffULL
#define NOTTABLOG_63 0x7fffffffffffffffULL

const u64 VERTICAL[64] = { VERTICAL_0, VERTICAL_1, VERTICAL_2, VERTICAL_3, VERTICAL_4, VERTICAL_5, VERTICAL_6, VERTICAL_7, VERTICAL_8, VERTICAL_9, VERTICAL_10, VERTICAL_11, VERTICAL_12, VERTICAL_13, VERTICAL_14, VERTICAL_15, VERTICAL_16, VERTICAL_17, VERTICAL_18, VERTICAL_19, VERTICAL_20, VERTICAL_21, VERTICAL_22, VERTICAL_23, VERTICAL_24, VERTICAL_25, VERTICAL_26, VERTICAL_27, VERTICAL_28, VERTICAL_29, VERTICAL_30, VERTICAL_31, VERTICAL_32, VERTICAL_33, VERTICAL_34, VERTICAL_35, VERTICAL_36, VERTICAL_37, VERTICAL_38, VERTICAL_39, VERTICAL_40, VERTICAL_41, VERTICAL_42, VERTICAL_43, VERTICAL_44, VERTICAL_45, VERTICAL_46, VERTICAL_47, VERTICAL_48, VERTICAL_49, VERTICAL_50, VERTICAL_51, VERTICAL_52, VERTICAL_53, VERTICAL_54, VERTICAL_55, VERTICAL_56, VERTICAL_57, VERTICAL_58, VERTICAL_59,
  VERTICAL_60, VERTICAL_61, VERTICAL_62, VERTICAL_63
};

const char ROT45[64] = { 0, 1, 2, 3, 4, 5, 6, 7, 0, 1, 2, 3, 4, 5, 6, 7, 0, 1, 2, 3, 4, 5, 6, 7, 0, 1, 2, 3, 4, 5, 6, 7, 0, 1, 2, 3, 4, 5, 6, 7, 0, 1, 2, 3, 4, 5, 6, 7, 0, 1, 2, 3, 4, 5, 6, 7,

  0, 1, 2, 3, 4, 5, 6, 7
};

const u64 RIGHT_BOUND[64] = { 0x200ULL, 0x400ULL, 0x800ULL, 0x1000ULL, 0x2000ULL, 0x4000ULL, 0x8000ULL,

  0x0ULL, 0x20000ULL, 0x40001ULL, 0x80002ULL, 0x100004ULL, 0x200008ULL, 0x400010ULL, 0x800020ULL,

  0x40ULL, 0x2000000ULL, 0x4000100ULL, 0x8000200ULL, 0x10000400ULL, 0x20000800ULL, 0x40001000ULL, 0x80002000ULL, 0x4000ULL, 0x200000000ULL, 0x400010000ULL, 0x800020000ULL, 0x1000040000ULL, 0x2000080000ULL, 0x4000100000ULL, 0x8000200000ULL, 0x400000ULL, 0x20000000000ULL, 0x40001000000ULL,

  0x80002000000ULL, 0x100004000000ULL, 0x200008000000ULL, 0x400010000000ULL, 0x800020000000ULL, 0x40000000ULL, 0x2000000000000ULL, 0x4000100000000ULL, 0x8000200000000ULL, 0x10000400000000ULL,

  0x20000800000000ULL, 0x40001000000000ULL, 0x80002000000000ULL, 0x4000000000ULL, 0x200000000000000ULL,

  0x400010000000000ULL, 0x800020000000000ULL, 0x1000040000000000ULL, 0x2000080000000000ULL,

  0x4000100000000000ULL, 0x8000200000000000ULL, 0x400000000000ULL, 0x0ULL, 0x1000000000000ULL, 0x2000000000000ULL, 0x4000000000000ULL, 0x8000000000000ULL, 0x10000000000000ULL, 0x20000000000000ULL, 0x40000000000000ULL
};

const u64 LEFT_BOUND[64] = { 0x0ULL, 0x100ULL, 0x200ULL, 0x400ULL, 0x800ULL, 0x1000ULL, 0x2000ULL,

  0x4000ULL, 0x2ULL, 0x10004ULL, 0x20008ULL, 0x40010ULL, 0x80020ULL, 0x100040ULL, 0x200080ULL, 0x400000ULL, 0x200ULL, 0x1000400ULL, 0x2000800ULL, 0x4001000ULL, 0x8002000ULL, 0x10004000ULL, 0x20008000ULL, 0x40000000ULL, 0x20000ULL, 0x100040000ULL, 0x200080000ULL, 0x400100000ULL,

  0x800200000ULL, 0x1000400000ULL, 0x2000800000ULL, 0x4000000000ULL, 0x2000000ULL, 0x10004000000ULL, 0x20008000000ULL, 0x40010000000ULL, 0x80020000000ULL, 0x100040000000ULL, 0x200080000000ULL,

  0x400000000000ULL, 0x200000000ULL, 0x1000400000000ULL, 0x2000800000000ULL, 0x4001000000000ULL,

  0x8002000000000ULL, 0x10004000000000ULL, 0x20008000000000ULL, 0x40000000000000ULL, 0x20000000000ULL, 0x100040000000000ULL, 0x200080000000000ULL, 0x400100000000000ULL, 0x800200000000000ULL, 0x1000400000000000ULL, 0x2000800000000000ULL, 0x4000000000000000ULL,

  0x2000000000000ULL, 0x4000000000000ULL, 0x8000000000000ULL, 0x10000000000000ULL,

  0x20000000000000ULL, 0x40000000000000ULL, 0x80000000000000ULL, 0x0
};

const u64 VERT_BOUND[64] = { 0x100ULL, 0x200ULL, 0x400ULL, 0x800ULL, 0x1000ULL, 0x2000ULL, 0x4000ULL,

  0x8000ULL, 0x10001ULL, 0x20002ULL, 0x40004ULL, 0x80008ULL, 0x100010ULL, 0x200020ULL, 0x400040ULL,

  0x800080ULL, 0x1000100ULL, 0x2000200ULL, 0x4000400ULL, 0x8000800ULL, 0x10001000ULL, 0x20002000ULL, 0x40004000ULL, 0x80008000ULL, 0x100010000ULL, 0x200020000ULL, 0x400040000ULL, 0x800080000ULL, 0x1000100000ULL, 0x2000200000ULL, 0x4000400000ULL, 0x8000800000ULL, 0x10001000000ULL, 0x20002000000ULL, 0x40004000000ULL, 0x80008000000ULL, 0x100010000000ULL, 0x200020000000ULL,

  0x400040000000ULL, 0x800080000000ULL, 0x1000100000000ULL, 0x2000200000000ULL, 0x4000400000000ULL,

  0x8000800000000ULL, 0x10001000000000ULL, 0x20002000000000ULL, 0x40004000000000ULL, 0x80008000000000ULL, 0x100010000000000ULL, 0x200020000000000ULL, 0x400040000000000ULL, 0x800080000000000ULL, 0x1000100000000000ULL, 0x2000200000000000ULL, 0x4000400000000000ULL,

  0x8000800000000000ULL, 0x1000000000000ULL, 0x2000000000000ULL, 0x4000000000000ULL,

  0x8000000000000ULL, 0x10000000000000ULL, 0x20000000000000ULL, 0x40000000000000ULL,

  0x80000000000000ULL
};

const u64 PAWN_BOUND[2][64] = { {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0x200ULL, 0x500ULL, 0xa00ULL, 0x1400ULL, 0x2800ULL, 0x5000ULL, 0xa000ULL, 0x4000ULL, 0x20000ULL, 0x50000ULL, 0xa0000ULL, 0x140000ULL, 0x280000ULL, 0x500000ULL, 0xa00000ULL, 0x400000ULL, 0x2000000ULL, 0x5000000ULL, 0xa000000ULL, 0x14000000ULL, 0x28000000ULL, 0x50000000ULL, 0xa0000000ULL, 0x40000000ULL, 0x200000000ULL, 0x500000000ULL, 0xa00000000ULL, 0x1400000000ULL, 0x2800000000ULL, 0x5000000000ULL, 0xa000000000ULL, 0x4000000000ULL, 0x20000000000ULL, 0x50000000000ULL, 0xa0000000000ULL, 0x140000000000ULL, 0x280000000000ULL, 0x500000000000ULL, 0xa00000000000ULL, 0x400000000000ULL, 0x2000000000000ULL, 0x5000000000000ULL, 0xa000000000000ULL, 0x14000000000000ULL, 0x28000000000000ULL, 0x50000000000000ULL,
				 0xa0000000000000ULL},

{0x200ULL, 0x500ULL, 0xa00ULL, 0x1400ULL, 0x2800ULL, 0x5000ULL, 0xa000ULL, 0x4000ULL, 0x20000ULL, 0x50000ULL, 0xa0000ULL, 0x140000ULL, 0x280000ULL, 0x500000ULL, 0xa00000ULL, 0x400000ULL, 0x2000000ULL, 0x5000000ULL, 0xa000000ULL, 0x14000000ULL, 0x28000000ULL, 0x50000000ULL, 0xa0000000ULL, 0x40000000ULL, 0x200000000ULL, 0x500000000ULL, 0xa00000000ULL, 0x1400000000ULL, 0x2800000000ULL, 0x5000000000ULL, 0xa000000000ULL, 0x4000000000ULL, 0x20000000000ULL, 0x50000000000ULL, 0xa0000000000ULL, 0x140000000000ULL, 0x280000000000ULL, 0x500000000000ULL, 0xa00000000000ULL, 0x400000000000ULL, 0x2000000000000ULL, 0x5000000000000ULL, 0xa000000000000ULL, 0x14000000000000ULL, 0x28000000000000ULL, 0x50000000000000ULL, 0xa0000000000000ULL, 0x40000000000000ULL, 0x200000000000000ULL, 0x500000000000000ULL,
 0xa00000000000000ULL, 0x1400000000000000ULL, 0x2800000000000000ULL, 0x5000000000000000ULL, 0xa000000000000000ULL, 0x4000000000000000ULL, 0, 0, 0, 0, 0, 0, 0}
};

const u64 ORIZZ_BOUND[64] = { 0x2ULL, 0x5ULL, 0xaULL, 0x14ULL, 0x28ULL, 0x50ULL, 0xa0ULL, 0x40ULL,

  0x200ULL, 0x500ULL, 0xa00ULL, 0x1400ULL, 0x2800ULL, 0x5000ULL, 0xa000ULL, 0x4000ULL, 0x20000ULL, 0x50000ULL, 0xa0000ULL, 0x140000ULL, 0x280000ULL, 0x500000ULL, 0xa00000ULL, 0x400000ULL, 0x2000000ULL, 0x5000000ULL, 0xa000000ULL, 0x14000000ULL, 0x28000000ULL, 0x50000000ULL, 0xa0000000ULL,

  0x40000000ULL, 0x200000000ULL, 0x500000000ULL, 0xa00000000ULL, 0x1400000000ULL, 0x2800000000ULL, 0x5000000000ULL, 0xa000000000ULL, 0x4000000000ULL, 0x20000000000ULL, 0x50000000000ULL,

  0xa0000000000ULL, 0x140000000000ULL, 0x280000000000ULL, 0x500000000000ULL, 0xa00000000000ULL, 0x400000000000ULL, 0x2000000000000ULL, 0x5000000000000ULL, 0xa000000000000ULL, 0x14000000000000ULL, 0x28000000000000ULL, 0x50000000000000ULL, 0xa0000000000000ULL, 0x40000000000000ULL, 0x200000000000000ULL, 0x500000000000000ULL, 0xa00000000000000ULL, 0x1400000000000000ULL,

  0x2800000000000000ULL, 0x5000000000000000ULL, 0xa000000000000000ULL, 0x4000000000000000ULL
};

#ifndef PERFT_MODE
const u64 BACKWARD_MASK[2][64] = { {0ULL, 0ULL, 0ULL, 0ULL, 0ULL, 0ULL, 0ULL, 0ULL, 131584ULL, 328960ULL, 657920ULL, 1315840ULL, 2631680ULL, 5263360ULL, 10526720ULL, 4210688ULL,

				    33685504ULL, 84213760ULL, 168427520ULL, 336855040ULL, 673710080ULL,

				    1347420160ULL, 2694840320ULL, 1077936128ULL, 8623489024ULL, 21558722560ULL, 43117445120ULL, 86234890240ULL, 172469780480ULL,

				    344939560960ULL, 689879121920ULL, 275951648768ULL, 2207613190144ULL, 5519032975360ULL, 11038065950720ULL, 22076131901440ULL,

				    44152263802880ULL, 88304527605760ULL, 176609055211520ULL,

				    70643622084608ULL, 565148976676864ULL, 1412872441692160ULL, 2825744883384320ULL, 5651489766768640ULL, 11302979533537280ULL, 22605959067074560ULL, 45211918134149120ULL, 18084767253659648ULL,

				    562949953421312ULL, 1407374883553280ULL, 2814749767106560ULL,

				    5629499534213120ULL, 11258999068426240ULL, 22517998136852480ULL, 45035996273704960ULL, 18014398509481984ULL, 0ULL, 0ULL, 0ULL, 0ULL, 0ULL, 0ULL, 0ULL, 0},

{0ULL, 0ULL, 0ULL, 0ULL, 0ULL, 0ULL, 0ULL, 0ULL,

 512ULL, 1280ULL, 2560ULL, 5120ULL, 10240ULL, 20480ULL, 40960ULL, 16384ULL, 131584ULL, 328960ULL, 657920ULL, 1315840ULL, 2631680ULL, 5263360ULL, 10526720ULL, 4210688ULL,

 33685504ULL, 84213760ULL, 168427520ULL, 336855040ULL, 673710080ULL, 1347420160ULL,

 2694840320ULL, 1077936128ULL, 8623489024ULL, 21558722560ULL, 43117445120ULL, 86234890240ULL,

 172469780480ULL, 344939560960ULL, 689879121920ULL, 275951648768ULL,

 2207613190144ULL, 5519032975360ULL, 11038065950720ULL, 22076131901440ULL,

 44152263802880ULL, 88304527605760ULL, 176609055211520ULL, 70643622084608ULL,

 565148976676864ULL, 1412872441692160ULL, 2825744883384320ULL, 5651489766768640ULL,

 11302979533537280ULL, 22605959067074560ULL, 45211918134149120ULL, 18084767253659648ULL,

 0ULL, 0ULL, 0ULL, 0ULL, 0ULL, 0ULL, 0ULL, 0}
};

const u64 PASSED_MASK[2][64] = { {0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, 0x3ULL,

				  0x7ULL, 0xeULL, 0x1cULL, 0x38ULL, 0x70ULL, 0xe0ULL, 0xc0ULL, 0x303ULL, 0x707ULL, 0xe0eULL, 0x1c1cULL, 0x3838ULL, 0x7070ULL, 0xe0e0ULL, 0xc0c0ULL, 0x30303ULL, 0x70707ULL, 0xe0e0eULL, 0x1c1c1cULL, 0x383838ULL, 0x707070ULL, 0xe0e0e0ULL, 0xc0c0c0ULL, 0x3030303ULL, 0x7070707ULL, 0xe0e0e0eULL, 0x1c1c1c1cULL, 0x38383838ULL,

				  0x70707070ULL, 0xe0e0e0e0ULL, 0xc0c0c0c0ULL, 0x303030303ULL,

				  0x707070707ULL, 0xe0e0e0e0eULL, 0x1c1c1c1c1cULL, 0x3838383838ULL, 0x7070707070ULL, 0xe0e0e0e0e0ULL, 0xc0c0c0c0c0ULL, 0x30303030303ULL,

				  0x70707070707ULL, 0xe0e0e0e0e0eULL, 0x1c1c1c1c1c1cULL, 0x383838383838ULL, 0x707070707070ULL, 0xe0e0e0e0e0e0ULL,

				  0xc0c0c0c0c0c0ULL, 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, 0x0}, {0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, 0x303030303030000ULL, 0x707070707070000ULL, 0xe0e0e0e0e0e0000ULL, 0x1c1c1c1c1c1c0000ULL,

														    0x3838383838380000ULL, 0x7070707070700000ULL, 0xe0e0e0e0e0e00000ULL, 0xc0c0c0c0c0c00000ULL,

														    0x303030303000000ULL, 0x707070707000000ULL, 0xe0e0e0e0e000000ULL, 0x1c1c1c1c1c000000ULL,

														    0x3838383838000000ULL, 0x7070707070000000ULL, 0xe0e0e0e0e0000000ULL, 0xc0c0c0c0c0000000ULL,

														    0x303030300000000ULL, 0x707070700000000ULL, 0xe0e0e0e00000000ULL, 0x1c1c1c1c00000000ULL,

														    0x3838383800000000ULL, 0x7070707000000000ULL, 0xe0e0e0e000000000ULL, 0xc0c0c0c000000000ULL,

														    0x303030000000000ULL, 0x707070000000000ULL, 0xe0e0e0000000000ULL, 0x1c1c1c0000000000ULL,

														    0x3838380000000000ULL, 0x7070700000000000ULL, 0xe0e0e00000000000ULL, 0xc0c0c00000000000ULL,

														    0x303000000000000ULL, 0x707000000000000ULL, 0xe0e000000000000ULL, 0x1c1c000000000000ULL,

														    0x3838000000000000ULL, 0x7070000000000000ULL, 0xe0e0000000000000ULL, 0xc0c0000000000000ULL,

														    0x300000000000000ULL, 0x700000000000000ULL, 0xe00000000000000ULL, 0x1c00000000000000ULL,

														    0x3800000000000000ULL, 0x7000000000000000ULL, 0xe000000000000000ULL, 0xc000000000000000ULL, 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, 0x0ULL, 0x0}
};

#endif

typedef char *charStar;
const charStar BOARD[64] = { "h1", "g1", "f1", "e1", "d1", "c1", "b1", "a1", "h2", "g2", "f2", "e2", "d2", "c2", "b2", "a2", "h3", "g3", "f3", "e3", "d3", "c3", "b3", "a3", "h4", "g4", "f4", "e4", "d4", "c4", "b4", "a4", "h5", "g5", "f5", "e5", "d5", "c5", "b5", "a5", "h6", "g6", "f6", "e6", "d6", "c6", "b6", "a6", "h7", "g7", "f7", "e7", "d7", "c7", "b7", "a7", "h8", "g8", "f8", "e8", "d8", "c8", "b8", "a8" };

const char getFenInv[256] = { -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 12, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 5, -1, -1, -1, -1, -1, -1, -1, -1, 9, -1, -1, 7, -1, 1, 11, 3, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 4, -1, -1, -1, -1, -1, -1, -1, -1, 8, -1, -1, 6, -1, 0, 10, 2, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
  -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1
};

const u64 TABLOG[64] = { TABLOG_0, TABLOG_1, TABLOG_2, TABLOG_3, TABLOG_4, TABLOG_5, TABLOG_6,

  TABLOG_7, TABLOG_8, TABLOG_9, TABLOG_10, TABLOG_11, TABLOG_12, TABLOG_13, TABLOG_14, TABLOG_15, TABLOG_16, TABLOG_17, TABLOG_18, TABLOG_19, TABLOG_20, TABLOG_21, TABLOG_22,

  TABLOG_23, TABLOG_24, TABLOG_25, TABLOG_26, TABLOG_27, TABLOG_28, TABLOG_29, TABLOG_30,

  TABLOG_31, TABLOG_32, TABLOG_33, TABLOG_34, TABLOG_35, TABLOG_36, TABLOG_37, TABLOG_38,

  TABLOG_39, TABLOG_40, TABLOG_41, TABLOG_42, TABLOG_43, TABLOG_44, TABLOG_45, TABLOG_46,

  TABLOG_47, TABLOG_48, TABLOG_49, TABLOG_50, TABLOG_51, TABLOG_52, TABLOG_53, TABLOG_54,

  TABLOG_55, TABLOG_56, TABLOG_57, TABLOG_58, TABLOG_59, TABLOG_60, TABLOG_61, TABLOG_62,

  TABLOG_63
};

const u64 NOTTABLOG[64] = { NOTTABLOG_0, NOTTABLOG_1, NOTTABLOG_2, NOTTABLOG_3, NOTTABLOG_4,

  NOTTABLOG_5, NOTTABLOG_6, NOTTABLOG_7, NOTTABLOG_8, NOTTABLOG_9, NOTTABLOG_10, NOTTABLOG_11,

  NOTTABLOG_12, NOTTABLOG_13, NOTTABLOG_14, NOTTABLOG_15, NOTTABLOG_16, NOTTABLOG_17, NOTTABLOG_18,

  NOTTABLOG_19, NOTTABLOG_20, NOTTABLOG_21, NOTTABLOG_22, NOTTABLOG_23, NOTTABLOG_24, NOTTABLOG_25,

  NOTTABLOG_26, NOTTABLOG_27, NOTTABLOG_28, NOTTABLOG_29, NOTTABLOG_30, NOTTABLOG_31, NOTTABLOG_32,

  NOTTABLOG_33, NOTTABLOG_34, NOTTABLOG_35, NOTTABLOG_36, NOTTABLOG_37, NOTTABLOG_38, NOTTABLOG_39,

  NOTTABLOG_40, NOTTABLOG_41, NOTTABLOG_42, NOTTABLOG_43, NOTTABLOG_44, NOTTABLOG_45, NOTTABLOG_46,

  NOTTABLOG_47, NOTTABLOG_48, NOTTABLOG_49, NOTTABLOG_50, NOTTABLOG_51, NOTTABLOG_52, NOTTABLOG_53,

  NOTTABLOG_54, NOTTABLOG_55, NOTTABLOG_56, NOTTABLOG_57, NOTTABLOG_58, NOTTABLOG_59, NOTTABLOG_60,

  NOTTABLOG_61, NOTTABLOG_62, NOTTABLOG_63
};

const u64 PAWN_CAPTURE_MASK[2][64] = { {0x0000000000000000ULL, 0x0000000000000000ULL, 0x0000000000000000ULL,

					0x0000000000000000ULL, 0x0000000000000000ULL, 0x0000000000000000ULL,

					0x0000000000000000ULL, 0x0000000000000000ULL, 0x0000000000000002ULL, 0x0000000000000005ULL, 0x000000000000000AULL, 0x0000000000000014ULL, 0x0000000000000028ULL, 0x0000000000000050ULL, 0x00000000000000A0ULL, 0x0000000000000040ULL, 0x0000000000000200ULL, 0x0000000000000500ULL, 0x0000000000000A00ULL, 0x0000000000001400ULL, 0x0000000000002800ULL, 0x0000000000005000ULL, 0x000000000000A000ULL, 0x0000000000004000ULL,

					0x0000000000020000ULL, 0x0000000000050000ULL, 0x00000000000A0000ULL,

					0x0000000000140000ULL, 0x0000000000280000ULL, 0x0000000000500000ULL,

					0x0000000000A00000ULL, 0x0000000000400000ULL, 0x0000000002000000ULL, 0x0000000005000000ULL, 0x000000000A000000ULL, 0x0000000014000000ULL, 0x0000000028000000ULL, 0x0000000050000000ULL, 0x00000000A0000000ULL, 0x0000000040000000ULL, 0x0000000200000000ULL, 0x0000000500000000ULL, 0x0000000A00000000ULL, 0x0000001400000000ULL, 0x0000002800000000ULL, 0x0000005000000000ULL, 0x000000A000000000ULL, 0x0000004000000000ULL,

					0x0000020000000000ULL, 0x0000050000000000ULL, 0x00000A0000000000ULL,

					0x0000140000000000ULL, 0x0000280000000000ULL, 0x0000500000000000ULL,

					0x0000A00000000000ULL, 0x0000400000000000ULL, 0x0002000000000000ULL, 0x0005000000000000ULL, 0x000A000000000000ULL, 0x0014000000000000ULL, 0x0028000000000000ULL, 0x0050000000000000ULL, 0x00A0000000000000ULL, 0x0040000000000000ULL}, {0x0000000000000200ULL, 0x0000000000000500ULL, 0x0000000000000A00ULL, 0x0000000000001400ULL, 0x0000000000002800ULL, 0x0000000000005000ULL,

																																		0x000000000000A000ULL, 0x0000000000004000ULL,

																																		0x0000000000020000ULL, 0x0000000000050000ULL, 0x00000000000A0000ULL, 0x0000000000140000ULL, 0x0000000000280000ULL, 0x0000000000500000ULL,

																																		0x0000000000A00000ULL, 0x0000000000400000ULL,

																																		0x0000000002000000ULL, 0x0000000005000000ULL, 0x000000000A000000ULL, 0x0000000014000000ULL, 0x0000000028000000ULL, 0x0000000050000000ULL,

																																		0x00000000A0000000ULL, 0x0000000040000000ULL,

																																		0x0000000200000000ULL, 0x0000000500000000ULL, 0x0000000A00000000ULL, 0x0000001400000000ULL, 0x0000002800000000ULL, 0x0000005000000000ULL,

																																		0x000000A000000000ULL, 0x0000004000000000ULL,

																																		0x0000020000000000ULL, 0x0000050000000000ULL, 0x00000A0000000000ULL, 0x0000140000000000ULL, 0x0000280000000000ULL, 0x0000500000000000ULL,

																																		0x0000A00000000000ULL, 0x0000400000000000ULL,

																																		0x0002000000000000ULL, 0x0005000000000000ULL, 0x000A000000000000ULL, 0x0014000000000000ULL, 0x0028000000000000ULL, 0x0050000000000000ULL,

																																		0x00A0000000000000ULL, 0x0040000000000000ULL,

																																		0x0200000000000000ULL, 0x0500000000000000ULL, 0x0A00000000000000ULL, 0x1400000000000000ULL, 0x2800000000000000ULL, 0x5000000000000000ULL,

																																		0xA000000000000000ULL, 0x4000000000000000ULL,

																																		0x0000000000000000ULL, 0x0000000000000000ULL, 0x0000000000000000ULL, 0x0000000000000000ULL, 0x0000000000000000ULL, 0x0000000000000000ULL,

																																		0x0000000000000000ULL, 0x0000000000000000ULL}
};

const u64 NEAR_MASK[64] = { 0x0000000000000302ULL, 0x0000000000000705ULL, 0x0000000000000E0AULL,

  0x0000000000001C14ULL, 0x0000000000003828ULL, 0x0000000000007050ULL, 0x000000000000E0A0ULL,

  0x000000000000C040ULL, 0x0000000000030203ULL, 0x0000000000070507ULL, 0x00000000000E0A0EULL,

  0x00000000001C141CULL, 0x0000000000382838ULL, 0x0000000000705070ULL, 0x0000000000E0A0E0ULL,

  0x0000000000C040C0ULL, 0x0000000003020300ULL, 0x0000000007050700ULL, 0x000000000E0A0E00ULL,

  0x000000001C141C00ULL, 0x0000000038283800ULL, 0x0000000070507000ULL, 0x00000000E0A0E000ULL,

  0x00000000C040C000ULL, 0x0000000302030000ULL, 0x0000000705070000ULL, 0x0000000E0A0E0000ULL,

  0x0000001C141C0000ULL, 0x0000003828380000ULL, 0x0000007050700000ULL, 0x000000E0A0E00000ULL,

  0x000000C040C00000ULL, 0x0000030203000000ULL, 0x0000070507000000ULL, 0x00000E0A0E000000ULL,

  0x00001C141C000000ULL, 0x0000382838000000ULL, 0x0000705070000000ULL, 0x0000E0A0E0000000ULL,

  0x0000C040C0000000ULL, 0x0003020300000000ULL, 0x0007050700000000ULL, 0x000E0A0E00000000ULL,

  0x001C141C00000000ULL, 0x0038283800000000ULL, 0x0070507000000000ULL, 0x00E0A0E000000000ULL,

  0x00C040C000000000ULL, 0x0302030000000000ULL, 0x0705070000000000ULL, 0x0E0A0E0000000000ULL,

  0x1C141C0000000000ULL, 0x3828380000000000ULL, 0x7050700000000000ULL, 0xE0A0E00000000000ULL,

  0xC040C00000000000ULL, 0x0203000000000000ULL, 0x0507000000000000ULL, 0x0A0E000000000000ULL,

  0x141C000000000000ULL, 0x2838000000000000ULL, 0x5070000000000000ULL, 0xA0E0000000000000ULL,

  0x40C0000000000000ULL
};

const u64 KNIGHT_MASK[64] = { 0x0000000000020400ULL, 0x0000000000050800ULL, 0x00000000000A1100ULL,

  0x0000000000142200ULL, 0x0000000000284400ULL, 0x0000000000508800ULL, 0x0000000000A01000ULL,

  0x0000000000402000ULL, 0x0000000002040004ULL, 0x0000000005080008ULL, 0x000000000A110011ULL,

  0x0000000014220022ULL, 0x0000000028440044ULL, 0x0000000050880088ULL, 0x00000000A0100010ULL,

  0x0000000040200020ULL, 0x0000000204000402ULL, 0x0000000508000805ULL, 0x0000000A1100110AULL,

  0x0000001422002214ULL, 0x0000002844004428ULL, 0x0000005088008850ULL, 0x000000A0100010A0ULL,

  0x0000004020002040ULL, 0x0000020400040200ULL, 0x0000050800080500ULL, 0x00000A1100110A00ULL,

  0x0000142200221400ULL, 0x0000284400442800ULL, 0x0000508800885000ULL, 0x0000A0100010A000ULL,

  0x0000402000204000ULL, 0x0002040004020000ULL, 0x0005080008050000ULL, 0x000A1100110A0000ULL,

  0x0014220022140000ULL, 0x0028440044280000ULL, 0x0050880088500000ULL, 0x00A0100010A00000ULL,

  0x0040200020400000ULL, 0x0204000402000000ULL, 0x0508000805000000ULL, 0x0A1100110A000000ULL,

  0x1422002214000000ULL, 0x2844004428000000ULL, 0x5088008850000000ULL, 0xA0100010A0000000ULL,

  0x4020002040000000ULL, 0x0400040200000000ULL, 0x0800080500000000ULL, 0x1100110A00000000ULL,

  0x2200221400000000ULL, 0x4400442800000000ULL, 0x8800885000000000ULL, 0x100010A000000000ULL,

  0x2000204000000000ULL, 0x0004020000000000ULL, 0x0008050000000000ULL, 0x00110A0000000000ULL,

  0x0022140000000000ULL, 0x0044280000000000ULL, 0x0088500000000000ULL, 0x0010A00000000000ULL,

  0x0020400000000000ULL
};

const char ROT_90_MASK[64] = { 56, 48, 40, 32, 24, 16, 8, 0, 57, 49, 41, 33, 25, 17, 9, 1, 58, 50, 42, 34, 26, 18, 10, 2, 59, 51, 43, 35, 27, 19, 11, 3, 60, 52, 44, 36, 28, 20, 12, 4, 61, 53, 45, 37, 29, 21, 13, 5, 62, 54, 46, 38, 30, 22, 14, 6, 63, 55, 47, 39, 31, 23, 15, 7 };

#ifdef DEBUG_MODE
const uchar MOVES_BISHOP_LEFT_MASK[64] = { 1, 3, 7, 15, 31, 63, 127, 255, 3, 7,
  15, 31, 63, 127, 255, 254, 7, 15, 31, 63, 127, 255, 254, 252, 15, 31,
  63, 127, 255, 254, 252, 248, 31, 63, 127, 255, 254, 252, 248, 240, 63,
  127, 255, 254, 252, 248, 240, 224, 127, 255, 254, 252, 248, 240, 224,
  192, 255, 254, 252, 248, 240, 224, 192, 128
};

const uchar MOVES_BISHOP_RIGHT_MASK[64] = { 255, 254, 252, 248, 240, 224, 192,
  128, 127, 255, 254, 252, 248, 240, 224, 192, 63, 127, 255, 254, 252,
  248, 240, 224, 31, 63, 127, 255, 254, 252, 248, 240, 15, 31, 63, 127,
  255, 254, 252, 248, 7, 15, 31, 63, 127, 255, 254, 252, 3, 7, 15, 31,
  63, 127, 255, 254, 1, 3, 7, 15, 31, 63, 127, 255
};

#endif

const u64 inv_raw_rightCAPT_45[256][64] = {
#include "rightCAPT.txt"
};

const u64 inv_raw_leftCAPT_45[256][64] = {
#include "leftCAPT.txt"
};

const u64 inv_raw_rightMOV_45[256][64] = {
#include "rightMOV.txt"
};

const u64 inv_raw_leftMOV_45[256][64] = {
#include "leftMOV.txt"
};

const u64 MASK_MOV[256][64] = {
#include "slide_bitboard_mov.txt"
};

const uchar MASK_CAPT_MOV[256][8] = {
#include "slide_bitboard_capt.txt"
};

const u64 MASK_CAPT_MOV2[256][64] = {
#include "slide_bitboard_capt2.txt"
};

const u64 inv_raw90[256][8] = {
#include "inv_raw90.txt"
};

const u64 inv_raw90CAPT[256][64] = {
#include "inv_raw90CAPT.txt"
};

const u64 inv_raw90MOV[256][64] = {
#include "inv_raw90MOV.txt"
};

const u64 EN_PASSANT_MASK[2][64] = { {0ULL, 0ULL, 0ULL, 0ULL, 0ULL, 0ULL, 0ULL, 0ULL, 0ULL, 0ULL, 0ULL, 0ULL, 0ULL, 0ULL, 0ULL, 0ULL, 0ULL, 0ULL, 0ULL, 0ULL, 0ULL, 0ULL, 0ULL, 0ULL,

				      0ULL, 0ULL, 0ULL, 0ULL, 0ULL, 0ULL, 0ULL, 0ULL, 0x200000000ULL, 0x500000000ULL, 0xA00000000ULL, 0x1400000000ULL, 0x2800000000ULL,

				      0x5000000000ULL, 0xA000000000ULL, 0x4000000000ULL, 0ULL, 0ULL, 0ULL, 0ULL, 0ULL, 0ULL, 0ULL, 0ULL, 0ULL, 0ULL, 0ULL, 0ULL, 0ULL, 0ULL, 0ULL, 0ULL, 0ULL, 0ULL, 0ULL, 0ULL, 0ULL, 0ULL, 0ULL, 0}, {0ULL, 0ULL, 0ULL, 0ULL, 0ULL, 0ULL, 0ULL, 0ULL, 0ULL, 0ULL, 0ULL, 0ULL, 0ULL, 0ULL, 0ULL, 0ULL, 0ULL, 0ULL, 0ULL, 0ULL, 0ULL, 0ULL, 0ULL, 0ULL,

																													0x2000000ULL, 0x5000000ULL, 0xA000000ULL, 0x14000000ULL, 0x28000000ULL,

																													0x50000000ULL,

																													0xA0000000ULL, 0x40000000ULL,

																													0ULL, 0ULL, 0ULL, 0ULL, 0ULL, 0ULL, 0ULL, 0ULL, 0ULL, 0ULL, 0ULL, 0ULL, 0ULL, 0ULL, 0ULL, 0ULL, 0ULL, 0ULL, 0ULL, 0ULL, 0ULL, 0ULL, 0ULL, 0ULL,

																													0ULL, 0ULL, 0ULL, 0ULL, 0ULL, 0ULL, 0ULL, 0}
};

#ifndef PERFT_MODE
const char DISTANCE_BISHOP[64] = { 14, 14, 14, 14, 14, 14, 14, 14, 14, 17, 17, 17, 17, 17, 17, 14, 14, 17, 20, 20, 20, 20, 17, 14, 14, 17, 20, 22, 22, 20, 17, 14, 14, 17, 20, 22, 22, 20, 17, 14, 14, 17, 20, 20, 20, 20, 17, 14, 14, 17, 17, 17, 17, 17, 17, 14, 14, 14, 14, 14, 14, 14, 14, 14 };

const char DISTANCE_KNIGHT[64] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 10, 10, 10, 10, 10, 0, 0, 10, 20, 20, 20, 20, 10, 0, 0, 10, 20, 30, 30, 20, 10, 0, 0, 10, 20, 30, 30, 20, 10, 0, 0, 10, 20, 20, 20, 20, 10, 0,

  0, 10, 10, 10, 10, 10, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0
};

const char DISTANCE_KING_OPENING[64] = { -16, -16, -16, -16, -16, -16, -16, -16, -16, -19, -19, -19, -19, -19, -19, -16, -16, -19, -22, -22, -22, -22, -19, -16, -16, -19, -22, -24, -24, -22, -19, -16, -16, -19, -22, -24, -24, -22, -19, -16, -16, -19, -22, -22, -22, -22, -19, -16, -16, -19, -19, -19, -19, -19, -19, -16, -16, -16, -16, -16, -16, -16, -16, -16 };

const char DISTANCE_KING_CLOSURE[64] = { 30, 30, 30, 30, 30, 30, 30, 30, 30, 32, 32, 32, 32, 32, 32, 30, 30, 32, 34, 34, 34, 34, 32, 30, 30, 32, 34, 36, 36, 34, 32, 30, 30, 32, 34, 36, 36, 34, 32, 30, 30, 32, 34, 34, 34, 34, 32, 30, 30, 32, 32, 32, 32, 32, 32, 30, 30, 30, 30, 30, 30, 30, 30, 30 };

const char PASSED[2][64] = { {0, 0, 0, 0, 0, 0, 0, 0, 60, 60, 60, 60, 60, 60, 60, 60, 40, 40, 40, 40, 40, 40, 40, 40, 19, 19, 19, 19, 19, 19, 19, 19, 13, 13, 13, 13, 13, 13, 13, 13, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13, 13, 13, 13, 13, 13, 13, 13,

																																19, 19, 19, 19, 19, 19, 19, 19, 40, 40, 40, 40, 40, 40, 40, 40, 60, 60, 60, 60, 60, 60, 60, 60, 0, 0, 0, 0, 0, 0, 0, 0}
};

const char ISOLATED[8] = { 12, 14, 16, 20, 20, 16, 14, 12 };

const char INV_DISTANCE[64][64] = { {8, 7, 6, 5, 4, 3, 2, 1, 8, 7, 6, 5, 4, 3, 2, 1, 8, 7, 6, 5, 4, 3, 2, 1,

				     8, 7, 6, 5, 4, 3, 2, 1, 8, 7, 6, 5, 4, 3, 2, 1, 8, 7, 6, 5, 4, 3, 2, 1,

				     8, 7, 6, 5, 4, 3, 2, 1, 8, 7, 6, 5, 4, 3, 2, 1}, {7, 8, 7, 6, 5, 4, 3, 2, 7, 8, 7, 6, 5, 4, 3, 2, 7, 8, 7, 6, 5, 4, 3, 2, 7, 8, 7, 6, 5, 4, 3, 2, 7, 8, 7, 6, 5, 4, 3, 2, 7, 8, 7, 6, 5, 4, 3, 2, 7, 8, 7, 6, 5, 4, 3, 2, 7, 8, 7, 6, 5, 4, 3, 2}, {6, 7, 8, 7, 6, 5, 4, 3, 6, 7, 8, 7, 6, 5, 4, 3, 6, 7, 8, 7, 6, 5, 4, 3, 6, 7, 8, 7, 6, 5, 4, 3, 6, 7, 8, 7, 6, 5, 4, 3, 6, 7, 8, 7, 6, 5, 4, 3, 6, 7, 8, 7, 6, 5, 4, 3, 6, 7, 8, 7, 6, 5, 4, 3},

{5, 6, 7, 8, 7, 6, 5, 4, 5, 6, 7, 8, 7, 6, 5, 4, 5, 6, 7, 8, 7, 6, 5, 4, 5, 6, 7, 8, 7, 6, 5, 4, 5, 6, 7, 8, 7, 6, 5, 4, 5, 6, 7, 8, 7, 6, 5, 4, 5, 6, 7, 8, 7, 6, 5, 4, 5, 6, 7, 8, 7, 6, 5, 4}, {4, 5, 6, 7, 8, 7, 6, 5, 4, 5, 6, 7, 8, 7, 6, 5, 4, 5, 6, 7, 8, 7, 6, 5, 4, 5, 6, 7, 8, 7, 6, 5, 4, 5, 6, 7, 8, 7, 6, 5, 4, 5, 6, 7, 8, 7, 6, 5, 4, 5, 6, 7, 8, 7, 6, 5, 4, 5, 6, 7, 8, 7, 6, 5},

{3, 4, 5, 6, 7, 8, 7, 6, 3, 4, 5, 6, 7, 8, 7, 6, 3, 4, 5, 6, 7, 8, 7, 6, 3, 4, 5, 6, 7, 8, 7, 6, 3, 4, 5, 6, 7, 8, 7, 6, 3, 4, 5, 6, 7, 8, 7, 6, 3, 4, 5, 6, 7, 8, 7, 6, 3, 4, 5, 6, 7, 8, 7, 6}, {2, 3, 4, 5, 6, 7, 8, 7, 2, 3, 4, 5, 6, 7, 8, 7, 2, 3, 4, 5, 6, 7, 8, 7, 2, 3, 4, 5, 6, 7, 8, 7, 2, 3, 4, 5, 6, 7, 8, 7, 2, 3, 4, 5, 6, 7, 8, 7, 2, 3, 4, 5, 6, 7, 8, 7, 2, 3, 4, 5, 6, 7, 8, 7},

{1, 2, 3, 4, 5, 6, 7, 8, 1, 2, 3, 4, 5, 6, 7, 8, 1, 2, 3, 4, 5, 6, 7, 8, 1, 2, 3, 4, 5, 6, 7, 8, 1, 2, 3, 4, 5, 6, 7, 8, 1, 2, 3, 4, 5, 6, 7, 8, 1, 2, 3, 4, 5, 6, 7, 8, 1, 2, 3, 4, 5, 6, 7, 8}, {8, 7, 6, 5, 4, 3, 2, 1, 8, 7, 6, 5, 4, 3, 2, 1, 8, 7, 6, 5, 4, 3, 2, 1, 8, 7, 6, 5, 4, 3, 2, 1, 8, 7, 6, 5, 4, 3, 2, 1, 8, 7, 6, 5, 4, 3, 2, 1, 8, 7, 6, 5, 4, 3, 2, 1, 8, 7, 6, 5, 4, 3, 2, 1},

{7, 8, 7, 6, 5, 4, 3, 2, 7, 8, 7, 6, 5, 4, 3, 2, 7, 8, 7, 6, 5, 4, 3, 2, 7, 8, 7, 6, 5, 4, 3, 2, 7, 8, 7, 6, 5, 4, 3, 2, 7, 8, 7, 6, 5, 4, 3, 2, 7, 8, 7, 6, 5, 4, 3, 2, 7, 8, 7, 6, 5, 4, 3, 2}, {6, 7, 8, 7, 6, 5, 4, 3, 6, 7, 8, 7, 6, 5, 4, 3, 6, 7, 8, 7, 6, 5, 4, 3, 6, 7, 8, 7, 6, 5, 4, 3, 6, 7, 8, 7, 6, 5, 4, 3, 6, 7, 8, 7, 6, 5, 4, 3, 6, 7, 8, 7, 6, 5, 4, 3, 6, 7, 8, 7, 6, 5, 4, 3},

{5, 6, 7, 8, 7, 6, 5, 4, 5, 6, 7, 8, 7, 6, 5, 4, 5, 6, 7, 8, 7, 6, 5, 4, 5, 6, 7, 8, 7, 6, 5, 4, 5, 6, 7, 8, 7, 6, 5, 4, 5, 6, 7, 8, 7, 6, 5, 4, 5, 6, 7, 8, 7, 6, 5, 4, 5, 6, 7, 8, 7, 6, 5, 4}, {4, 5, 6, 7, 8, 7, 6, 5, 4, 5, 6, 7, 8, 7, 6, 5, 4, 5, 6, 7, 8, 7, 6, 5, 4, 5, 6, 7, 8, 7, 6, 5, 4, 5, 6, 7, 8, 7, 6, 5, 4, 5, 6, 7, 8, 7, 6, 5, 4, 5, 6, 7, 8, 7, 6, 5, 4, 5, 6, 7, 8, 7, 6, 5},

{3, 4, 5, 6, 7, 8, 7, 6, 3, 4, 5, 6, 7, 8, 7, 6, 3, 4, 5, 6, 7, 8, 7, 6, 3, 4, 5, 6, 7, 8, 7, 6, 3, 4, 5, 6, 7, 8, 7, 6, 3, 4, 5, 6, 7, 8, 7, 6, 3, 4, 5, 6, 7, 8, 7, 6, 3, 4, 5, 6, 7, 8, 7, 6}, {2, 3, 4, 5, 6, 7, 8, 7, 2, 3, 4, 5, 6, 7, 8, 7, 2, 3, 4, 5, 6, 7, 8, 7, 2, 3, 4, 5, 6, 7, 8, 7, 2, 3, 4, 5, 6, 7, 8, 7, 2, 3, 4, 5, 6, 7, 8, 7, 2, 3, 4, 5, 6, 7, 8, 7, 2, 3, 4, 5, 6, 7, 8, 7},

{1, 2, 3, 4, 5, 6, 7, 8, 1, 2, 3, 4, 5, 6, 7, 8, 1, 2, 3, 4, 5, 6, 7, 8, 1, 2, 3, 4, 5, 6, 7, 8, 1, 2, 3, 4, 5, 6, 7, 8, 1, 2, 3, 4, 5, 6, 7, 8, 1, 2, 3, 4, 5, 6, 7, 8, 1, 2, 3, 4, 5, 6, 7, 8}, {8, 7, 6, 5, 4, 3, 2, 1, 8, 7, 6, 5, 4, 3, 2, 1, 8, 7, 6, 5, 4, 3, 2, 1, 8, 7, 6, 5, 4, 3, 2, 1, 8, 7, 6, 5, 4, 3, 2, 1, 8, 7, 6, 5, 4, 3, 2, 1, 8, 7, 6, 5, 4, 3, 2, 1, 8, 7, 6, 5, 4, 3, 2, 1},

{7, 8, 7, 6, 5, 4, 3, 2, 7, 8, 7, 6, 5, 4, 3, 2, 7, 8, 7, 6, 5, 4, 3, 2, 7, 8, 7, 6, 5, 4, 3, 2, 7, 8, 7, 6, 5, 4, 3, 2, 7, 8, 7, 6, 5, 4, 3, 2, 7, 8, 7, 6, 5, 4, 3, 2, 7, 8, 7, 6, 5, 4, 3, 2}, {6, 7, 8, 7, 6, 5, 4, 3, 6, 7, 8, 7, 6, 5, 4, 3, 6, 7, 8, 7, 6, 5, 4, 3, 6, 7, 8, 7, 6, 5, 4, 3, 6, 7, 8, 7, 6, 5, 4, 3, 6, 7, 8, 7, 6, 5, 4, 3, 6, 7, 8, 7, 6, 5, 4, 3, 6, 7, 8, 7, 6, 5, 4, 3},

{5, 6, 7, 8, 7, 6, 5, 4, 5, 6, 7, 8, 7, 6, 5, 4, 5, 6, 7, 8, 7, 6, 5, 4, 5, 6, 7, 8, 7, 6, 5, 4, 5, 6, 7, 8, 7, 6, 5, 4, 5, 6, 7, 8, 7, 6, 5, 4, 5, 6, 7, 8, 7, 6, 5, 4, 5, 6, 7, 8, 7, 6, 5, 4}, {4, 5, 6, 7, 8, 7, 6, 5, 4, 5, 6, 7, 8, 7, 6, 5, 4, 5, 6, 7, 8, 7, 6, 5, 4, 5, 6, 7, 8, 7, 6, 5, 4, 5, 6, 7, 8, 7, 6, 5, 4, 5, 6, 7, 8, 7, 6, 5, 4, 5, 6, 7, 8, 7, 6, 5, 4, 5, 6, 7, 8, 7, 6, 5},

{3, 4, 5, 6, 7, 8, 7, 6, 3, 4, 5, 6, 7, 8, 7, 6, 3, 4, 5, 6, 7, 8, 7, 6, 3, 4, 5, 6, 7, 8, 7, 6, 3, 4, 5, 6, 7, 8, 7, 6, 3, 4, 5, 6, 7, 8, 7, 6, 3, 4, 5, 6, 7, 8, 7, 6, 3, 4, 5, 6, 7, 8, 7, 6}, {2, 3, 4, 5, 6, 7, 8, 7, 2, 3, 4, 5, 6, 7, 8, 7, 2, 3, 4, 5, 6, 7, 8, 7, 2, 3, 4, 5, 6, 7, 8, 7, 2, 3, 4, 5, 6, 7, 8, 7, 2, 3, 4, 5, 6, 7, 8, 7, 2, 3, 4, 5, 6, 7, 8, 7, 2, 3, 4, 5, 6, 7, 8, 7},

{1, 2, 3, 4, 5, 6, 7, 8, 1, 2, 3, 4, 5, 6, 7, 8, 1, 2, 3, 4, 5, 6, 7, 8, 1, 2, 3, 4, 5, 6, 7, 8, 1, 2, 3, 4, 5, 6, 7, 8, 1, 2, 3, 4, 5, 6, 7, 8, 1, 2, 3, 4, 5, 6, 7, 8, 1, 2, 3, 4, 5, 6, 7, 8}, {8, 7, 6, 5, 4, 3, 2, 1, 8, 7, 6, 5, 4, 3, 2, 1, 8, 7, 6, 5, 4, 3, 2, 1, 8, 7, 6, 5, 4, 3, 2, 1, 8, 7, 6, 5, 4, 3, 2, 1, 8, 7, 6, 5, 4, 3, 2, 1, 8, 7, 6, 5, 4, 3, 2, 1, 8, 7, 6, 5, 4, 3, 2, 1},

{7, 8, 7, 6, 5, 4, 3, 2, 7, 8, 7, 6, 5, 4, 3, 2, 7, 8, 7, 6, 5, 4, 3, 2, 7, 8, 7, 6, 5, 4, 3, 2, 7, 8, 7, 6, 5, 4, 3, 2, 7, 8, 7, 6, 5, 4, 3, 2, 7, 8, 7, 6, 5, 4, 3, 2, 7, 8, 7, 6, 5, 4, 3, 2}, {6, 7, 8, 7, 6, 5, 4, 3, 6, 7, 8, 7, 6, 5, 4, 3, 6, 7, 8, 7, 6, 5, 4, 3, 6, 7, 8, 7, 6, 5, 4, 3, 6, 7, 8, 7, 6, 5, 4, 3, 6, 7, 8, 7, 6, 5, 4, 3, 6, 7, 8, 7, 6, 5, 4, 3, 6, 7, 8, 7, 6, 5, 4, 3},

{5, 6, 7, 8, 7, 6, 5, 4, 5, 6, 7, 8, 7, 6, 5, 4, 5, 6, 7, 8, 7, 6, 5, 4, 5, 6, 7, 8, 7, 6, 5, 4, 5, 6, 7, 8, 7, 6, 5, 4, 5, 6, 7, 8, 7, 6, 5, 4, 5, 6, 7, 8, 7, 6, 5, 4, 5, 6, 7, 8, 7, 6, 5, 4}, {4, 5, 6, 7, 8, 7, 6, 5, 4, 5, 6, 7, 8, 7, 6, 5, 4, 5, 6, 7, 8, 7, 6, 5, 4, 5, 6, 7, 8, 7, 6, 5, 4, 5, 6, 7, 8, 7, 6, 5, 4, 5, 6, 7, 8, 7, 6, 5, 4, 5, 6, 7, 8, 7, 6, 5, 4, 5, 6, 7, 8, 7, 6, 5},

{3, 4, 5, 6, 7, 8, 7, 6, 3, 4, 5, 6, 7, 8, 7, 6, 3, 4, 5, 6, 7, 8, 7, 6, 3, 4, 5, 6, 7, 8, 7, 6, 3, 4, 5, 6, 7, 8, 7, 6, 3, 4, 5, 6, 7, 8, 7, 6, 3, 4, 5, 6, 7, 8, 7, 6, 3, 4, 5, 6, 7, 8, 7, 6}, {2, 3, 4, 5, 6, 7, 8, 7, 2, 3, 4, 5, 6, 7, 8, 7, 2, 3, 4, 5, 6, 7, 8, 7, 2, 3, 4, 5, 6, 7, 8, 7, 2, 3, 4, 5, 6, 7, 8, 7, 2, 3, 4, 5, 6, 7, 8, 7, 2, 3, 4, 5, 6, 7, 8, 7, 2, 3, 4, 5, 6, 7, 8, 7},

{1, 2, 3, 4, 5, 6, 7, 8, 1, 2, 3, 4, 5, 6, 7, 8, 1, 2, 3, 4, 5, 6, 7, 8, 1, 2, 3, 4, 5, 6, 7, 8, 1, 2, 3, 4, 5, 6, 7, 8, 1, 2, 3, 4, 5, 6, 7, 8, 1, 2, 3, 4, 5, 6, 7, 8, 1, 2, 3, 4, 5, 6, 7, 8}, {8, 7, 6, 5, 4, 3, 2, 1, 8, 7, 6, 5, 4, 3, 2, 1, 8, 7, 6, 5, 4, 3, 2, 1, 8, 7, 6, 5, 4, 3, 2, 1, 8, 7, 6, 5, 4, 3, 2, 1, 8, 7, 6, 5, 4, 3, 2, 1, 8, 7, 6, 5, 4, 3, 2, 1, 8, 7, 6, 5, 4, 3, 2, 1},

{7, 8, 7, 6, 5, 4, 3, 2, 7, 8, 7, 6, 5, 4, 3, 2, 7, 8, 7, 6, 5, 4, 3, 2, 7, 8, 7, 6, 5, 4, 3, 2, 7, 8, 7, 6, 5, 4, 3, 2, 7, 8, 7, 6, 5, 4, 3, 2, 7, 8, 7, 6, 5, 4, 3, 2, 7, 8, 7, 6, 5, 4, 3, 2}, {6, 7, 8, 7, 6, 5, 4, 3, 6, 7, 8, 7, 6, 5, 4, 3, 6, 7, 8, 7, 6, 5, 4, 3, 6, 7, 8, 7, 6, 5, 4, 3, 6, 7, 8, 7, 6, 5, 4, 3, 6, 7, 8, 7, 6, 5, 4, 3, 6, 7, 8, 7, 6, 5, 4, 3, 6, 7, 8, 7, 6, 5, 4, 3},

{5, 6, 7, 8, 7, 6, 5, 4, 5, 6, 7, 8, 7, 6, 5, 4, 5, 6, 7, 8, 7, 6, 5, 4, 5, 6, 7, 8, 7, 6, 5, 4, 5, 6, 7, 8, 7, 6, 5, 4, 5, 6, 7, 8, 7, 6, 5, 4, 5, 6, 7, 8, 7, 6, 5, 4, 5, 6, 7, 8, 7, 6, 5, 4}, {4, 5, 6, 7, 8, 7, 6, 5, 4, 5, 6, 7, 8, 7, 6, 5, 4, 5, 6, 7, 8, 7, 6, 5, 4, 5, 6, 7, 8, 7, 6, 5, 4, 5, 6, 7, 8, 7, 6, 5, 4, 5, 6, 7, 8, 7, 6, 5, 4, 5, 6, 7, 8, 7, 6, 5, 4, 5, 6, 7, 8, 7, 6, 5},

{3, 4, 5, 6, 7, 8, 7, 6, 3, 4, 5, 6, 7, 8, 7, 6, 3, 4, 5, 6, 7, 8, 7, 6, 3, 4, 5, 6, 7, 8, 7, 6, 3, 4, 5, 6, 7, 8, 7, 6, 3, 4, 5, 6, 7, 8, 7, 6, 3, 4, 5, 6, 7, 8, 7, 6, 3, 4, 5, 6, 7, 8, 7, 6}, {2, 3, 4, 5, 6, 7, 8, 7, 2, 3, 4, 5, 6, 7, 8, 7, 2, 3, 4, 5, 6, 7, 8, 7, 2, 3, 4, 5, 6, 7, 8, 7, 2, 3, 4, 5, 6, 7, 8, 7, 2, 3, 4, 5, 6, 7, 8, 7, 2, 3, 4, 5, 6, 7, 8, 7, 2, 3, 4, 5, 6, 7, 8, 7},

{1, 2, 3, 4, 5, 6, 7, 8, 1, 2, 3, 4, 5, 6, 7, 8, 1, 2, 3, 4, 5, 6, 7, 8, 1, 2, 3, 4, 5, 6, 7, 8, 1, 2, 3, 4, 5, 6, 7, 8, 1, 2, 3, 4, 5, 6, 7, 8, 1, 2, 3, 4, 5, 6, 7, 8, 1, 2, 3, 4, 5, 6, 7, 8}, {8, 7, 6, 5, 4, 3, 2, 1, 8, 7, 6, 5, 4, 3, 2, 1, 8, 7, 6, 5, 4, 3, 2, 1, 8, 7, 6, 5, 4, 3, 2, 1, 8, 7, 6, 5, 4, 3, 2, 1, 8, 7, 6, 5, 4, 3, 2, 1, 8, 7, 6, 5, 4, 3, 2, 1, 8, 7, 6, 5, 4, 3, 2, 1},

{7, 8, 7, 6, 5, 4, 3, 2, 7, 8, 7, 6, 5, 4, 3, 2, 7, 8, 7, 6, 5, 4, 3, 2, 7, 8, 7, 6, 5, 4, 3, 2, 7, 8, 7, 6, 5, 4, 3, 2, 7, 8, 7, 6, 5, 4, 3, 2, 7, 8, 7, 6, 5, 4, 3, 2, 7, 8, 7, 6, 5, 4, 3, 2}, {6, 7, 8, 7, 6, 5, 4, 3, 6, 7, 8, 7, 6, 5, 4, 3, 6, 7, 8, 7, 6, 5, 4, 3, 6, 7, 8, 7, 6, 5, 4, 3, 6, 7, 8, 7, 6, 5, 4, 3, 6, 7, 8, 7, 6, 5, 4, 3, 6, 7, 8, 7, 6, 5, 4, 3, 6, 7, 8, 7, 6, 5, 4, 3},

{5, 6, 7, 8, 7, 6, 5, 4, 5, 6, 7, 8, 7, 6, 5, 4, 5, 6, 7, 8, 7, 6, 5, 4, 5, 6, 7, 8, 7, 6, 5, 4, 5, 6, 7, 8, 7, 6, 5, 4, 5, 6, 7, 8, 7, 6, 5, 4, 5, 6, 7, 8, 7, 6, 5, 4, 5, 6, 7, 8, 7, 6, 5, 4}, {4, 5, 6, 7, 8, 7, 6, 5, 4, 5, 6, 7, 8, 7, 6, 5, 4, 5, 6, 7, 8, 7, 6, 5, 4, 5, 6, 7, 8, 7, 6, 5, 4, 5, 6, 7, 8, 7, 6, 5, 4, 5, 6, 7, 8, 7, 6, 5, 4, 5, 6, 7, 8, 7, 6, 5, 4, 5, 6, 7, 8, 7, 6, 5},

{3, 4, 5, 6, 7, 8, 7, 6, 3, 4, 5, 6, 7, 8, 7, 6, 3, 4, 5, 6, 7, 8, 7, 6, 3, 4, 5, 6, 7, 8, 7, 6, 3, 4, 5, 6, 7, 8, 7, 6, 3, 4, 5, 6, 7, 8, 7, 6, 3, 4, 5, 6, 7, 8, 7, 6, 3, 4, 5, 6, 7, 8, 7, 6}, {2, 3, 4, 5, 6, 7, 8, 7, 2, 3, 4, 5, 6, 7, 8, 7, 2, 3, 4, 5, 6, 7, 8, 7, 2, 3, 4, 5, 6, 7, 8, 7, 2, 3, 4, 5, 6, 7, 8, 7, 2, 3, 4, 5, 6, 7, 8, 7, 2, 3, 4, 5, 6, 7, 8, 7, 2, 3, 4, 5, 6, 7, 8, 7},

{1, 2, 3, 4, 5, 6, 7, 8, 1, 2, 3, 4, 5, 6, 7, 8, 1, 2, 3, 4, 5, 6, 7, 8, 1, 2, 3, 4, 5, 6, 7, 8, 1, 2, 3, 4, 5, 6, 7, 8, 1, 2, 3, 4, 5, 6, 7, 8, 1, 2, 3, 4, 5, 6, 7, 8, 1, 2, 3, 4, 5, 6, 7, 8}, {8, 7, 6, 5, 4, 3, 2, 1, 8, 7, 6, 5, 4, 3, 2, 1, 8, 7, 6, 5, 4, 3, 2, 1, 8, 7, 6, 5, 4, 3, 2, 1, 8, 7, 6, 5, 4, 3, 2, 1, 8, 7, 6, 5, 4, 3, 2, 1, 8, 7, 6, 5, 4, 3, 2, 1, 8, 7, 6, 5, 4, 3, 2, 1},

{7, 8, 7, 6, 5, 4, 3, 2, 7, 8, 7, 6, 5, 4, 3, 2, 7, 8, 7, 6, 5, 4, 3, 2, 7, 8, 7, 6, 5, 4, 3, 2, 7, 8, 7, 6, 5, 4, 3, 2, 7, 8, 7, 6, 5, 4, 3, 2, 7, 8, 7, 6, 5, 4, 3, 2, 7, 8, 7, 6, 5, 4, 3, 2}, {6, 7, 8, 7, 6, 5, 4, 3, 6, 7, 8, 7, 6, 5, 4, 3, 6, 7, 8, 7, 6, 5, 4, 3, 6, 7, 8, 7, 6, 5, 4, 3, 6, 7, 8, 7, 6, 5, 4, 3, 6, 7, 8, 7, 6, 5, 4, 3, 6, 7, 8, 7, 6, 5, 4, 3, 6, 7, 8, 7, 6, 5, 4, 3},

{5, 6, 7, 8, 7, 6, 5, 4, 5, 6, 7, 8, 7, 6, 5, 4, 5, 6, 7, 8, 7, 6, 5, 4, 5, 6, 7, 8, 7, 6, 5, 4, 5, 6, 7, 8, 7, 6, 5, 4, 5, 6, 7, 8, 7, 6, 5, 4, 5, 6, 7, 8, 7, 6, 5, 4, 5, 6, 7, 8, 7, 6, 5, 4}, {4, 5, 6, 7, 8, 7, 6, 5, 4, 5, 6, 7, 8, 7, 6, 5, 4, 5, 6, 7, 8, 7, 6, 5, 4, 5, 6, 7, 8, 7, 6, 5, 4, 5, 6, 7, 8, 7, 6, 5, 4, 5, 6, 7, 8, 7, 6, 5, 4, 5, 6, 7, 8, 7, 6, 5, 4, 5, 6, 7, 8, 7, 6, 5},

{3, 4, 5, 6, 7, 8, 7, 6, 3, 4, 5, 6, 7, 8, 7, 6, 3, 4, 5, 6, 7, 8, 7, 6, 3, 4, 5, 6, 7, 8, 7, 6, 3, 4, 5, 6, 7, 8, 7, 6, 3, 4, 5, 6, 7, 8, 7, 6, 3, 4, 5, 6, 7, 8, 7, 6, 3, 4, 5, 6, 7, 8, 7, 6}, {2, 3, 4, 5, 6, 7, 8, 7, 2, 3, 4, 5, 6, 7, 8, 7, 2, 3, 4, 5, 6, 7, 8, 7, 2, 3, 4, 5, 6, 7, 8, 7, 2, 3, 4, 5, 6, 7, 8, 7, 2, 3, 4, 5, 6, 7, 8, 7, 2, 3, 4, 5, 6, 7, 8, 7, 2, 3, 4, 5, 6, 7, 8, 7},

{1, 2, 3, 4, 5, 6, 7, 8, 1, 2, 3, 4, 5, 6, 7, 8, 1, 2, 3, 4, 5, 6, 7, 8, 1, 2, 3, 4, 5, 6, 7, 8, 1, 2, 3, 4, 5, 6, 7, 8, 1, 2, 3, 4, 5, 6, 7, 8, 1, 2, 3, 4, 5, 6, 7, 8, 1, 2, 3, 4, 5, 6, 7, 8}, {8, 7, 6, 5, 4, 3, 2, 1, 8, 7, 6, 5, 4, 3, 2, 1, 8, 7, 6, 5, 4, 3, 2, 1, 8, 7, 6, 5, 4, 3, 2, 1, 8, 7, 6, 5, 4, 3, 2, 1, 8, 7, 6, 5, 4, 3, 2, 1, 8, 7, 6, 5, 4, 3, 2, 1, 8, 7, 6, 5, 4, 3, 2, 1},

{7, 8, 7, 6, 5, 4, 3, 2, 7, 8, 7, 6, 5, 4, 3, 2, 7, 8, 7, 6, 5, 4, 3, 2, 7, 8, 7, 6, 5, 4, 3, 2, 7, 8, 7, 6, 5, 4, 3, 2, 7, 8, 7, 6, 5, 4, 3, 2, 7, 8, 7, 6, 5, 4, 3, 2, 7, 8, 7, 6, 5, 4, 3, 2}, {6, 7, 8, 7, 6, 5, 4, 3, 6, 7, 8, 7, 6, 5, 4, 3, 6, 7, 8, 7, 6, 5, 4, 3, 6, 7, 8, 7, 6, 5, 4, 3, 6, 7, 8, 7, 6, 5, 4, 3, 6, 7, 8, 7, 6, 5, 4, 3, 6, 7, 8, 7, 6, 5, 4, 3, 6, 7, 8, 7, 6, 5, 4, 3},

{5, 6, 7, 8, 7, 6, 5, 4, 5, 6, 7, 8, 7, 6, 5, 4, 5, 6, 7, 8, 7, 6, 5, 4, 5, 6, 7, 8, 7, 6, 5, 4, 5, 6, 7, 8, 7, 6, 5, 4, 5, 6, 7, 8, 7, 6, 5, 4, 5, 6, 7, 8, 7, 6, 5, 4, 5, 6, 7, 8, 7, 6, 5, 4}, {4, 5, 6, 7, 8, 7, 6, 5, 4, 5, 6, 7, 8, 7, 6, 5, 4, 5, 6, 7, 8, 7, 6, 5, 4, 5, 6, 7, 8, 7, 6, 5, 4, 5, 6, 7, 8, 7, 6, 5, 4, 5, 6, 7, 8, 7, 6, 5, 4, 5, 6, 7, 8, 7, 6, 5, 4, 5, 6, 7, 8, 7, 6, 5},

{3, 4, 5, 6, 7, 8, 7, 6, 3, 4, 5, 6, 7, 8, 7, 6, 3, 4, 5, 6, 7, 8, 7, 6, 3, 4, 5, 6, 7, 8, 7, 6, 3, 4, 5, 6, 7, 8, 7, 6, 3, 4, 5, 6, 7, 8, 7, 6, 3, 4, 5, 6, 7, 8, 7, 6, 3, 4, 5, 6, 7, 8, 7, 6}, {2, 3, 4, 5, 6, 7, 8, 7, 2, 3, 4, 5, 6, 7, 8, 7, 2, 3, 4, 5, 6, 7, 8, 7, 2, 3, 4, 5, 6, 7, 8, 7, 2, 3, 4, 5, 6, 7, 8, 7, 2, 3, 4, 5, 6, 7, 8, 7, 2, 3, 4, 5, 6, 7, 8, 7, 2, 3, 4, 5, 6, 7, 8, 7},

{1, 2, 3, 4, 5, 6, 7, 8, 1, 2, 3, 4, 5, 6, 7, 8, 1, 2, 3, 4, 5, 6, 7, 8, 1, 2, 3, 4, 5, 6, 7, 8, 1, 2, 3, 4, 5, 6, 7, 8, 1, 2, 3, 4, 5, 6, 7, 8, 1, 2, 3, 4, 5, 6, 7, 8, 1, 2, 3, 4, 5, 6, 7, 8}
};

const u64 PAWN_STRUCT_MASK[2][2][64] =
  { {{0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0x1020400ULL, 0x2040800ULL, 0x4081000ULL, 0x8102000ULL, 0x10204000ULL, 0x20408000ULL, 0, 0, 0x102040000ULL, 0x204080000ULL, 0x408100000ULL, 0x810200000ULL, 0x1020400000ULL, 0x2040800000ULL, 0, 0, 0x10204000000ULL, 0x20408000000ULL, 0x40810000000ULL, 0x81020000000ULL, 0x102040000000ULL, 0x204080000000ULL, 0, 0, 0x1020400000000ULL, 0x2040800000000ULL, 0x4081000000000ULL, 0x8102000000000ULL, 0x10204000000000ULL, 0x20408000000000ULL, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
     {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0x4020100ULL, 0x8040200ULL, 0x10080400ULL, 0x20100800ULL, 0x40201000ULL, 0x80402000ULL, 0, 0, 0x402010000ULL, 0x804020000ULL, 0x1008040000ULL, 0x2010080000ULL, 0x4020100000ULL, 0x8040200000ULL, 0, 0, 0x40201000000ULL, 0x80402000000ULL, 0x100804000000ULL, 0x201008000000ULL, 0x402010000000ULL, 0x804020000000ULL, 0, 0, 0x4020100000000ULL, 0x8040200000000ULL, 0x10080400000000ULL, 0x20100800000000ULL, 0x40201000000000ULL, 0x80402000000000ULL, 0, 0, 0, 0, 0, 0, 0, 0}}, {{0, 0, 0, 0, 0, 0, 0, 0, 0x4020100ULL, 0x8040200ULL, 0x10080400ULL, 0x20100800ULL, 0x40201000ULL, 0x80402000ULL, 0, 0, 0x402010000ULL, 0x804020000ULL, 0x1008040000ULL, 0x2010080000ULL, 0x4020100000ULL, 0x8040200000ULL, 0, 0, 0x40201000000ULL, 0x80402000000ULL, 0x100804000000ULL, 0x201008000000ULL, 0x402010000000ULL, 0x804020000000ULL, 0, 0, 0x4020100000000ULL, 0x8040200000000ULL, 0x10080400000000ULL, 0x20100800000000ULL, 0x40201000000000ULL,
																																																																					  0x80402000000000ULL, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},

																																																																					 {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0x1020400ULL, 0x2040800ULL, 0x4081000ULL, 0x8102000ULL, 0x10204000ULL, 0x20408000ULL, 0, 0, 0x102040000ULL, 0x204080000ULL, 0x408100000ULL, 0x810200000ULL, 0x1020400000ULL, 0x2040800000ULL, 0, 0, 0x10204000000ULL, 0x20408000000ULL, 0x40810000000ULL, 0x81020000000ULL, 0x102040000000ULL, 0x204080000000ULL, 0, 0, 0x1020400000000ULL, 0x2040800000000ULL, 0x4081000000000ULL, 0x8102000000000ULL, 0x10204000000000ULL,
																																																																					  0x20408000000000ULL, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}}
};

#endif
#endif
