short sincostbl[4096] = {
  0, 6, 12, 18, 25, 31, 37, 43,
  50, 56, 62, 69, 75, 81, 87, 94,
  100, 106, 113, 119, 125, 131, 138, 144,
  150, 157, 163, 169, 175, 182, 188, 194,
  201, 207, 213, 219, 226, 232, 238, 244,
  251, 257, 263, 270, 276, 282, 288, 295,
  301, 307, 313, 320, 326, 332, 338, 345,
  351, 357, 364, 370, 376, 382, 389, 395,
  401, 407, 414, 420, 426, 432, 439, 445,
  451, 457, 464, 470, 476, 482, 489, 495,
  501, 507, 513, 520, 526, 532, 538, 545,
  551, 557, 563, 570, 576, 582, 588, 594,
  601, 607, 613, 619, 626, 632, 638, 644,
  650, 657, 663, 669, 675, 681, 688, 694,
  700, 706, 712, 718, 725, 731, 737, 743,
  749, 756, 762, 768, 774, 780, 786, 793,
  799, 805, 811, 817, 823, 830, 836, 842,
  848, 854, 860, 866, 873, 879, 885, 891,
  897, 903, 909, 916, 922, 928, 934, 940,
  946, 952, 958, 964, 971, 977, 983, 989,
  995, 1001, 1007, 1013, 1019, 1025, 1032, 1038,
  1044, 1050, 1056, 1062, 1068, 1074, 1080, 1086,
  1092, 1098, 1104, 1110, 1116, 1122, 1129, 1135,
  1141, 1147, 1153, 1159, 1165, 1171, 1177, 1183,
  1189, 1195, 1201, 1207, 1213, 1219, 1225, 1231,
  1237, 1243, 1249, 1255, 1261, 1267, 1273, 1279,
  1285, 1291, 1297, 1303, 1308, 1314, 1320, 1326,
  1332, 1338, 1344, 1350, 1356, 1362, 1368, 1374,
  1380, 1386, 1392, 1397, 1403, 1409, 1415, 1421,
  1427, 1433, 1439, 1445, 1450, 1456, 1462, 1468,
  1474, 1480, 1486, 1492, 1497, 1503, 1509, 1515,
  1521, 1527, 1532, 1538, 1544, 1550, 1556, 1562,
  1567, 1573, 1579, 1585, 1591, 1596, 1602, 1608,
  1614, 1619, 1625, 1631, 1637, 1642, 1648, 1654,
  1660, 1665, 1671, 1677, 1683, 1688, 1694, 1700,
  1706, 1711, 1717, 1723, 1728, 1734, 1740, 1745,
  1751, 1757, 1763, 1768, 1774, 1780, 1785, 1791,
  1796, 1802, 1808, 1813, 1819, 1825, 1830, 1836,
  1842, 1847, 1853, 1858, 1864, 1870, 1875, 1881,
  1886, 1892, 1897, 1903, 1909, 1914, 1920, 1925,
  1931, 1936, 1942, 1947, 1953, 1958, 1964, 1969,
  1975, 1980, 1986, 1991, 1997, 2002, 2008, 2013,
  2019, 2024, 2030, 2035, 2041, 2046, 2052, 2057,
  2062, 2068, 2073, 2079, 2084, 2090, 2095, 2100,
  2106, 2111, 2116, 2122, 2127, 2133, 2138, 2143,
  2149, 2154, 2159, 2165, 2170, 2175, 2181, 2186,
  2191, 2197, 2202, 2207, 2213, 2218, 2223, 2228,
  2234, 2239, 2244, 2249, 2255, 2260, 2265, 2270,
  2276, 2281, 2286, 2291, 2296, 2302, 2307, 2312,
  2317, 2322, 2328, 2333, 2338, 2343, 2348, 2353,
  2359, 2364, 2369, 2374, 2379, 2384, 2389, 2394,
  2399, 2405, 2410, 2415, 2420, 2425, 2430, 2435,
  2440, 2445, 2450, 2455, 2460, 2465, 2470, 2475,
  2480, 2485, 2490, 2495, 2500, 2505, 2510, 2515,
  2520, 2525, 2530, 2535, 2540, 2545, 2550, 2555,
  2559, 2564, 2569, 2574, 2579, 2584, 2589, 2594,
  2599, 2603, 2608, 2613, 2618, 2623, 2628, 2632,
  2637, 2642, 2647, 2652, 2656, 2661, 2666, 2671,
  2675, 2680, 2685, 2690, 2694, 2699, 2704, 2709,
  2713, 2718, 2723, 2727, 2732, 2737, 2741, 2746,
  2751, 2755, 2760, 2765, 2769, 2774, 2779, 2783,
  2788, 2792, 2797, 2802, 2806, 2811, 2815, 2820,
  2824, 2829, 2833, 2838, 2843, 2847, 2852, 2856,
  2861, 2865, 2870, 2874, 2879, 2883, 2887, 2892,
  2896, 2901, 2905, 2910, 2914, 2918, 2923, 2927,
  2932, 2936, 2940, 2945, 2949, 2954, 2958, 2962,
  2967, 2971, 2975, 2980, 2984, 2988, 2992, 2997,
  3001, 3005, 3010, 3014, 3018, 3022, 3027, 3031,
  3035, 3039, 3043, 3048, 3052, 3056, 3060, 3064,
  3069, 3073, 3077, 3081, 3085, 3089, 3093, 3097,
  3102, 3106, 3110, 3114, 3118, 3122, 3126, 3130,
  3134, 3138, 3142, 3146, 3150, 3154, 3158, 3162,
  3166, 3170, 3174, 3178, 3182, 3186, 3190, 3194,
  3198, 3202, 3206, 3210, 3214, 3217, 3221, 3225,
  3229, 3233, 3237, 3241, 3245, 3248, 3252, 3256,
  3260, 3264, 3267, 3271, 3275, 3279, 3282, 3286,
  3290, 3294, 3297, 3301, 3305, 3309, 3312, 3316,
  3320, 3323, 3327, 3331, 3334, 3338, 3342, 3345,
  3349, 3352, 3356, 3360, 3363, 3367, 3370, 3374,
  3378, 3381, 3385, 3388, 3392, 3395, 3399, 3402,
  3406, 3409, 3413, 3416, 3420, 3423, 3427, 3430,
  3433, 3437, 3440, 3444, 3447, 3450, 3454, 3457,
  3461, 3464, 3467, 3471, 3474, 3477, 3481, 3484,
  3487, 3490, 3494, 3497, 3500, 3504, 3507, 3510,
  3513, 3517, 3520, 3523, 3526, 3529, 3533, 3536,
  3539, 3542, 3545, 3548, 3551, 3555, 3558, 3561,
  3564, 3567, 3570, 3573, 3576, 3579, 3582, 3585,
  3588, 3591, 3594, 3597, 3600, 3603, 3606, 3609,
  3612, 3615, 3618, 3621, 3624, 3627, 3630, 3633,
  3636, 3639, 3642, 3644, 3647, 3650, 3653, 3656,
  3659, 3661, 3664, 3667, 3670, 3673, 3675, 3678,
  3681, 3684, 3686, 3689, 3692, 3695, 3697, 3700,
  3703, 3705, 3708, 3711, 3713, 3716, 3719, 3721,
  3724, 3727, 3729, 3732, 3734, 3737, 3739, 3742,
  3745, 3747, 3750, 3752, 3755, 3757, 3760, 3762,
  3765, 3767, 3770, 3772, 3774, 3777, 3779, 3782,
  3784, 3787, 3789, 3791, 3794, 3796, 3798, 3801,
  3803, 3805, 3808, 3810, 3812, 3815, 3817, 3819,
  3821, 3824, 3826, 3828, 3830, 3833, 3835, 3837,
  3839, 3841, 3844, 3846, 3848, 3850, 3852, 3854,
  3856, 3859, 3861, 3863, 3865, 3867, 3869, 3871,
  3873, 3875, 3877, 3879, 3881, 3883, 3885, 3887,
  3889, 3891, 3893, 3895, 3897, 3899, 3901, 3903,
  3905, 3907, 3908, 3910, 3912, 3914, 3916, 3918,
  3919, 3921, 3923, 3925, 3927, 3928, 3930, 3932,
  3934, 3936, 3937, 3939, 3941, 3942, 3944, 3946,
  3947, 3949, 3951, 3952, 3954, 3956, 3957, 3959,
  3961, 3962, 3964, 3965, 3967, 3968, 3970, 3972,
  3973, 3975, 3976, 3978, 3979, 3981, 3982, 3984,
  3985, 3986, 3988, 3989, 3991, 3992, 3994, 3995,
  3996, 3998, 3999, 4000, 4002, 4003, 4004, 4006,
  4007, 4008, 4010, 4011, 4012, 4013, 4015, 4016,
  4017, 4018, 4019, 4021, 4022, 4023, 4024, 4025,
  4027, 4028, 4029, 4030, 4031, 4032, 4033, 4034,
  4035, 4037, 4038, 4039, 4040, 4041, 4042, 4043,
  4044, 4045, 4046, 4047, 4048, 4049, 4050, 4050,
  4051, 4052, 4053, 4054, 4055, 4056, 4057, 4058,
  4058, 4059, 4060, 4061, 4062, 4063, 4063, 4064,
  4065, 4066, 4066, 4067, 4068, 4069, 4069, 4070,
  4071, 4071, 4072, 4073, 4073, 4074, 4075, 4075,
  4076, 4077, 4077, 4078, 4078, 4079, 4079, 4080,
  4081, 4081, 4082, 4082, 4083, 4083, 4084, 4084,
  4085, 4085, 4085, 4086, 4086, 4087, 4087, 4087,
  4088, 4088, 4089, 4089, 4089, 4090, 4090, 4090,
  4091, 4091, 4091, 4092, 4092, 4092, 4092, 4093,
  4093, 4093, 4093, 4093, 4094, 4094, 4094, 4094,
  4094, 4094, 4095, 4095, 4095, 4095, 4095, 4095,
  4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095,
  4095, 4095, 4095, 4095, 4095, 4095, 4095, 4095,
  4095, 4095, 4095, 4095, 4095, 4095, 4095, 4094,
  4094, 4094, 4094, 4094, 4094, 4093, 4093, 4093,
  4093, 4092, 4092, 4092, 4092, 4091, 4091, 4091,
  4090, 4090, 4090, 4090, 4089, 4089, 4088, 4088,
  4088, 4087, 4087, 4086, 4086, 4086, 4085, 4085,
  4084, 4084, 4083, 4083, 4082, 4082, 4081, 4081,
  4080, 4080, 4079, 4079, 4078, 4077, 4077, 4076,
  4076, 4075, 4074, 4074, 4073, 4072, 4072, 4071,
  4070, 4070, 4069, 4068, 4067, 4067, 4066, 4065,
  4064, 4064, 4063, 4062, 4061, 4061, 4060, 4059,
  4058, 4057, 4056, 4055, 4055, 4054, 4053, 4052,
  4051, 4050, 4049, 4048, 4047, 4046, 4045, 4044,
  4043, 4042, 4041, 4040, 4039, 4038, 4037, 4036,
  4035, 4034, 4033, 4032, 4031, 4029, 4028, 4027,
  4026, 4025, 4024, 4022, 4021, 4020, 4019, 4018,
  4016, 4015, 4014, 4013, 4011, 4010, 4009, 4008,
  4006, 4005, 4004, 4002, 4001, 4000, 3998, 3997,
  3996, 3994, 3993, 3991, 3990, 3989, 3987, 3986,
  3984, 3983, 3981, 3980, 3978, 3977, 3975, 3974,
  3972, 3971, 3969, 3968, 3966, 3965, 3963, 3961,
  3960, 3958, 3957, 3955, 3953, 3952, 3950, 3948,
  3947, 3945, 3943, 3942, 3940, 3938, 3936, 3935,
  3933, 3931, 3929, 3928, 3926, 3924, 3922, 3920,
  3919, 3917, 3915, 3913, 3911, 3909, 3907, 3906,
  3904, 3902, 3900, 3898, 3896, 3894, 3892, 3890,
  3888, 3886, 3884, 3882, 3880, 3878, 3876, 3874,
  3872, 3870, 3868, 3866, 3864, 3862, 3860, 3858,
  3855, 3853, 3851, 3849, 3847, 3845, 3843, 3840,
  3838, 3836, 3834, 3832, 3829, 3827, 3825, 3823,
  3820, 3818, 3816, 3814, 3811, 3809, 3807, 3804,
  3802, 3800, 3797, 3795, 3793, 3790, 3788, 3785,
  3783, 3781, 3778, 3776, 3773, 3771, 3768, 3766,
  3763, 3761, 3758, 3756, 3753, 3751, 3748, 3746,
  3743, 3741, 3738, 3736, 3733, 3730, 3728, 3725,
  3723, 3720, 3717, 3715, 3712, 3709, 3707, 3704,
  3701, 3699, 3696, 3693, 3691, 3688, 3685, 3682,
  3680, 3677, 3674, 3671, 3668, 3666, 3663, 3660,
  3657, 3654, 3652, 3649, 3646, 3643, 3640, 3637,
  3634, 3631, 3629, 3626, 3623, 3620, 3617, 3614,
  3611, 3608, 3605, 3602, 3599, 3596, 3593, 3590,
  3587, 3584, 3581, 3578, 3575, 3572, 3569, 3565,
  3562, 3559, 3556, 3553, 3550, 3547, 3544, 3540,
  3537, 3534, 3531, 3528, 3525, 3521, 3518, 3515,
  3512, 3508, 3505, 3502, 3499, 3495, 3492, 3489,
  3486, 3482, 3479, 3476, 3472, 3469, 3466, 3462,
  3459, 3456, 3452, 3449, 3445, 3442, 3439, 3435,
  3432, 3428, 3425, 3421, 3418, 3414, 3411, 3407,
  3404, 3401, 3397, 3393, 3390, 3386, 3383, 3379,
  3376, 3372, 3369, 3365, 3361, 3358, 3354, 3351,
  3347, 3343, 3340, 3336, 3333, 3329, 3325, 3322,
  3318, 3314, 3310, 3307, 3303, 3299, 3296, 3292,
  3288, 3284, 3281, 3277, 3273, 3269, 3266, 3262,
  3258, 3254, 3250, 3246, 3243, 3239, 3235, 3231,
  3227, 3223, 3219, 3216, 3212, 3208, 3204, 3200,
  3196, 3192, 3188, 3184, 3180, 3176, 3172, 3168,
  3164, 3160, 3156, 3152, 3148, 3144, 3140, 3136,
  3132, 3128, 3124, 3120, 3116, 3112, 3108, 3104,
  3100, 3095, 3091, 3087, 3083, 3079, 3075, 3071,
  3066, 3062, 3058, 3054, 3050, 3046, 3041, 3037,
  3033, 3029, 3024, 3020, 3016, 3012, 3007, 3003,
  2999, 2995, 2990, 2986, 2982, 2977, 2973, 2969,
  2964, 2960, 2956, 2951, 2947, 2943, 2938, 2934,
  2929, 2925, 2921, 2916, 2912, 2907, 2903, 2899,
  2894, 2890, 2885, 2881, 2876, 2872, 2867, 2863,
  2858, 2854, 2849, 2845, 2840, 2836, 2831, 2827,
  2822, 2818, 2813, 2808, 2804, 2799, 2795, 2790,
  2785, 2781, 2776, 2772, 2767, 2762, 2758, 2753,
  2748, 2744, 2739, 2734, 2730, 2725, 2720, 2716,
  2711, 2706, 2702, 2697, 2692, 2687, 2683, 2678,
  2673, 2668, 2664, 2659, 2654, 2649, 2644, 2640,
  2635, 2630, 2625, 2620, 2615, 2611, 2606, 2601,
  2596, 2591, 2586, 2581, 2577, 2572, 2567, 2562,
  2557, 2552, 2547, 2542, 2537, 2532, 2527, 2522,
  2518, 2513, 2508, 2503, 2498, 2493, 2488, 2483,
  2478, 2473, 2468, 2463, 2458, 2453, 2448, 2443,
  2437, 2432, 2427, 2422, 2417, 2412, 2407, 2402,
  2397, 2392, 2387, 2382, 2376, 2371, 2366, 2361,
  2356, 2351, 2346, 2340, 2335, 2330, 2325, 2320,
  2315, 2309, 2304, 2299, 2294, 2289, 2283, 2278,
  2273, 2268, 2263, 2257, 2252, 2247, 2242, 2236,
  2231, 2226, 2220, 2215, 2210, 2205, 2199, 2194,
  2189, 2183, 2178, 2173, 2167, 2162, 2157, 2151,
  2146, 2141, 2135, 2130, 2125, 2119, 2114, 2108,
  2103, 2098, 2092, 2087, 2081, 2076, 2071, 2065,
  2060, 2054, 2049, 2043, 2038, 2033, 2027, 2022,
  2016, 2011, 2005, 2000, 1994, 1989, 1983, 1978,
  1972, 1967, 1961, 1956, 1950, 1945, 1939, 1934,
  1928, 1922, 1917, 1911, 1906, 1900, 1895, 1889,
  1884, 1878, 1872, 1867, 1861, 1856, 1850, 1844,
  1839, 1833, 1827, 1822, 1816, 1811, 1805, 1799,
  1794, 1788, 1782, 1777, 1771, 1765, 1760, 1754,
  1748, 1743, 1737, 1731, 1726, 1720, 1714, 1708,
  1703, 1697, 1691, 1686, 1680, 1674, 1668, 1663,
  1657, 1651, 1645, 1640, 1634, 1628, 1622, 1617,
  1611, 1605, 1599, 1593, 1588, 1582, 1576, 1570,
  1564, 1559, 1553, 1547, 1541, 1535, 1530, 1524,
  1518, 1512, 1506, 1500, 1494, 1489, 1483, 1477,
  1471, 1465, 1459, 1453, 1448, 1442, 1436, 1430,
  1424, 1418, 1412, 1406, 1400, 1395, 1389, 1383,
  1377, 1371, 1365, 1359, 1353, 1347, 1341, 1335,
  1329, 1323, 1317, 1311, 1306, 1300, 1294, 1288,
  1282, 1276, 1270, 1264, 1258, 1252, 1246, 1240,
  1234, 1228, 1222, 1216, 1210, 1204, 1198, 1192,
  1186, 1180, 1174, 1168, 1162, 1156, 1150, 1144,
  1138, 1132, 1125, 1119, 1113, 1107, 1101, 1095,
  1089, 1083, 1077, 1071, 1065, 1059, 1053, 1047,
  1041, 1035, 1028, 1022, 1016, 1010, 1004, 998,
  992, 986, 980, 974, 968, 961, 955, 949,
  943, 937, 931, 925, 919, 912, 906, 900,
  894, 888, 882, 876, 870, 863, 857, 851,
  845, 839, 833, 827, 820, 814, 808, 802,
  796, 790, 783, 777, 771, 765, 759, 753,
  746, 740, 734, 728, 722, 715, 709, 703,
  697, 691, 684, 678, 672, 666, 660, 653,
  647, 641, 635, 629, 622, 616, 610, 604,
  598, 591, 585, 579, 573, 566, 560, 554,
  548, 542, 535, 529, 523, 517, 510, 504,
  498, 492, 485, 479, 473, 467, 460, 454,
  448, 442, 435, 429, 423, 417, 410, 404,
  398, 392, 385, 379, 373, 367, 360, 354,
  348, 342, 335, 329, 323, 317, 310, 304,
  298, 291, 285, 279, 273, 266, 260, 254,
  248, 241, 235, 229, 222, 216, 210, 204,
  197, 191, 185, 179, 172, 166, 160, 153,
  147, 141, 135, 128, 122, 116, 109, 103,
  97, 91, 84, 78, 72, 65, 59, 53,
  47, 40, 34, 28, 21, 15, 9, 3,
  -3, -9, -15, -21, -28, -34, -40, -47,
  -53, -59, -65, -72, -78, -84, -91, -97,
  -103, -109, -116, -122, -128, -135, -141, -147,
  -153, -160, -166, -172, -179, -185, -191, -197,
  -204, -210, -216, -222, -229, -235, -241, -248,
  -254, -260, -266, -273, -279, -285, -291, -298,
  -304, -310, -317, -323, -329, -335, -342, -348,
  -354, -360, -367, -373, -379, -385, -392, -398,
  -404, -410, -417, -423, -429, -435, -442, -448,
  -454, -460, -467, -473, -479, -485, -492, -498,
  -504, -510, -517, -523, -529, -535, -542, -548,
  -554, -560, -566, -573, -579, -585, -591, -598,
  -604, -610, -616, -622, -629, -635, -641, -647,
  -653, -660, -666, -672, -678, -684, -691, -697,
  -703, -709, -715, -722, -728, -734, -740, -746,
  -753, -759, -765, -771, -777, -783, -790, -796,
  -802, -808, -814, -820, -827, -833, -839, -845,
  -851, -857, -863, -870, -876, -882, -888, -894,
  -900, -906, -912, -919, -925, -931, -937, -943,
  -949, -955, -961, -968, -974, -980, -986, -992,
  -998, -1004, -1010, -1016, -1022, -1028, -1035, -1041,
  -1047, -1053, -1059, -1065, -1071, -1077, -1083, -1089,
  -1095, -1101, -1107, -1113, -1119, -1125, -1132, -1138,
  -1144, -1150, -1156, -1162, -1168, -1174, -1180, -1186,
  -1192, -1198, -1204, -1210, -1216, -1222, -1228, -1234,
  -1240, -1246, -1252, -1258, -1264, -1270, -1276, -1282,
  -1288, -1294, -1300, -1306, -1311, -1317, -1323, -1329,
  -1335, -1341, -1347, -1353, -1359, -1365, -1371, -1377,
  -1383, -1389, -1395, -1400, -1406, -1412, -1418, -1424,
  -1430, -1436, -1442, -1448, -1453, -1459, -1465, -1471,
  -1477, -1483, -1489, -1494, -1500, -1506, -1512, -1518,
  -1524, -1530, -1535, -1541, -1547, -1553, -1559, -1564,
  -1570, -1576, -1582, -1588, -1593, -1599, -1605, -1611,
  -1617, -1622, -1628, -1634, -1640, -1645, -1651, -1657,
  -1663, -1668, -1674, -1680, -1686, -1691, -1697, -1703,
  -1708, -1714, -1720, -1726, -1731, -1737, -1743, -1748,
  -1754, -1760, -1765, -1771, -1777, -1782, -1788, -1794,
  -1799, -1805, -1811, -1816, -1822, -1827, -1833, -1839,
  -1844, -1850, -1856, -1861, -1867, -1872, -1878, -1884,
  -1889, -1895, -1900, -1906, -1911, -1917, -1922, -1928,
  -1934, -1939, -1945, -1950, -1956, -1961, -1967, -1972,
  -1978, -1983, -1989, -1994, -2000, -2005, -2011, -2016,
  -2022, -2027, -2033, -2038, -2043, -2049, -2054, -2060,
  -2065, -2071, -2076, -2081, -2087, -2092, -2098, -2103,
  -2108, -2114, -2119, -2125, -2130, -2135, -2141, -2146,
  -2151, -2157, -2162, -2167, -2173, -2178, -2183, -2189,
  -2194, -2199, -2205, -2210, -2215, -2220, -2226, -2231,
  -2236, -2242, -2247, -2252, -2257, -2263, -2268, -2273,
  -2278, -2283, -2289, -2294, -2299, -2304, -2309, -2315,
  -2320, -2325, -2330, -2335, -2340, -2346, -2351, -2356,
  -2361, -2366, -2371, -2376, -2382, -2387, -2392, -2397,
  -2402, -2407, -2412, -2417, -2422, -2427, -2432, -2437,
  -2443, -2448, -2453, -2458, -2463, -2468, -2473, -2478,
  -2483, -2488, -2493, -2498, -2503, -2508, -2513, -2518,
  -2522, -2527, -2532, -2537, -2542, -2547, -2552, -2557,
  -2562, -2567, -2572, -2577, -2581, -2586, -2591, -2596,
  -2601, -2606, -2611, -2615, -2620, -2625, -2630, -2635,
  -2640, -2644, -2649, -2654, -2659, -2664, -2668, -2673,
  -2678, -2683, -2687, -2692, -2697, -2702, -2706, -2711,
  -2716, -2720, -2725, -2730, -2734, -2739, -2744, -2748,
  -2753, -2758, -2762, -2767, -2772, -2776, -2781, -2785,
  -2790, -2795, -2799, -2804, -2808, -2813, -2818, -2822,
  -2827, -2831, -2836, -2840, -2845, -2849, -2854, -2858,
  -2863, -2867, -2872, -2876, -2881, -2885, -2890, -2894,
  -2899, -2903, -2907, -2912, -2916, -2921, -2925, -2929,
  -2934, -2938, -2943, -2947, -2951, -2956, -2960, -2964,
  -2969, -2973, -2977, -2982, -2986, -2990, -2995, -2999,
  -3003, -3007, -3012, -3016, -3020, -3024, -3029, -3033,
  -3037, -3041, -3046, -3050, -3054, -3058, -3062, -3066,
  -3071, -3075, -3079, -3083, -3087, -3091, -3095, -3100,
  -3104, -3108, -3112, -3116, -3120, -3124, -3128, -3132,
  -3136, -3140, -3144, -3148, -3152, -3156, -3160, -3164,
  -3168, -3172, -3176, -3180, -3184, -3188, -3192, -3196,
  -3200, -3204, -3208, -3212, -3216, -3219, -3223, -3227,
  -3231, -3235, -3239, -3243, -3246, -3250, -3254, -3258,
  -3262, -3266, -3269, -3273, -3277, -3281, -3284, -3288,
  -3292, -3296, -3299, -3303, -3307, -3310, -3314, -3318,
  -3322, -3325, -3329, -3333, -3336, -3340, -3343, -3347,
  -3351, -3354, -3358, -3361, -3365, -3369, -3372, -3376,
  -3379, -3383, -3386, -3390, -3393, -3397, -3401, -3404,
  -3407, -3411, -3414, -3418, -3421, -3425, -3428, -3432,
  -3435, -3439, -3442, -3445, -3449, -3452, -3456, -3459,
  -3462, -3466, -3469, -3472, -3476, -3479, -3482, -3486,
  -3489, -3492, -3495, -3499, -3502, -3505, -3508, -3512,
  -3515, -3518, -3521, -3525, -3528, -3531, -3534, -3537,
  -3540, -3544, -3547, -3550, -3553, -3556, -3559, -3562,
  -3565, -3569, -3572, -3575, -3578, -3581, -3584, -3587,
  -3590, -3593, -3596, -3599, -3602, -3605, -3608, -3611,
  -3614, -3617, -3620, -3623, -3626, -3629, -3631, -3634,
  -3637, -3640, -3643, -3646, -3649, -3652, -3654, -3657,
  -3660, -3663, -3666, -3668, -3671, -3674, -3677, -3680,
  -3682, -3685, -3688, -3691, -3693, -3696, -3699, -3701,
  -3704, -3707, -3709, -3712, -3715, -3717, -3720, -3723,
  -3725, -3728, -3730, -3733, -3736, -3738, -3741, -3743,
  -3746, -3748, -3751, -3753, -3756, -3758, -3761, -3763,
  -3766, -3768, -3771, -3773, -3776, -3778, -3781, -3783,
  -3785, -3788, -3790, -3793, -3795, -3797, -3800, -3802,
  -3804, -3807, -3809, -3811, -3814, -3816, -3818, -3820,
  -3823, -3825, -3827, -3829, -3832, -3834, -3836, -3838,
  -3840, -3843, -3845, -3847, -3849, -3851, -3853, -3855,
  -3858, -3860, -3862, -3864, -3866, -3868, -3870, -3872,
  -3874, -3876, -3878, -3880, -3882, -3884, -3886, -3888,
  -3890, -3892, -3894, -3896, -3898, -3900, -3902, -3904,
  -3906, -3907, -3909, -3911, -3913, -3915, -3917, -3919,
  -3920, -3922, -3924, -3926, -3928, -3929, -3931, -3933,
  -3935, -3936, -3938, -3940, -3942, -3943, -3945, -3947,
  -3948, -3950, -3952, -3953, -3955, -3957, -3958, -3960,
  -3961, -3963, -3965, -3966, -3968, -3969, -3971, -3972,
  -3974, -3975, -3977, -3978, -3980, -3981, -3983, -3984,
  -3986, -3987, -3989, -3990, -3991, -3993, -3994, -3996,
  -3997, -3998, -4000, -4001, -4002, -4004, -4005, -4006,
  -4008, -4009, -4010, -4011, -4013, -4014, -4015, -4016,
  -4018, -4019, -4020, -4021, -4022, -4024, -4025, -4026,
  -4027, -4028, -4029, -4031, -4032, -4033, -4034, -4035,
  -4036, -4037, -4038, -4039, -4040, -4041, -4042, -4043,
  -4044, -4045, -4046, -4047, -4048, -4049, -4050, -4051,
  -4052, -4053, -4054, -4055, -4055, -4056, -4057, -4058,
  -4059, -4060, -4061, -4061, -4062, -4063, -4064, -4064,
  -4065, -4066, -4067, -4067, -4068, -4069, -4070, -4070,
  -4071, -4072, -4072, -4073, -4074, -4074, -4075, -4076,
  -4076, -4077, -4077, -4078, -4079, -4079, -4080, -4080,
  -4081, -4081, -4082, -4082, -4083, -4083, -4084, -4084,
  -4085, -4085, -4086, -4086, -4086, -4087, -4087, -4088,
  -4088, -4088, -4089, -4089, -4090, -4090, -4090, -4090,
  -4091, -4091, -4091, -4092, -4092, -4092, -4092, -4093,
  -4093, -4093, -4093, -4094, -4094, -4094, -4094, -4094,
  -4094, -4095, -4095, -4095, -4095, -4095, -4095, -4095,
  -4095, -4095, -4095, -4095, -4095, -4095, -4095, -4095,
  -4095, -4095, -4095, -4095, -4095, -4095, -4095, -4095,
  -4095, -4095, -4095, -4095, -4095, -4095, -4094, -4094,
  -4094, -4094, -4094, -4094, -4093, -4093, -4093, -4093,
  -4093, -4092, -4092, -4092, -4092, -4091, -4091, -4091,
  -4090, -4090, -4090, -4089, -4089, -4089, -4088, -4088,
  -4087, -4087, -4087, -4086, -4086, -4085, -4085, -4085,
  -4084, -4084, -4083, -4083, -4082, -4082, -4081, -4081,
  -4080, -4079, -4079, -4078, -4078, -4077, -4077, -4076,
  -4075, -4075, -4074, -4073, -4073, -4072, -4071, -4071,
  -4070, -4069, -4069, -4068, -4067, -4066, -4066, -4065,
  -4064, -4063, -4063, -4062, -4061, -4060, -4059, -4058,
  -4058, -4057, -4056, -4055, -4054, -4053, -4052, -4051,
  -4050, -4050, -4049, -4048, -4047, -4046, -4045, -4044,
  -4043, -4042, -4041, -4040, -4039, -4038, -4037, -4035,
  -4034, -4033, -4032, -4031, -4030, -4029, -4028, -4027,
  -4025, -4024, -4023, -4022, -4021, -4019, -4018, -4017,
  -4016, -4015, -4013, -4012, -4011, -4010, -4008, -4007,
  -4006, -4004, -4003, -4002, -4000, -3999, -3998, -3996,
  -3995, -3994, -3992, -3991, -3989, -3988, -3986, -3985,
  -3984, -3982, -3981, -3979, -3978, -3976, -3975, -3973,
  -3972, -3970, -3968, -3967, -3965, -3964, -3962, -3961,
  -3959, -3957, -3956, -3954, -3952, -3951, -3949, -3947,
  -3946, -3944, -3942, -3941, -3939, -3937, -3936, -3934,
  -3932, -3930, -3928, -3927, -3925, -3923, -3921, -3919,
  -3918, -3916, -3914, -3912, -3910, -3908, -3907, -3905,
  -3903, -3901, -3899, -3897, -3895, -3893, -3891, -3889,
  -3887, -3885, -3883, -3881, -3879, -3877, -3875, -3873,
  -3871, -3869, -3867, -3865, -3863, -3861, -3859, -3856,
  -3854, -3852, -3850, -3848, -3846, -3844, -3841, -3839,
  -3837, -3835, -3833, -3830, -3828, -3826, -3824, -3821,
  -3819, -3817, -3815, -3812, -3810, -3808, -3805, -3803,
  -3801, -3798, -3796, -3794, -3791, -3789, -3787, -3784,
  -3782, -3779, -3777, -3774, -3772, -3770, -3767, -3765,
  -3762, -3760, -3757, -3755, -3752, -3750, -3747, -3745,
  -3742, -3739, -3737, -3734, -3732, -3729, -3727, -3724,
  -3721, -3719, -3716, -3713, -3711, -3708, -3705, -3703,
  -3700, -3697, -3695, -3692, -3689, -3686, -3684, -3681,
  -3678, -3675, -3673, -3670, -3667, -3664, -3661, -3659,
  -3656, -3653, -3650, -3647, -3644, -3642, -3639, -3636,
  -3633, -3630, -3627, -3624, -3621, -3618, -3615, -3612,
  -3609, -3606, -3603, -3600, -3597, -3594, -3591, -3588,
  -3585, -3582, -3579, -3576, -3573, -3570, -3567, -3564,
  -3561, -3558, -3555, -3551, -3548, -3545, -3542, -3539,
  -3536, -3533, -3529, -3526, -3523, -3520, -3517, -3513,
  -3510, -3507, -3504, -3500, -3497, -3494, -3490, -3487,
  -3484, -3481, -3477, -3474, -3471, -3467, -3464, -3461,
  -3457, -3454, -3450, -3447, -3444, -3440, -3437, -3433,
  -3430, -3427, -3423, -3420, -3416, -3413, -3409, -3406,
  -3402, -3399, -3395, -3392, -3388, -3385, -3381, -3378,
  -3374, -3370, -3367, -3363, -3360, -3356, -3352, -3349,
  -3345, -3342, -3338, -3334, -3331, -3327, -3323, -3320,
  -3316, -3312, -3309, -3305, -3301, -3297, -3294, -3290,
  -3286, -3282, -3279, -3275, -3271, -3267, -3264, -3260,
  -3256, -3252, -3248, -3245, -3241, -3237, -3233, -3229,
  -3225, -3221, -3217, -3214, -3210, -3206, -3202, -3198,
  -3194, -3190, -3186, -3182, -3178, -3174, -3170, -3166,
  -3162, -3158, -3154, -3150, -3146, -3142, -3138, -3134,
  -3130, -3126, -3122, -3118, -3114, -3110, -3106, -3102,
  -3097, -3093, -3089, -3085, -3081, -3077, -3073, -3069,
  -3064, -3060, -3056, -3052, -3048, -3043, -3039, -3035,
  -3031, -3027, -3022, -3018, -3014, -3010, -3005, -3001,
  -2997, -2992, -2988, -2984, -2980, -2975, -2971, -2967,
  -2962, -2958, -2954, -2949, -2945, -2940, -2936, -2932,
  -2927, -2923, -2918, -2914, -2910, -2905, -2901, -2896,
  -2892, -2887, -2883, -2879, -2874, -2870, -2865, -2861,
  -2856, -2852, -2847, -2843, -2838, -2833, -2829, -2824,
  -2820, -2815, -2811, -2806, -2802, -2797, -2792, -2788,
  -2783, -2779, -2774, -2769, -2765, -2760, -2755, -2751,
  -2746, -2741, -2737, -2732, -2727, -2723, -2718, -2713,
  -2709, -2704, -2699, -2694, -2690, -2685, -2680, -2675,
  -2671, -2666, -2661, -2656, -2652, -2647, -2642, -2637,
  -2632, -2628, -2623, -2618, -2613, -2608, -2603, -2599,
  -2594, -2589, -2584, -2579, -2574, -2569, -2564, -2559,
  -2555, -2550, -2545, -2540, -2535, -2530, -2525, -2520,
  -2515, -2510, -2505, -2500, -2495, -2490, -2485, -2480,
  -2475, -2470, -2465, -2460, -2455, -2450, -2445, -2440,
  -2435, -2430, -2425, -2420, -2415, -2410, -2405, -2399,
  -2394, -2389, -2384, -2379, -2374, -2369, -2364, -2359,
  -2353, -2348, -2343, -2338, -2333, -2328, -2322, -2317,
  -2312, -2307, -2302, -2296, -2291, -2286, -2281, -2276,
  -2270, -2265, -2260, -2255, -2249, -2244, -2239, -2234,
  -2228, -2223, -2218, -2213, -2207, -2202, -2197, -2191,
  -2186, -2181, -2175, -2170, -2165, -2159, -2154, -2149,
  -2143, -2138, -2133, -2127, -2122, -2116, -2111, -2106,
  -2100, -2095, -2090, -2084, -2079, -2073, -2068, -2062,
  -2057, -2052, -2046, -2041, -2035, -2030, -2024, -2019,
  -2013, -2008, -2002, -1997, -1991, -1986, -1980, -1975,
  -1969, -1964, -1958, -1953, -1947, -1942, -1936, -1931,
  -1925, -1920, -1914, -1909, -1903, -1897, -1892, -1886,
  -1881, -1875, -1870, -1864, -1858, -1853, -1847, -1842,
  -1836, -1830, -1825, -1819, -1813, -1808, -1802, -1796,
  -1791, -1785, -1780, -1774, -1768, -1763, -1757, -1751,
  -1745, -1740, -1734, -1728, -1723, -1717, -1711, -1706,
  -1700, -1694, -1688, -1683, -1677, -1671, -1665, -1660,
  -1654, -1648, -1642, -1637, -1631, -1625, -1619, -1614,
  -1608, -1602, -1596, -1591, -1585, -1579, -1573, -1567,
  -1562, -1556, -1550, -1544, -1538, -1532, -1527, -1521,
  -1515, -1509, -1503, -1497, -1492, -1486, -1480, -1474,
  -1468, -1462, -1456, -1450, -1445, -1439, -1433, -1427,
  -1421, -1415, -1409, -1403, -1397, -1392, -1386, -1380,
  -1374, -1368, -1362, -1356, -1350, -1344, -1338, -1332,
  -1326, -1320, -1314, -1308, -1303, -1297, -1291, -1285,
  -1279, -1273, -1267, -1261, -1255, -1249, -1243, -1237,
  -1231, -1225, -1219, -1213, -1207, -1201, -1195, -1189,
  -1183, -1177, -1171, -1165, -1159, -1153, -1147, -1141,
  -1135, -1129, -1122, -1116, -1110, -1104, -1098, -1092,
  -1086, -1080, -1074, -1068, -1062, -1056, -1050, -1044,
  -1038, -1032, -1025, -1019, -1013, -1007, -1001, -995,
  -989, -983, -977, -971, -964, -958, -952, -946,
  -940, -934, -928, -922, -916, -909, -903, -897,
  -891, -885, -879, -873, -866, -860, -854, -848,
  -842, -836, -830, -823, -817, -811, -805, -799,
  -793, -786, -780, -774, -768, -762, -756, -749,
  -743, -737, -731, -725, -718, -712, -706, -700,
  -694, -688, -681, -675, -669, -663, -657, -650,
  -644, -638, -632, -626, -619, -613, -607, -601,
  -594, -588, -582, -576, -570, -563, -557, -551,
  -545, -538, -532, -526, -520, -513, -507, -501,
  -495, -489, -482, -476, -470, -464, -457, -451,
  -445, -439, -432, -426, -420, -414, -407, -401,
  -395, -389, -382, -376, -370, -364, -357, -351,
  -345, -338, -332, -326, -320, -313, -307, -301,
  -295, -288, -282, -276, -270, -263, -257, -251,
  -244, -238, -232, -226, -219, -213, -207, -201,
  -194, -188, -182, -175, -169, -163, -157, -150,
  -144, -138, -131, -125, -119, -113, -106, -100,
  -94, -87, -81, -75, -69, -62, -56, -50,
  -43, -37, -31, -25, -18, -12, -6, 0,
};
