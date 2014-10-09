/**
 *  @file spear_of_destiny_palette.txt
 *
 *  Palette file for Spear of Destiny that maps colour indices to RGB colours.
 *
 *  Each of the 256 possible colour indices gets mapped to the appropriate RGB value.
 *  For example, the index `5` is the sixth element in a 0-based array, so it will be
 *  mapped to the sixth element in this file: `RGB( 42,  0, 42)`. To turn this into
 *  a 32-bit RGBA colour each of the threee components is multiplied with 255 and
 *  divided by 63:
 *  
 *  	#define RGB(r, g, b) {(r)*255/63, (g)*255/63, (b)*255/63, 0xFF}
 *
 *  The alpha component is assigned a constant value because it is not used.
 */

RGB(  0,  0,  0),RGB(  0,  0, 42),RGB(  0, 42,  0),RGB(  0, 42, 42),RGB( 42,  0,  0),
RGB( 42,  0, 42),RGB( 42, 21,  0),RGB( 42, 42, 42),RGB( 21, 21, 21),RGB( 21, 21, 63),
RGB( 21, 63, 21),RGB( 21, 63, 63),RGB( 63, 21, 21),RGB( 63, 21, 63),RGB( 63, 63, 21),
RGB( 63, 63, 63),RGB( 59, 59, 59),RGB( 55, 55, 55),RGB( 52, 52, 52),RGB( 48, 48, 48),
RGB( 45, 45, 45),RGB( 42, 42, 42),RGB( 38, 38, 38),RGB( 35, 35, 35),RGB( 31, 31, 31),
RGB( 28, 28, 28),RGB( 25, 25, 25),RGB( 21, 21, 21),RGB( 18, 18, 18),RGB( 14, 14, 14),
RGB( 11, 11, 11),RGB(  8,  8,  8),RGB( 63,  0,  0),RGB( 59,  0,  0),RGB( 56,  0,  0),
RGB( 53,  0,  0),RGB( 50,  0,  0),RGB( 47,  0,  0),RGB( 44,  0,  0),RGB( 41,  0,  0),
RGB( 38,  0,  0),RGB( 34,  0,  0),RGB( 31,  0,  0),RGB( 28,  0,  0),RGB( 25,  0,  0),
RGB( 22,  0,  0),RGB( 19,  0,  0),RGB( 16,  0,  0),RGB( 63, 54, 54),RGB( 63, 46, 46),
RGB( 63, 39, 39),RGB( 63, 31, 31),RGB( 63, 23, 23),RGB( 63, 16, 16),RGB( 63,  8,  8),
RGB( 63,  0,  0),RGB( 63, 42, 23),RGB( 63, 38, 16),RGB( 63, 34,  8),RGB( 63, 30,  0),
RGB( 57, 27,  0),RGB( 51, 24,  0),RGB( 45, 21,  0),RGB( 39, 19,  0),RGB( 63, 63, 54),
RGB( 63, 63, 46),RGB( 63, 63, 39),RGB( 63, 63, 31),RGB( 63, 62, 23),RGB( 63, 61, 16),
RGB( 63, 61,  8),RGB( 63, 61,  0),RGB( 57, 54,  0),RGB( 51, 49,  0),RGB( 45, 43,  0),
RGB( 39, 39,  0),RGB( 33, 33,  0),RGB( 28, 27,  0),RGB( 22, 21,  0),RGB( 16, 16,  0),
RGB( 52, 63, 23),RGB( 49, 63, 16),RGB( 45, 63,  8),RGB( 40, 63,  0),RGB( 36, 57,  0),
RGB( 32, 51,  0),RGB( 29, 45,  0),RGB( 24, 39,  0),RGB( 54, 63, 54),RGB( 47, 63, 46),
RGB( 39, 63, 39),RGB( 32, 63, 31),RGB( 24, 63, 23),RGB( 16, 63, 16),RGB(  8, 63,  8),
RGB(  0, 63,  0),RGB(  0, 63,  0),RGB(  0, 59,  0),RGB(  0, 56,  0),RGB(  0, 53,  0),
RGB(  1, 50,  0),RGB(  1, 47,  0),RGB(  1, 44,  0),RGB(  1, 41,  0),RGB(  1, 38,  0),
RGB(  1, 34,  0),RGB(  1, 31,  0),RGB(  1, 28,  0),RGB(  1, 25,  0),RGB(  1, 22,  0),
RGB(  1, 19,  0),RGB(  1, 16,  0),RGB( 54, 63, 63),RGB( 46, 63, 63),RGB( 39, 63, 63),
RGB( 31, 63, 62),RGB( 23, 63, 63),RGB( 16, 63, 63),RGB(  8, 63, 63),RGB(  0, 63, 63),
RGB(  0, 57, 57),RGB(  0, 51, 51),RGB(  0, 45, 45),RGB(  0, 39, 39),RGB(  0, 33, 33),
RGB(  0, 28, 28),RGB(  0, 22, 22),RGB(  0, 16, 16),RGB( 23, 47, 63),RGB( 16, 44, 63),
RGB(  8, 42, 63),RGB(  0, 39, 63),RGB(  0, 35, 57),RGB(  0, 31, 51),RGB(  0, 27, 45),
RGB(  0, 23, 39),RGB( 54, 54, 63),RGB( 46, 47, 63),RGB( 39, 39, 63),RGB( 31, 32, 63),
RGB( 23, 24, 63),RGB( 16, 16, 63),RGB(  8,  9, 63),RGB(  0,  1, 63),RGB(  0,  0, 63),
RGB(  0,  0, 59),RGB(  0,  0, 56),RGB(  0,  0, 53),RGB(  0,  0, 50),RGB(  0,  0, 47),
RGB(  0,  0, 44),RGB(  0,  0, 41),RGB(  0,  0, 38),RGB(  0,  0, 34),RGB(  0,  0, 31),
RGB(  0,  0, 28),RGB(  0,  0, 25),RGB(  0,  0, 22),RGB(  0,  0, 19),RGB(  0,  0, 16),
RGB( 10, 10, 10),RGB( 63, 56, 13),RGB( 63, 53,  9),RGB( 63, 51,  6),RGB( 63, 48,  2),
RGB( 63, 45,  0),RGB(  0, 14,  0),RGB(  0, 10,  0),RGB( 38,  0, 57),RGB( 32,  0, 51),
RGB( 29,  0, 45),RGB( 24,  0, 39),RGB( 20,  0, 33),RGB( 17,  0, 28),RGB( 13,  0, 22),
RGB( 10,  0, 16),RGB( 63, 54, 63),RGB( 63, 46, 63),RGB( 63, 39, 63),RGB( 63, 31, 63),
RGB( 63, 23, 63),RGB( 63, 16, 63),RGB( 63,  8, 63),RGB( 63,  0, 63),RGB( 56,  0, 57),
RGB( 50,  0, 51),RGB( 45,  0, 45),RGB( 39,  0, 39),RGB( 33,  0, 33),RGB( 27,  0, 28),
RGB( 22,  0, 22),RGB( 16,  0, 16),RGB( 63, 58, 55),RGB( 63, 56, 52),RGB( 63, 54, 49),
RGB( 63, 53, 47),RGB( 63, 51, 44),RGB( 63, 49, 41),RGB( 63, 47, 39),RGB( 63, 46, 36),
RGB( 63, 44, 32),RGB( 63, 41, 28),RGB( 63, 39, 24),RGB( 60, 37, 23),RGB( 58, 35, 22),
RGB( 55, 34, 21),RGB( 52, 32, 20),RGB( 50, 31, 19),RGB( 47, 30, 18),RGB( 45, 28, 17),
RGB( 42, 26, 16),RGB( 40, 25, 15),RGB( 39, 24, 14),RGB( 36, 23, 13),RGB( 34, 22, 12),
RGB( 32, 20, 11),RGB( 29, 19, 10),RGB( 27, 18,  9),RGB( 23, 16,  8),RGB( 21, 15,  7),
RGB( 18, 14,  6),RGB( 16, 12,  6),RGB( 14, 11,  5),RGB( 10,  8,  3),RGB( 24,  0, 25),
RGB(  0, 25, 25),RGB(  0, 24, 24),RGB(  0,  0,  7),RGB(  0,  0, 11),RGB( 12,  9,  4),
RGB( 18,  0, 18),RGB( 20,  0, 20),RGB(  0,  0, 13),RGB(  7,  7,  7),RGB( 19, 19, 19),
RGB( 23, 23, 23),RGB( 16, 16, 16),RGB( 12, 12, 12),RGB( 13, 13, 13),RGB( 54, 61, 61),
RGB( 46, 58, 58),RGB( 39, 55, 55),RGB( 29, 50, 50),RGB( 18, 48, 48),RGB(  8, 45, 45),
RGB(  8, 44, 44),RGB(  0, 41, 41),RGB(  0, 38, 38),RGB(  0, 35, 35),RGB(  0, 33, 33),
RGB(  0, 31, 31),RGB(  0, 30, 30),RGB(  0, 29, 29),RGB(  0, 28, 28),RGB(  0, 27, 27),
RGB( 38,  0, 34)
