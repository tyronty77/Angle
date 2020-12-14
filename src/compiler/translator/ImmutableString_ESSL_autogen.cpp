// GENERATED FILE - DO NOT EDIT.
// Generated by gen_builtin_symbols.py using data from builtin_variables.json and
// builtin_function_declarations.txt.
//
// Copyright 2020 The ANGLE Project Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.
//
// ImmutableString_ESSL_autogen.cpp: Wrapper for static or pool allocated char arrays, that are
// guaranteed to be valid and unchanged for the duration of the compilation. Implements
// mangledNameHash using perfect hash function from gen_builtin_symbols.py

#include "compiler/translator/ImmutableString.h"

std::ostream &operator<<(std::ostream &os, const sh::ImmutableString &str)
{
    return os.write(str.data(), str.length());
}

#if defined(_MSC_VER)
#    pragma warning(disable : 4309)  // truncation of constant value
#endif

namespace
{

constexpr int mangledkT1[] = {2557, 605,  1321, 1130, 1727, 1231, 727,  3007, 2250, 1369,
                              2871, 3084, 1811, 947,  2085, 1454, 3131, 2883, 84,   18,
                              561,  876,  2928, 943,  54,   2284, 960,  564,  1719, 2358,
                              1936, 1978, 3204, 2124, 1802, 1893, 2707, 1513, 2168, 3020};
constexpr int mangledkT2[] = {1014, 1853, 669,  390,  134,  630,  455,  3086, 1813, 416,
                              3183, 2138, 1849, 2399, 2480, 1011, 2961, 450,  1843, 849,
                              3206, 926,  2036, 1054, 1279, 2755, 1495, 1734, 5,    2194,
                              2564, 2803, 442,  690,  3152, 2940, 1566, 1018, 2656, 351};
constexpr int mangledkG[]  = {
    0,    0,    0,    0,    199,  0,    1821, 0,    0,    2017, 0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    2177, 0,    0,
    0,    0,    0,    0,    0,    1014, 0,    0,    2898, 0,    0,    0,    0,    0,    415,  0,
    1473, 0,    0,    2295, 0,    813,  0,    0,    0,    0,    1195, 0,    0,    966,  0,    0,
    0,    0,    0,    0,    0,    0,    843,  2206, 0,    1184, 0,    0,    0,    2525, 0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    2985, 934,  986,  0,    0,    1663, 0,    0,    0,    1019, 0,    3131, 627,  2572,
    0,    0,    0,    2742, 0,    691,  963,  0,    0,    0,    0,    0,    0,    601,  0,    0,
    719,  0,    0,    0,    0,    0,    0,    1706, 1266, 0,    0,    0,    0,    0,    1999, 0,
    0,    0,    311,  0,    0,    0,    9,    0,    3007, 0,    0,    0,    505,  2277, 0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,    472,  0,    0,    0,    0,
    0,    0,    0,    631,  1012, 0,    0,    0,    1955, 130,  0,    0,    0,    1491, 0,    0,
    895,  0,    3033, 0,    0,    0,    0,    0,    0,    0,    3058, 0,    102,  1873, 0,    0,
    0,    0,    0,    1101, 0,    0,    399,  0,    839,  0,    1605, 0,    0,    2694, 113,  535,
    0,    0,    0,    975,  0,    0,    1637, 0,    0,    3076, 3071, 0,    1596, 1138, 0,    0,
    0,    0,    0,    0,    0,    2645, 0,    577,  0,    2366, 0,    0,    1895, 2773, 0,    0,
    0,    220,  0,    0,    0,    0,    0,    0,    0,    0,    2703, 0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    382,  0,    75,   1820, 0,    1436, 0,    0,
    1618, 844,  0,    0,    3188, 661,  625,  0,    0,    0,    1659, 0,    3070, 0,    1874, 0,
    0,    0,    0,    0,    0,    314,  0,    0,    2108, 3112, 0,    0,    0,    0,    0,    0,
    1832, 0,    0,    1469, 0,    746,  529,  0,    0,    0,    0,    0,    0,    267,  0,    0,
    0,    0,    0,    0,    0,    732,  0,    0,    0,    0,    0,    0,    1812, 0,    0,    0,
    0,    1488, 1740, 2326, 0,    0,    0,    0,    0,    0,    539,  0,    0,    0,    0,    0,
    0,    0,    0,    0,    1031, 0,    2565, 2531, 0,    160,  0,    0,    253,  0,    0,    0,
    0,    0,    0,    0,    0,    0,    1372, 3200, 1836, 0,    0,    32,   275,  0,    0,    716,
    0,    0,    269,  0,    0,    1896, 0,    863,  0,    0,    822,  0,    2584, 0,    1664, 736,
    0,    2471, 1064, 2702, 0,    0,    0,    0,    0,    2884, 2254, 1378, 0,    1401, 0,    137,
    0,    0,    0,    0,    0,    0,    0,    0,    927,  0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    1726, 0,    0,    2161, 0,    0,    0,    412,  0,    1366, 1038, 0,
    651,  0,    1667, 408,  0,    0,    0,    0,    0,    0,    90,   0,    0,    772,  0,    0,
    703,  0,    2857, 1327, 0,    574,  628,  1199, 3028, 0,    0,    0,    1245, 0,    104,  0,
    0,    0,    0,    0,    0,    0,    376,  1075, 0,    0,    0,    177,  0,    2987, 3202, 1367,
    1575, 0,    0,    0,    0,    1115, 0,    0,    596,  0,    594,  0,    0,    2541, 0,    0,
    0,    0,    0,    772,  0,    1174, 0,    0,    0,    0,    0,    0,    0,    0,    1120, 0,
    0,    0,    0,    2314, 113,  2470, 1583, 3193, 0,    0,    999,  0,    0,    0,    0,    2936,
    3191, 0,    806,  0,    2271, 0,    264,  0,    0,    0,    779,  0,    0,    277,  685,  601,
    0,    1246, 463,  0,    0,    0,    0,    307,  927,  0,    0,    857,  0,    3175, 0,    0,
    3017, 0,    1680, 0,    348,  0,    0,    0,    0,    1911, 0,    646,  0,    0,    0,    0,
    1958, 688,  0,    0,    0,    0,    0,    0,    0,    0,    0,    277,  401,  0,    1026, 0,
    1598, 428,  0,    2736, 797,  0,    0,    0,    0,    0,    2979, 0,    0,    3034, 2308, 2611,
    388,  0,    563,  2768, 1116, 0,    314,  0,    0,    502,  0,    0,    0,    0,    278,  1983,
    0,    2922, 0,    0,    2985, 1177, 1751, 0,    0,    2555, 164,  1853, 2484, 0,    0,    0,
    0,    92,   0,    0,    1188, 977,  859,  3044, 0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    506,  1464, 526,  617,  0,    0,    3162, 0,    2282, 0,    465,  1923, 1774,
    0,    0,    0,    0,    0,    0,    1453, 0,    1496, 1932, 1834, 0,    0,    0,    1976, 1755,
    0,    3179, 0,    375,  0,    342,  393,  1607, 129,  2309, 0,    0,    2369, 0,    1863, 1555,
    0,    377,  630,  0,    0,    0,    0,    0,    0,    45,   0,    0,    1506, 2540, 2721, 0,
    1347, 842,  0,    76,   2475, 2896, 3192, 0,    1423, 1549, 0,    0,    0,    2718, 1503, 302,
    0,    0,    1147, 416,  0,    1428, 0,    414,  2968, 0,    0,    0,    0,    0,    0,    200,
    0,    0,    0,    550,  2334, 0,    1183, 1545, 1456, 0,    0,    673,  0,    0,    0,    0,
    0,    0,    889,  0,    0,    1001, 254,  0,    0,    0,    0,    0,    3139, 3040, 1271, 1979,
    0,    0,    0,    0,    840,  1494, 0,    0,    0,    0,    2543, 0,    1087, 0,    0,    0,
    3207, 0,    0,    0,    0,    890,  727,  2929, 1600, 434,  0,    0,    0,    644,  0,    1277,
    0,    0,    0,    0,    0,    0,    0,    1765, 1544, 0,    0,    0,    0,    1583, 0,    0,
    0,    0,    2597, 0,    1644, 0,    0,    2455, 391,  0,    328,  0,    1556, 1230, 786,  366,
    0,    2806, 0,    1148, 0,    0,    618,  0,    10,   2687, 1604, 0,    0,    429,  0,    625,
    0,    0,    944,  0,    0,    0,    630,  2974, 721,  0,    0,    0,    787,  158,  0,    0,
    0,    2939, 0,    0,    1021, 472,  0,    0,    2735, 0,    2572, 1670, 67,   2969, 144,  1713,
    0,    652,  1974, 0,    40,   217,  1106, 0,    0,    832,  874,  2137, 2818, 0,    0,    0,
    0,    1114, 0,    1951, 0,    724,  0,    2484, 560,  0,    2951, 448,  0,    1072, 0,    0,
    1466, 0,    0,    0,    766,  2167, 0,    0,    0,    2790, 1051, 310,  0,    2243, 1288, 1291,
    707,  3175, 0,    600,  0,    0,    0,    0,    0,    0,    779,  160,  2398, 0,    1413, 0,
    0,    0,    0,    0,    0,    60,   0,    519,  0,    0,    0,    0,    0,    1255, 0,    0,
    0,    673,  0,    0,    3006, 1294, 2677, 0,    0,    0,    205,  0,    548,  0,    0,    355,
    2366, 0,    0,    2213, 50,   151,  0,    506,  1341, 2296, 2783, 0,    522,  0,    2712, 0,
    2201, 2152, 908,  1529, 987,  0,    0,    0,    0,    0,    1373, 0,    0,    384,  2648, 0,
    0,    1430, 0,    0,    2830, 0,    471,  171,  0,    2434, 0,    677,  0,    2998, 0,    1530,
    2854, 1423, 1857, 1907, 0,    0,    0,    1568, 0,    0,    0,    0,    0,    179,  293,  0,
    633,  1307, 2711, 1555, 1950, 0,    1335, 2261, 438,  0,    1708, 491,  433,  0,    1224, 0,
    1882, 7,    14,   13,   0,    2000, 0,    943,  0,    0,    1606, 901,  0,    0,    2753, 0,
    1536, 0,    19,   645,  0,    0,    0,    174,  0,    0,    0,    0,    0,    2134, 0,    3,
    1278, 0,    3108, 827,  797,  806,  0,    1400, 824,  53,   0,    584,  0,    249,  0,    1443,
    1809, 1699, 0,    0,    1769, 2925, 1754, 0,    1467, 2817, 0,    880,  52,   1361, 611,  1417,
    0,    0,    0,    0,    0,    0,    562,  0,    1503, 0,    0,    0,    2337, 0,    1528, 1481,
    1335, 0,    0,    1150, 1043, 0,    0,    2038, 1531, 0,    0,    0,    660,  1735, 902,  2386,
    0,    0,    3204, 0,    0,    0,    1235, 0,    1060, 722,  197,  0,    0,    871,  3077, 0,
    0,    676,  2647, 0,    1237, 0,    0,    0,    2958, 265,  2956, 1603, 0,    0,    0,    0,
    0,    0,    135,  1028, 0,    0,    2518, 3152, 2880, 0,    1423, 2834, 2500, 3034, 0,    0,
    0,    1718, 0,    110,  116,  243,  0,    393,  0,    0,    1327, 0,    131,  383,  0,    156,
    67,   1846, 374,  1924, 0,    0,    2803, 1831, 0,    0,    0,    2482, 0,    588,  123,  0,
    388,  1524, 0,    0,    0,    938,  1413, 2473, 0,    0,    1796, 878,  1292, 2676, 1043, 0,
    0,    170,  2579, 0,    518,  0,    2572, 0,    923,  0,    0,    0,    0,    2087, 0,    217,
    421,  0,    1867, 0,    0,    3124, 1397, 668,  1100, 2221, 1187, 0,    0,    0,    372,  2749,
    955,  0,    1523, 0,    2834, 3033, 1616, 1532, 1020, 24,   0,    27,   0,    0,    2535, 69,
    0,    2494, 0,    0,    210,  0,    0,    2898, 0,    0,    0,    0,    0,    2613, 55,   1800,
    1437, 0,    0,    320,  276,  0,    0,    2034, 444,  0,    1028, 244,  962,  0,    818,  0,
    816,  0,    2227, 0,    0,    833,  1343, 0,    0,    0,    0,    2297, 2946, 0,    0,    0,
    0,    537,  0,    978,  0,    0,    0,    1330, 188,  953,  0,    119,  827,  387,  0,    0,
    1043, 0,    3060, 759,  906,  0,    0,    0,    0,    675,  0,    2288, 2515, 3078, 0,    0,
    605,  0,    811,  1389, 1809, 2682, 0,    0,    228,  0,    0,    0,    0,    0,    1088, 722,
    1952, 2904, 0,    1699, 0,    200,  0,    96,   13,   2644, 0,    0,    0,    3091, 0,    756,
    0,    0,    957,  322,  3105, 0,    0,    0,    3000, 0,    2,    0,    803,  224,  0,    0,
    27,   0,    0,    0,    0,    0,    709,  0,    0,    318,  2742, 2477, 0,    0,    1312, 18,
    0,    3180, 0,    0,    3096, 0,    0,    1073, 0,    785,  0,    1523, 0,    0,    1061, 3182,
    730,  0,    0,    0,    339,  0,    0,    2318, 865,  0,    2875, 2469, 992,  757,  2630, 1846,
    0,    611,  0,    0,    0,    0,    3034, 1404, 3165, 2894, 0,    0,    0,    0,    0,    409,
    19,   0,    464,  1177, 0,    0,    0,    0,    2027, 0,    2814, 2260, 1203, 447,  0,    0,
    2143, 226,  403,  0,    565,  854,  0,    333,  2783, 510,  0,    600,  0,    522,  1065, 385,
    1578, 0,    0,    0,    2814, 0,    0,    550,  0,    1450, 1254, 1218, 1402, 0,    1219, 0,
    0,    550,  2826, 0,    1614, 500,  1427, 0,    976,  0,    0,    0,    0,    0,    1201, 0,
    584,  2189, 1174, 290,  903,  0,    0,    172,  926,  0,    0,    0,    0,    1454, 364,  1353,
    397,  1667, 0,    1151, 839,  0,    675,  1743, 0,    1344, 0,    0,    387,  405,  303,  320,
    0,    0,    0,    354,  0,    1317, 0,    1246, 0,    124,  1015, 557,  286,  460,  915,  0,
    3055, 0,    520,  0,    2296, 2276, 0,    0,    3055, 0,    871,  760,  2909, 0,    443,  0,
    304,  0,    2433, 523,  0,    823,  654,  2695, 0,    409,  1602, 0,    699,  3114, 0,    0,
    2984, 1050, 1585, 0,    0,    1576, 0,    2016, 0,    0,    19,   290,  0,    2980, 1020, 1221,
    738,  0,    2782, 0,    0,    1457, 0,    2734, 1300, 708,  1403, 0,    0,    0,    264,  1498,
    213,  0,    0,    2687, 0,    840,  1119, 1149, 0,    0,    0,    495,  554,  176,  0,    0,
    3064, 155,  327,  0,    0,    0,    1858, 2597, 0,    1175, 429,  0,    1942, 661,  573,  757,
    383,  285,  533,  0,    422,  0,    2567, 0,    0,    2635, 2837, 1099, 0,    0,    0,    831,
    0,    1263, 892,  1171, 1953, 0,    1156, 0,    0,    878,  0,    0,    0,    0,    1282, 0,
    0,    0,    145,  0,    1922, 0,    879,  112,  0,    429,  0,    2857, 0,    0,    1469, 2827,
    0,    1356, 378,  0,    394,  0,    1202, 755,  0,    1319, 2856, 1104, 0,    263,  0,    0,
    1032, 0,    0,    0,    2903, 0,    409,  570,  0,    1565, 2081, 2308, 0,    1070, 0,    0,
    144,  494,  2750, 150,  0,    0,    1044, 745,  946,  0,    656,  0,    2631, 0,    0,    2623,
    224,  0,    0,    0,    2409, 0,    0,    520,  0,    0,    0,    743,  911,  281,  0,    0,
    2497, 1066, 2430, 0,    1356, 0,    0,    1018, 0,    3161, 0,    0,    0,    321,  1554, 0,
    635,  161,  2593, 0,    0,    0,    0,    0,    0,    0,    0,    488,  1056, 1475, 0,    729,
    2118, 0,    2627, 1008, 2499, 0,    319,  681,  3184, 15,   215,  0,    1118, 2971, 655,  0,
    295,  0,    0,    341,  2377, 647,  0,    0,    531,  571,  2024, 2976, 0,    268,  2240, 667,
    0,    2163, 485,  0,    407,  1446, 0,    2563, 0,    678,  490,  0,    3087, 783,  0,    0,
    1444, 795,  0,    0,    630,  1185, 921,  1145, 0,    17,   0,    1778, 236,  674,  0,    340,
    1471, 0,    202,  3107, 0,    0,    964,  0,    6,    967,  2575, 0,    174,  0,    98,   0,
    851,  3058, 0,    0,    0,    0,    0,    0,    1080, 0,    0,    0,    0,    1126, 614,  0,
    0,    1062, 1140, 0,    0,    740,  0,    0,    1074, 0,    3087, 2871, 0,    3052, 40,   2835,
    979,  754,  0,    0,    0,    0,    2563, 1152, 0,    1748, 0,    1407, 0,    296,  903,  1204,
    195,  0,    2718, 0,    0,    0,    2223, 1621, 2631, 1231, 0,    823,  0,    0,    1252, 72,
    3159, 549,  132,  0,    916,  2786, 1056, 831,  0,    3105, 0,    0,    2367, 517,  0,    0,
    1210, 0,    633,  443,  0,    0,    1455, 477,  0,    2961, 1399, 2033, 2275, 0,    606,  1198,
    0,    3126, 484,  0,    0,    2831, 2157, 803,  0,    1200, 1131, 2217, 1136, 0,    223,  1927,
    946,  0,    0,    1310, 198,  0,    0,    952,  3184, 0,    216,  1157, 0,    461,  1267, 2061,
    3131, 847,  1546, 148,  574,  0,    0,    0,    82,   880,  1495, 1090, 0,    0,    0,    2423,
    3182, 0,    34,   2212, 2439, 2304, 0,    2504, 0,    0,    39,   766,  0,    3200, 157,  241,
    0,    0,    0,    1763, 0,    1148, 1564, 0,    0,    0,    0,    142,  1164, 3076, 722,  0,
    1899, 0,    1103, 0,    1099, 0,    406,  0,    0,    3084, 0,    0,    30,   352,  0,    391,
    556,  373,  0,    644,  0,    1557, 0,    31,   2704, 418,  0,    0,    0,    0,    1101, 472,
    3099, 972,  327,  0,    2921, 338,  1985, 378,  0,    2580, 0,    0,    0,    2416, 0,    1107,
    1622, 2991, 1057, 185,  1130, 172,  1320, 0,    0,    2384, 0,    1544, 2126, 403,  2522, 0,
    2050, 0,    1385, 0,    296,  2758, 0,    140,  1324, 2812, 754,  275,  1142, 354,  0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    2964, 94,   206,  703,  0,    0,    2435,
    0,    2225, 0,    682,  0,    269,  0,    860,  1295, 0,    2811, 940,  0,    0,    1070, 3207,
    1411, 343,  1107, 3117, 606,  1011, 1260, 86,   1061, 976,  1172, 0,    0,    0,    84,   0,
    2984, 200,  1075, 1545, 0,    0,    247,  0,    0,    0,    0,    3089, 178,  1540, 0,    1877,
    1105, 0,    9,    633,  0,    0,    275,  0,    1534, 913,  1069, 0,    0,    0,    2983, 0,
    2394, 0,    0,    0,    723,  910,  601,  32,   2572, 139,  0,    0,    2496, 0,    1611, 1326,
    0,    1089, 0,    1477, 3082, 0,    3140, 0,    431,  1015, 1164, 0,    0,    951,  1267, 175,
    0,    355,  2565, 0,    0,    0,    104,  862,  0,    0,    377,  2114, 510,  0,    0,    1227,
    2033, 1316, 1445, 269,  1266, 307,  741,  2569, 0,    0,    0,    0,    1009, 1522, 0,    1977,
    2837, 422,  440,  1539, 1398, 739,  1206, 2488, 0,    0,    210,  0,    1502, 0,    2721, 2608,
    717,  944,  2259, 2911, 652,  10,   226,  0,    0,    2224, 3104, 535,  0,    1125, 2805, 3203,
    2804, 0,    3200, 572,  0,    352,  1523, 2722, 553,  0,    2357, 0,    1120, 1514, 0,    0,
    0,    0,    582,  2827, 237,  736,  616,  771,  0,    0,    3150, 0,    0,    0,    1886, 3011,
    2106, 1495, 2163, 515,  633,  672,  0,    0,    177,  0,    3161, 767,  681,  0,    2564, 802,
    0,    0,    2758, 0,    2874, 769,  653,  0,    751,  0,    2778, 0,    577,  825,  0,    0,
    0,    1544, 919,  0,    0,    0,    0,    2860, 1026, 2079, 1452, 0,    0,    0,    0,    0,
    538,  1144, 0,    0,    0,    2597, 2440, 0,    0,    1064, 0,    0,    0,    779,  353,  0,
    2571, 0,    759,  2543, 1000, 295,  162,  0,    1548, 0,    1613, 0,    0,    1141, 1886, 0,
    958,  2240, 836,  0,    0,    0,    0,    2605, 0,    446,  0,    788,  1659, 1592, 0,    3153,
    1472, 0,    1497, 0,    596,  0,    0,    0,    0,    0,    3147, 0,    429,  0,    778,  0,
    517,  350,  1448, 1609, 2924, 0,    924,  0,    3106, 0,    1297, 2117, 0,    0,    1354, 1305,
    2684, 2562, 0,    0,    0,    140,  866,  1504, 0,    2915, 0,    0,    0,    0,    0,    1355,
    97,   196,  0,    392,  484,  0,    0,    0,    380,  0,    0,    596,  1252, 0,    1698, 267,
    2934, 0,    1013, 0,    3137, 1308, 0,    1359, 1315, 165,  0,    1420, 0,    0,    1410, 0,
    0,    234,  2902, 0,    1573, 0,    0,    1455, 3126, 531,  767,  3132, 935,  0,    0,    1220,
    0,    287,  1014, 3061, 0,    0,    2294, 0,    702,  0,    707,  978,  2462, 2758, 1124, 1650,
    280,  0,    0,    919,  0,    2510, 1595, 83,   1729, 0,    815,  1011, 2545, 59,   0,    845,
    0,    0,    20,   1392, 956,  1447, 254,  0,    0,    255,  0,    0,    0,    1608, 0,    0,
    198,  679,  0,    260,  2618, 0,    215,  1533, 0,    0,    0,    0,    509,  0,    111,  975,
    645,  0,    0,    278,  1189, 0,    0,    0,    0,    0,    2087, 0,    0,    0,    1487, 2687,
    0,    546,  0,    0,    1508, 331,  615,  0,    2529, 1373, 89,   508,  78,   0,    267,  0,
    797,  0,    613,  843,  995,  1339, 1439, 2847, 299,  2962, 867,  0,    0,    0,    0,    1739,
    490,  2822, 49,   0,    533,  3131, 1323, 0,    1485, 717,  0,    1895, 1006, 367,  639,  1411,
    961,  0,    647,  0,    0,    1166, 1734, 1121, 980,  3028, 122,  545,  366,  938,  220,  1197,
    0,    2037, 0,    166,  433,  0,    0,    0,    0,    988,  1618, 2576, 289,  475,  0,    0,
    596,  0,    255,  1352, 1212, 700,  0,    0,    0,    701,  873,  1194, 1246, 355,  66,   0,
    0,    0,    1086, 0,    0,    1623, 0,    2542, 593,  1030, 0,    218,  489,  615,  2069, 1836,
    0,    981,  0,    24,   108,  1516, 1098, 0,    896,  866,  0,    867,  456,  3060, 632,  0,
    762,  0,    0,    0,    0,    370,  466,  3142, 1240, 0,    0,    0,    868,  0,    142,  455,
    3019, 0,    2770, 0,    424,  711,  1326, 0,    0,    741,  853,  0,    631,  2839, 2022, 0,
    315,  2894, 35,   752,  1415, 282,  1135, 0,    2128, 1183, 0,    262,  726,  0,    0,    2150,
    0,    187,  608,  3192, 3090, 319,  995,  0,    0,    702,  954,  3077, 27,   0,    1311, 0,
    1239, 0,    1236, 314,  656,  660,  1467, 936,  905,  856,  1446, 1226, 0,    542,  842,  307,
    2486, 0,    1582, 3099, 238,  1058, 1682, 0,    55,   0,    2201, 708,  0,    25,   40,   1461,
    1187, 57,   568,  783,  285,  0,    152,  793,  0,    511,  1275, 0,    1210, 1352, 303,  1602,
    41,   59,   0,    1500, 1134, 705,  0,    0,    338,  200,  80,   194,  0,    649,  0,    2708,
    0,    2487, 2413, 0,    0,    0,    0,    0,    20,   513,  2748, 1571, 1534, 2088, 2009, 0,
    64,   813,  0,    0,    2475, 81,   149,  1690, 2795, 1363, 2989, 2227, 2597, 116,  0,    1480,
    0,    0,    944,  0,    0,    0,    460,  1336, 427,  0,    0,    1435, 0,    0,    0,    0,
    0,    0,    0,    2368, 0,    2274, 0,    893,  2374, 0,    997,  0,    2799, 0,    904,  2494,
    1026, 411,  0,    0,    0,    1143, 675,  1814, 0,    1074, 1332, 2656, 0,    0,    1424, 0,
    4,    0,    2904, 1477, 1299, 2960, 0,    99,   0,    0,    0,    1407, 3064, 160,  0,    1452,
    2804, 2099, 0,    306,  948,  0,    1470, 0,    3030, 3202, 0,    2732, 0,    1260, 1195, 453,
    471,  1017, 682,  0,    0,    0,    2620, 0,    1882, 0,    0,    911,  3062, 0,    838,  0,
    2437, 68,   0,    0,    1027, 256,  580,  507,  546,  912,  245,  0,    0,    777,  1104, 1463,
    970,  0,    0,    1945, 854,  1149, 0,    1343, 687,  0,    1329, 657,  0,    360,  0,    0,
    0,    0,    2813, 1591, 2489, 0,    0,    2128, 648,  0,    1637, 0,    0,    1522, 2337, 0,
    758,  2281, 708,  0,    103,  0,    2878, 1443, 0,    2074, 3200, 0,    0,    0,    0,    316,
    0,    461,  473,  0,    286,  3107, 0,    2850, 1451, 0,    128,  0,    186,  0,    0,    0,
    0,    2551, 1109, 330,  1214, 0,    0,    0,    0,    1081, 1833, 0,    0,    0,    107,  833,
    330,  658,  0,    2260, 0,    0,    940,  321,  507,  0,    1909, 1419, 0,    361,  1389, 1130,
    77,   0,    2427, 0,    0,    0,    0,    1173};

int MangledHashG(const char *key, const int *T)
{
    int sum = 0;

    for (int i = 0; key[i] != '\0'; i++)
    {
        sum += T[i] * key[i];
        sum %= 3208;
    }
    return mangledkG[sum];
}

int MangledPerfectHash(const char *key)
{
    if (strlen(key) > 40)
        return 0;

    return (MangledHashG(key, mangledkT1) + MangledHashG(key, mangledkT2)) % 3208;
}

constexpr int unmangledkT1[] = {285, 346, 333, 258, 66, 132, 43,  79, 285, 59, 149, 22,  325,
                                301, 223, 334, 172, 84, 66,  242, 91, 132, 80, 231, 269, 334};
constexpr int unmangledkT2[] = {164, 118, 124, 168, 214, 55,  234, 346, 248, 200, 181, 9,  62,
                                284, 229, 292, 208, 216, 282, 186, 221, 2,   283, 336, 81, 207};
constexpr int unmangledkG[]  = {
    0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
    0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   31,  0,   0,   0,   0,   67,  0,   0,   0,
    106, 0,   0,   197, 0,   146, 299, 0,   0,   0,   89,  0,   0,   344, 121, 0,   0,   0,   0,
    0,   73,  58,  0,   0,   136, 0,   0,   105, 145, 349, 0,   0,   0,   0,   0,   0,   0,   52,
    51,  118, 274, 280, 89,  335, 38,  0,   0,   27,  16,  0,   297, 0,   0,   42,  0,   0,   0,
    0,   0,   0,   0,   295, 0,   57,  10,  0,   147, 0,   0,   39,  0,   0,   58,  0,   0,   57,
    0,   111, 337, 23,  141, 0,   128, 256, 13,  0,   300, 0,   0,   135, 315, 179, 0,   0,   55,
    150, 27,  0,   0,   340, 31,  0,   0,   0,   97,  62,  0,   69,  0,   17,  171, 0,   85,  61,
    0,   0,   0,   43,  0,   0,   0,   305, 0,   40,  0,   96,  0,   0,   0,   0,   293, 8,   93,
    0,   0,   0,   0,   21,  99,  158, 57,  0,   114, 261, 0,   120, 0,   0,   0,   0,   81,  0,
    88,  319, 38,  0,   341, 0,   245, 260, 0,   159, 0,   0,   36,  0,   0,   0,   265, 0,   0,
    0,   0,   11,  0,   0,   0,   0,   0,   151, 195, 0,   132, 82,  209, 0,   0,   0,   100, 129,
    132, 0,   0,   0,   16,  0,   32,  337, 123, 72,  29,  0,   257, 78,  20,  130, 0,   80,  0,
    0,   20,  0,   5,   0,   87,  0,   39,  317, 14,  0,   162, 0,   33,  0,   310, 29,  0,   0,
    122, 330, 0,   75,  0,   15,  99,  96,  100, 67,  319, 47,  114, 91,  27,  0,   0,   0,   0,
    0,   134, 303, 118, 133, 341, 0,   0,   0,   0,   0,   131, 0,   0,   334, 60,  113, 138, 0,
    0,   168, 311, 0,   294, 0,   233, 81,  0,   0,   0,   345, 150, 23,  0,   116, 0,   27,  26,
    142, 0,   0,   0,   31,  137, 170, 341, 83,  346, 18,  266, 21,  0,   4,   28,  30,  107, 0,
    0,   102, 14,  0,   290, 17,  344, 0,   119, 0,   0};

int UnmangledHashG(const char *key, const int *T)
{
    int sum = 0;

    for (int i = 0; key[i] != '\0'; i++)
    {
        sum += T[i] * key[i];
        sum %= 353;
    }
    return unmangledkG[sum];
}

int UnmangledPerfectHash(const char *key)
{
    if (strlen(key) > 26)
        return 0;

    return (UnmangledHashG(key, unmangledkT1) + UnmangledHashG(key, unmangledkT2)) % 353;
}

}  // namespace

namespace sh
{

template <>
const size_t ImmutableString::FowlerNollVoHash<4>::kFnvPrime = 16777619u;

template <>
const size_t ImmutableString::FowlerNollVoHash<4>::kFnvOffsetBasis = 0x811c9dc5u;

template <>
const size_t ImmutableString::FowlerNollVoHash<8>::kFnvPrime =
    static_cast<size_t>(1099511628211ull);

template <>
const size_t ImmutableString::FowlerNollVoHash<8>::kFnvOffsetBasis =
    static_cast<size_t>(0xcbf29ce484222325ull);

uint32_t ImmutableString::mangledNameHash() const
{
    return MangledPerfectHash(data());
}

uint32_t ImmutableString::unmangledNameHash() const
{
    return UnmangledPerfectHash(data());
}

}  // namespace sh
