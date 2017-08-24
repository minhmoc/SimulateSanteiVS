#pragma once
#ifndef SANTEIORDER_H
#define SANTEIORDER_H

enum class SanteiOrder {
	Image = 4,
	RotVer = 6,
	RotHoz = 8,
	RotLeft = 10,
	RotRight = 9,
	Batch = 372,
	ID = 370,

	Submit = 361,
	Sb_Lg = 360,
	Pause = 359,

	BL1 = 290,
	BL1_0a = 291,
	BL1_1a = 355,
	BL1_2a = 350,
	BL1_3a = 338,
	BL1_7a = 340,
	BL1_8a = 330,
	BL1_9a = 313,
	BL1_10a = 299,
	BL1_11a = 348,
	BL1_12a = 336,
	BL1_13a = 323,
	BL1_15a = 346,
	BL1_16a = 334,
	BL1_17a = 328,
	BL1_18a = 321,
	BL1_19a = 310,
	BL1_20a = 306,
	BL1_21a = 297,
	BL1_22a = 318,
	BL1_23a = 308,
	BL1_24a = 304,
	BL1_25a = 295,
	BL1_0 = 291 + 1,
	BL1_1 = 355 + 1,
	BL1_2 = 350 + 1,
	BL1_3 = 338 + 1,
	BL1_7 = 340 + 1,
	BL1_8 = 330 + 1,
	BL1_9 = 313 + 1,
	BL1_10 = 299 + 1,
	BL1_11 = 348 + 1,
	BL1_12 = 336 + 1,
	BL1_13 = 323 + 1,
	BL1_15 = 346 + 1,
	BL1_16 = 334 + 1,
	BL1_17 = 328 + 1,
	BL1_18 = 321 + 1,
	BL1_19 = 310 + 1,
	BL1_20 = 306 + 1,
	BL1_21 = 297 + 1,
	BL1_22 = 318 + 1,
	BL1_23 = 308 + 1,
	BL1_24 = 304 + 1,
	BL1_25 = 295 + 1,

	BL2 = 222,
	BL2_0a = 223,
	BL2_1a = 287,
	BL2_2a = 282,
	BL2_3a = 270,
	BL2_7a = 272,
	BL2_8a = 262,
	BL2_9a = 245,
	BL2_10a = 231,
	BL2_11a = 280,
	BL2_12a = 268,
	BL2_13a = 255,
	BL2_15a = 278,
	BL2_16a = 266,
	BL2_17a = 260,
	BL2_18a = 253,
	BL2_19a = 242,
	BL2_20a = 238,
	BL2_21a = 229,
	BL2_22a = 250,
	BL2_23a = 240,
	BL2_24a = 236,
	BL2_25a = 227,
	BL2_0 = 223 + 1,
	BL2_1 = 287 + 1,
	BL2_2 = 282 + 1,
	BL2_3 = 270 + 1,
	BL2_7 = 272 + 1,
	BL2_8 = 262 + 1,
	BL2_9 = 245 + 1,
	BL2_10 = 231 + 1,
	BL2_11 = 280 + 1,
	BL2_12 = 268 + 1,
	BL2_13 = 255 + 1,
	BL2_15 = 278 + 1,
	BL2_16 = 266 + 1,
	BL2_17 = 260 + 1,
	BL2_18 = 253 + 1,
	BL2_19 = 242 + 1,
	BL2_20 = 238 + 1,
	BL2_21 = 229 + 1,
	BL2_22 = 250 + 1,
	BL2_23 = 240 + 1,
	BL2_24 = 236 + 1,
	BL2_25 = 227 + 1,

	BL3 = 86,
	BL3_0a = 87,
	BL3_1a = 151,
	BL3_2a = 146,
	BL3_3a = 134,
	BL3_7a = 136,
	BL3_8a = 126,
	BL3_9a = 109,
	BL3_10a = 95,
	BL3_11a = 144,
	BL3_12a = 132,
	BL3_13a = 119,
	BL3_15a = 142,
	BL3_16a = 130,
	BL3_17a = 124,
	BL3_18a = 117,
	BL3_19a = 106,
	BL3_20a = 102,
	BL3_21a = 93,
	BL3_22a = 114,
	BL3_23a = 104,
	BL3_24a = 100,
	BL3_25a = 91,
	BL3_0 = 87 + 1,
	BL3_1 = 151 + 1,
	BL3_2 = 146 + 1,
	BL3_3 = 134 + 1,
	BL3_7 = 136 + 1,
	BL3_8 = 126 + 1,
	BL3_9 = 109 + 1,
	BL3_10 = 95 + 1,
	BL3_11 = 144 + 1,
	BL3_12 = 132 + 1,
	BL3_13 = 119 + 1,
	BL3_15 = 142 + 1,
	BL3_16 = 130 + 1,
	BL3_17 = 124 + 1,
	BL3_18 = 117 + 1,
	BL3_19 = 106 + 1,
	BL3_20 = 102 + 1,
	BL3_21 = 93 + 1,
	BL3_22 = 114 + 1,
	BL3_23 = 104 + 1,
	BL3_24 = 100 + 1,
	BL3_25 = 91 + 1,

	BL4 = 154,
		BL4_0a = 155 ,
		BL4_1a = 219	,
		BL4_2a = 214	,
		BL4_3a = 202	,
		BL4_7a = 204	,
		BL4_8a = 194	,
		BL4_9a = 177	,
		BL4_10a = 163,
		BL4_11a = 212,
		BL4_12a = 200,
		BL4_13a = 187,
		BL4_15a = 210,
		BL4_16a = 198,
		BL4_17a = 192,
		BL4_18a = 185,
		BL4_19a = 174,
		BL4_20a = 170,
		BL4_21a = 161,
		BL4_22a = 182,
		BL4_23a = 172,
		BL4_24a = 168,
		BL4_25a = 159,
	BL4_0 = 155 + 1,
	BL4_1 = 219 + 1,
	BL4_2 = 214 + 1,
	BL4_3 = 202 + 1,
	BL4_7 = 204 + 1,
	BL4_8 = 194 + 1,
	BL4_9 = 177 + 1,
	BL4_10 = 163 + 1,
	BL4_11 = 212 + 1,
	BL4_12 = 200 + 1,
	BL4_13 = 187 + 1,
	BL4_15 = 210 + 1,
	BL4_16 = 198 + 1,
	BL4_17 = 192 + 1,
	BL4_18 = 185 + 1,
	BL4_19 = 174 + 1,
	BL4_20 = 170 + 1,
	BL4_21 = 161 + 1,
	BL4_22 = 182 + 1,
	BL4_23 = 172 + 1,
	BL4_24 = 168 + 1,
	BL4_25 = 159 + 1,

	BL5 = 18,
		BL5_0a = 19 ,
		BL5_1a = 83 ,
		BL5_2a = 78 ,
		BL5_3a = 66 ,
		BL5_7a = 68 ,
		BL5_8a = 58 ,
		BL5_9a = 41 ,
		BL5_10a = 27,
		BL5_11a = 76,
		BL5_12a = 64,
		BL5_13a = 51,
		BL5_15a = 74,
		BL5_16a = 62,
		BL5_17a = 56,
		BL5_18a = 49,
		BL5_19a = 38,
		BL5_20a = 34,
		BL5_21a = 25,
		BL5_22a = 46,
		BL5_23a = 36,
		BL5_24a = 32,
		BL5_25a = 23,
	BL5_0 = 19 + 1,
	BL5_1 = 83 + 1,
	BL5_2 = 78 + 1,
	BL5_3 = 66 + 1,
	BL5_7 = 68 + 1,
	BL5_8 = 58 + 1,
	BL5_9 = 41 + 1,
	BL5_10 = 27 + 1,
	BL5_11 = 76 + 1,
	BL5_12 = 64 + 1,
	BL5_13 = 51 + 1,
	BL5_15 = 74 + 1,
	BL5_16 = 62 + 1,
	BL5_17 = 56 + 1,
	BL5_18 = 49 + 1,
	BL5_19 = 38 + 1,
	BL5_20 = 34 + 1,
	BL5_21 = 25 + 1,
	BL5_22 = 46 + 1,
	BL5_23 = 36 + 1,
	BL5_24 = 32 + 1,
	BL5_25 = 23 + 1,

	INVALID = 999999
};

SanteiOrder GetSanteiOrder(System::String^ name) {
	if (name == L"Panel_Image") return SanteiOrder::Image;
	if (name == L"Unknow_RTV") return SanteiOrder::RotVer;
	if (name == L"Unknow_RTH") return SanteiOrder::RotHoz;
	if (name == L"BTRTL") return SanteiOrder::RotLeft;
	if (name == L"BTRTR") return SanteiOrder::RotRight;
	if (name == L"Panel_Batch") return SanteiOrder::Batch;
	if (name == L"Panel_ID") return SanteiOrder::ID;

	if (name == L"BT_Submit") return SanteiOrder::Submit;
	if (name == L"BT_Sb_Lg") return SanteiOrder::Sb_Lg;
	if (name == L"BT_Pause") return SanteiOrder::Pause;

	if (name == L"Unknown_BL1") return SanteiOrder::BL1;
	if (name == L"BT_BL1_0") return SanteiOrder::BL1_0a;
	if (name == L"BT_BL1_1") return SanteiOrder::BL1_1a;
	if (name == L"BT_BL1_2") return SanteiOrder::BL1_2a;
	if (name == L"BT_BL1_3") return SanteiOrder::BL1_3a;
	if (name == L"BT_BL1_7") return SanteiOrder::BL1_7a;
	if (name == L"BT_BL1_8") return SanteiOrder::BL1_8a;
	if (name == L"BT_BL1_9") return SanteiOrder::BL1_9a;
	if (name == L"BT_BL1_10") return SanteiOrder::BL1_10a;
	if (name == L"BT_BL1_11") return SanteiOrder::BL1_11a;
	if (name == L"BT_BL1_12") return SanteiOrder::BL1_12a;
	if (name == L"BT_BL1_13") return SanteiOrder::BL1_13a;
	if (name == L"BT_BL1_15") return SanteiOrder::BL1_15a;
	if (name == L"BT_BL1_16") return SanteiOrder::BL1_16a;
	if (name == L"BT_BL1_17") return SanteiOrder::BL1_17a;
	if (name == L"BT_BL1_18") return SanteiOrder::BL1_18a;
	if (name == L"BT_BL1_19") return SanteiOrder::BL1_19a;
	if (name == L"BT_BL1_20") return SanteiOrder::BL1_20a;
	if (name == L"BT_BL1_21") return SanteiOrder::BL1_21a;
	if (name == L"BT_BL1_22") return SanteiOrder::BL1_22a;
	if (name == L"BT_BL1_23") return SanteiOrder::BL1_23a;
	if (name == L"BT_BL1_24") return SanteiOrder::BL1_24a;
	if (name == L"BT_BL1_25") return SanteiOrder::BL1_25a;
	if (name == L"TX_BL1_0") return SanteiOrder::BL1_0;
	if (name == L"TX_BL1_1") return SanteiOrder::BL1_1;
	if (name == L"TX_BL1_2") return SanteiOrder::BL1_2;
	if (name == L"TX_BL1_3") return SanteiOrder::BL1_3;
	if (name == L"TX_BL1_7") return SanteiOrder::BL1_7;
	if (name == L"TX_BL1_8") return SanteiOrder::BL1_8;
	if (name == L"TX_BL1_9") return SanteiOrder::BL1_9;
	if (name == L"TX_BL1_10") return SanteiOrder::BL1_10;
	if (name == L"TX_BL1_11") return SanteiOrder::BL1_11;
	if (name == L"TX_BL1_12") return SanteiOrder::BL1_12;
	if (name == L"TX_BL1_13") return SanteiOrder::BL1_13;
	if (name == L"TX_BL1_15") return SanteiOrder::BL1_15;
	if (name == L"TX_BL1_16") return SanteiOrder::BL1_16;
	if (name == L"TX_BL1_17") return SanteiOrder::BL1_17;
	if (name == L"TX_BL1_18") return SanteiOrder::BL1_18;
	if (name == L"TX_BL1_19") return SanteiOrder::BL1_19;
	if (name == L"TX_BL1_20") return SanteiOrder::BL1_20;
	if (name == L"TX_BL1_21") return SanteiOrder::BL1_21;
	if (name == L"TX_BL1_22") return SanteiOrder::BL1_22;
	if (name == L"TX_BL1_23") return SanteiOrder::BL1_23;
	if (name == L"TX_BL1_24") return SanteiOrder::BL1_24;
	if (name == L"TX_BL1_25") return SanteiOrder::BL1_25;

	if (name == L"Unknown_BL2") return SanteiOrder::BL2;
	if (name == L"BT_BL2_0") return SanteiOrder::BL2_0a;
	if (name == L"BT_BL2_1") return SanteiOrder::BL2_1a;
	if (name == L"BT_BL2_2") return SanteiOrder::BL2_2a;
	if (name == L"BT_BL2_3") return SanteiOrder::BL2_3a;
	if (name == L"BT_BL2_7") return SanteiOrder::BL2_7a;
	if (name == L"BT_BL2_8") return SanteiOrder::BL2_8a;
	if (name == L"BT_BL2_9") return SanteiOrder::BL2_9a;
	if (name == L"BT_BL2_10") return SanteiOrder::BL2_10a;
	if (name == L"BT_BL2_11") return SanteiOrder::BL2_11a;
	if (name == L"BT_BL2_12") return SanteiOrder::BL2_12a;
	if (name == L"BT_BL2_13") return SanteiOrder::BL2_13a;
	if (name == L"BT_BL2_15") return SanteiOrder::BL2_15a;
	if (name == L"BT_BL2_16") return SanteiOrder::BL2_16a;
	if (name == L"BT_BL2_17") return SanteiOrder::BL2_17a;
	if (name == L"BT_BL2_18") return SanteiOrder::BL2_18a;
	if (name == L"BT_BL2_19") return SanteiOrder::BL2_19a;
	if (name == L"BT_BL2_20") return SanteiOrder::BL2_20a;
	if (name == L"BT_BL2_21") return SanteiOrder::BL2_21a;
	if (name == L"BT_BL2_22") return SanteiOrder::BL2_22a;
	if (name == L"BT_BL2_23") return SanteiOrder::BL2_23a;
	if (name == L"BT_BL2_24") return SanteiOrder::BL2_24a;
	if (name == L"BT_BL2_25") return SanteiOrder::BL2_25a;
	if (name == L"TX_BL2_0") return SanteiOrder::BL2_0;
	if (name == L"TX_BL2_1") return SanteiOrder::BL2_1;
	if (name == L"TX_BL2_2") return SanteiOrder::BL2_2;
	if (name == L"TX_BL2_3") return SanteiOrder::BL2_3;
	if (name == L"TX_BL2_7") return SanteiOrder::BL2_7;
	if (name == L"TX_BL2_8") return SanteiOrder::BL2_8;
	if (name == L"TX_BL2_9") return SanteiOrder::BL2_9;
	if (name == L"TX_BL2_10") return SanteiOrder::BL2_10;
	if (name == L"TX_BL2_11") return SanteiOrder::BL2_11;
	if (name == L"TX_BL2_12") return SanteiOrder::BL2_12;
	if (name == L"TX_BL2_13") return SanteiOrder::BL2_13;
	if (name == L"TX_BL2_15") return SanteiOrder::BL2_15;
	if (name == L"TX_BL2_16") return SanteiOrder::BL2_16;
	if (name == L"TX_BL2_17") return SanteiOrder::BL2_17;
	if (name == L"TX_BL2_18") return SanteiOrder::BL2_18;
	if (name == L"TX_BL2_19") return SanteiOrder::BL2_19;
	if (name == L"TX_BL2_20") return SanteiOrder::BL2_20;
	if (name == L"TX_BL2_21") return SanteiOrder::BL2_21;
	if (name == L"TX_BL2_22") return SanteiOrder::BL2_22;
	if (name == L"TX_BL2_23") return SanteiOrder::BL2_23;
	if (name == L"TX_BL2_24") return SanteiOrder::BL2_24;
	if (name == L"TX_BL2_25") return SanteiOrder::BL2_25;

	if (name == L"Unknown_BL3") return SanteiOrder::BL3;
	if (name == L"BT_BL3_0") return SanteiOrder::BL3_0a;
	if (name == L"BT_BL3_1") return SanteiOrder::BL3_1a;
	if (name == L"BT_BL3_2") return SanteiOrder::BL3_2a;
	if (name == L"BT_BL3_3") return SanteiOrder::BL3_3a;
	if (name == L"BT_BL3_7") return SanteiOrder::BL3_7a;
	if (name == L"BT_BL3_8") return SanteiOrder::BL3_8a;
	if (name == L"BT_BL3_9") return SanteiOrder::BL3_9a;
	if (name == L"BT_BL3_10") return SanteiOrder::BL3_10a;
	if (name == L"BT_BL3_11") return SanteiOrder::BL3_11a;
	if (name == L"BT_BL3_12") return SanteiOrder::BL3_12a;
	if (name == L"BT_BL3_13") return SanteiOrder::BL3_13a;
	if (name == L"BT_BL3_15") return SanteiOrder::BL3_15a;
	if (name == L"BT_BL3_16") return SanteiOrder::BL3_16a;
	if (name == L"BT_BL3_17") return SanteiOrder::BL3_17a;
	if (name == L"BT_BL3_18") return SanteiOrder::BL3_18a;
	if (name == L"BT_BL3_19") return SanteiOrder::BL3_19a;
	if (name == L"BT_BL3_20") return SanteiOrder::BL3_20a;
	if (name == L"BT_BL3_21") return SanteiOrder::BL3_21a;
	if (name == L"BT_BL3_22") return SanteiOrder::BL3_22a;
	if (name == L"BT_BL3_23") return SanteiOrder::BL3_23a;
	if (name == L"BT_BL3_24") return SanteiOrder::BL3_24a;
	if (name == L"BT_BL3_25") return SanteiOrder::BL3_25a;
	if (name == L"TX_BL3_0") return SanteiOrder::BL3_0;
	if (name == L"TX_BL3_1") return SanteiOrder::BL3_1;
	if (name == L"TX_BL3_2") return SanteiOrder::BL3_2;
	if (name == L"TX_BL3_3") return SanteiOrder::BL3_3;
	if (name == L"TX_BL3_7") return SanteiOrder::BL3_7;
	if (name == L"TX_BL3_8") return SanteiOrder::BL3_8;
	if (name == L"TX_BL3_9") return SanteiOrder::BL3_9;
	if (name == L"TX_BL3_10") return SanteiOrder::BL3_10;
	if (name == L"TX_BL3_11") return SanteiOrder::BL3_11;
	if (name == L"TX_BL3_12") return SanteiOrder::BL3_12;
	if (name == L"TX_BL3_13") return SanteiOrder::BL3_13;
	if (name == L"TX_BL3_15") return SanteiOrder::BL3_15;
	if (name == L"TX_BL3_16") return SanteiOrder::BL3_16;
	if (name == L"TX_BL3_17") return SanteiOrder::BL3_17;
	if (name == L"TX_BL3_18") return SanteiOrder::BL3_18;
	if (name == L"TX_BL3_19") return SanteiOrder::BL3_19;
	if (name == L"TX_BL3_20") return SanteiOrder::BL3_20;
	if (name == L"TX_BL3_21") return SanteiOrder::BL3_21;
	if (name == L"TX_BL3_22") return SanteiOrder::BL3_22;
	if (name == L"TX_BL3_23") return SanteiOrder::BL3_23;
	if (name == L"TX_BL3_24") return SanteiOrder::BL3_24;
	if (name == L"TX_BL3_25") return SanteiOrder::BL3_25;

	if (name == L"Unknown_BL4") return SanteiOrder::BL4;
	if (name == L"BT_BL4_0") return SanteiOrder::BL4_0a;
	if (name == L"BT_BL4_1") return SanteiOrder::BL4_1a;
	if (name == L"BT_BL4_2") return SanteiOrder::BL4_2a;
	if (name == L"BT_BL4_3") return SanteiOrder::BL4_3a;
	if (name == L"BT_BL4_7") return SanteiOrder::BL4_7a;
	if (name == L"BT_BL4_8") return SanteiOrder::BL4_8a;
	if (name == L"BT_BL4_9") return SanteiOrder::BL4_9a;
	if (name == L"BT_BL4_10") return SanteiOrder::BL4_10a;
	if (name == L"BT_BL4_11") return SanteiOrder::BL4_11a;
	if (name == L"BT_BL4_12") return SanteiOrder::BL4_12a;
	if (name == L"BT_BL4_13") return SanteiOrder::BL4_13a;
	if (name == L"BT_BL4_15") return SanteiOrder::BL4_15a;
	if (name == L"BT_BL4_16") return SanteiOrder::BL4_16a;
	if (name == L"BT_BL4_17") return SanteiOrder::BL4_17a;
	if (name == L"BT_BL4_18") return SanteiOrder::BL4_18a;
	if (name == L"BT_BL4_19") return SanteiOrder::BL4_19a;
	if (name == L"BT_BL4_20") return SanteiOrder::BL4_20a;
	if (name == L"BT_BL4_21") return SanteiOrder::BL4_21a;
	if (name == L"BT_BL4_22") return SanteiOrder::BL4_22a;
	if (name == L"BT_BL4_23") return SanteiOrder::BL4_23a;
	if (name == L"BT_BL4_24") return SanteiOrder::BL4_24a;
	if (name == L"BT_BL4_25") return SanteiOrder::BL4_25a;
	if (name == L"TX_BL4_0") return SanteiOrder::BL4_0;
	if (name == L"TX_BL4_1") return SanteiOrder::BL4_1;
	if (name == L"TX_BL4_2") return SanteiOrder::BL4_2;
	if (name == L"TX_BL4_3") return SanteiOrder::BL4_3;
	if (name == L"TX_BL4_7") return SanteiOrder::BL4_7;
	if (name == L"TX_BL4_8") return SanteiOrder::BL4_8;
	if (name == L"TX_BL4_9") return SanteiOrder::BL4_9;
	if (name == L"TX_BL4_10") return SanteiOrder::BL4_10;
	if (name == L"TX_BL4_11") return SanteiOrder::BL4_11;
	if (name == L"TX_BL4_12") return SanteiOrder::BL4_12;
	if (name == L"TX_BL4_13") return SanteiOrder::BL4_13;
	if (name == L"TX_BL4_15") return SanteiOrder::BL4_15;
	if (name == L"TX_BL4_16") return SanteiOrder::BL4_16;
	if (name == L"TX_BL4_17") return SanteiOrder::BL4_17;
	if (name == L"TX_BL4_18") return SanteiOrder::BL4_18;
	if (name == L"TX_BL4_19") return SanteiOrder::BL4_19;
	if (name == L"TX_BL4_20") return SanteiOrder::BL4_20;
	if (name == L"TX_BL4_21") return SanteiOrder::BL4_21;
	if (name == L"TX_BL4_22") return SanteiOrder::BL4_22;
	if (name == L"TX_BL4_23") return SanteiOrder::BL4_23;
	if (name == L"TX_BL4_24") return SanteiOrder::BL4_24;
	if (name == L"TX_BL4_25") return SanteiOrder::BL4_25;

	if (name == L"Unknown_BL5") return SanteiOrder::BL5;
	if (name == L"BT_BL5_0") return SanteiOrder::BL5_0a;
	if (name == L"BT_BL5_1") return SanteiOrder::BL5_1a;
	if (name == L"BT_BL5_2") return SanteiOrder::BL5_2a;
	if (name == L"BT_BL5_3") return SanteiOrder::BL5_3a;
	if (name == L"BT_BL5_7") return SanteiOrder::BL5_7a;
	if (name == L"BT_BL5_8") return SanteiOrder::BL5_8a;
	if (name == L"BT_BL5_9") return SanteiOrder::BL5_9a;
	if (name == L"BT_BL5_10") return SanteiOrder::BL5_10a;
	if (name == L"BT_BL5_11") return SanteiOrder::BL5_11a;
	if (name == L"BT_BL5_12") return SanteiOrder::BL5_12a;
	if (name == L"BT_BL5_13") return SanteiOrder::BL5_13a;
	if (name == L"BT_BL5_15") return SanteiOrder::BL5_15a;
	if (name == L"BT_BL5_16") return SanteiOrder::BL5_16a;
	if (name == L"BT_BL5_17") return SanteiOrder::BL5_17a;
	if (name == L"BT_BL5_18") return SanteiOrder::BL5_18a;
	if (name == L"BT_BL5_19") return SanteiOrder::BL5_19a;
	if (name == L"BT_BL5_20") return SanteiOrder::BL5_20a;
	if (name == L"BT_BL5_21") return SanteiOrder::BL5_21a;
	if (name == L"BT_BL5_22") return SanteiOrder::BL5_22a;
	if (name == L"BT_BL5_23") return SanteiOrder::BL5_23a;
	if (name == L"BT_BL5_24") return SanteiOrder::BL5_24a;
	if (name == L"BT_BL5_25") return SanteiOrder::BL5_25a;
	if (name == L"TX_BL5_0") return SanteiOrder::BL5_0;
	if (name == L"TX_BL5_1") return SanteiOrder::BL5_1;
	if (name == L"TX_BL5_2") return SanteiOrder::BL5_2;
	if (name == L"TX_BL5_3") return SanteiOrder::BL5_3;
	if (name == L"TX_BL5_7") return SanteiOrder::BL5_7;
	if (name == L"TX_BL5_8") return SanteiOrder::BL5_8;
	if (name == L"TX_BL5_9") return SanteiOrder::BL5_9;
	if (name == L"TX_BL5_10") return SanteiOrder::BL5_10;
	if (name == L"TX_BL5_11") return SanteiOrder::BL5_11;
	if (name == L"TX_BL5_12") return SanteiOrder::BL5_12;
	if (name == L"TX_BL5_13") return SanteiOrder::BL5_13;
	if (name == L"TX_BL5_15") return SanteiOrder::BL5_15;
	if (name == L"TX_BL5_16") return SanteiOrder::BL5_16;
	if (name == L"TX_BL5_17") return SanteiOrder::BL5_17;
	if (name == L"TX_BL5_18") return SanteiOrder::BL5_18;
	if (name == L"TX_BL5_19") return SanteiOrder::BL5_19;
	if (name == L"TX_BL5_20") return SanteiOrder::BL5_20;
	if (name == L"TX_BL5_21") return SanteiOrder::BL5_21;
	if (name == L"TX_BL5_22") return SanteiOrder::BL5_22;
	if (name == L"TX_BL5_23") return SanteiOrder::BL5_23;
	if (name == L"TX_BL5_24") return SanteiOrder::BL5_24;
	if (name == L"TX_BL5_25") return SanteiOrder::BL5_25;
	return SanteiOrder::INVALID;
}

System::String^ GetSanteiName(unsigned int order) {
	System::String^ name;
	switch (order) {
	case 4:	name = L"Panel_Image"; break;
	case 6: name = L"Unknow_RTV"; break;
	case 8: name = L"Unknow_RTH"; break;
	case 10: name = L"BTRTL"; break;
	case 9: name = L"BTRTR"; break;
	case 372: name = L"Panel_Batch"; break;
	case 370: name = L"Panel_ID"; break;

	case 361:name = L"BT_Submit"; break;
	case 360:name = L"BT_Sb_Lg"; break;
	case 359:name = L"BT_Pause"; break;

	case 290:name = L"Unknown_BL1"; break;
	case 291:name = L"BT_BL1_0"; break;
	case 355:name = L"BT_BL1_1"; break;
	case 350:name = L"BT_BL1_2"; break;
	case 338:name = L"BT_BL1_3"; break;
	case 340:name = L"BT_BL1_7"; break;
	case 330:name = L"BT_BL1_8"; break;
	case 313:name = L"BT_BL1_9"; break;
	case 299:name = L"BT_BL1_10"; break;
	case 348:name = L"BT_BL1_11"; break;
	case 336:name = L"BT_BL1_12"; break;
	case 323:name = L"BT_BL1_13"; break;
	case 346:name = L"BT_BL1_15"; break;
	case 334:name = L"BT_BL1_16"; break;
	case 328:name = L"BT_BL1_17"; break;
	case 321:name = L"BT_BL1_18"; break;
	case 310:name = L"BT_BL1_19"; break;
	case 306:name = L"BT_BL1_20"; break;
	case 297:name = L"BT_BL1_21"; break;
	case 318:name = L"BT_BL1_22"; break;
	case 308:name = L"BT_BL1_23"; break;
	case 304:name = L"BT_BL1_24"; break;
	case 295:name = L"BT_BL1_25"; break;
	case 291 + 1:name = L"TX_BL1_0"; break;
	case 355 + 1:name = L"TX_BL1_1"; break;
	case 350 + 1:name = L"TX_BL1_2"; break;
	case 338 + 1:name = L"TX_BL1_3"; break;
	case 340 + 1:name = L"TX_BL1_7"; break;
	case 330 + 1:name = L"TX_BL1_8"; break;
	case 313 + 1:name = L"TX_BL1_9"; break;
	case 299 + 1:name = L"TX_BL1_10"; break;
	case 348 + 1:name = L"TX_BL1_11"; break;
	case 336 + 1:name = L"TX_BL1_12"; break;
	case 323 + 1:name = L"TX_BL1_13"; break;
	case 346 + 1:name = L"TX_BL1_15"; break;
	case 334 + 1:name = L"TX_BL1_16"; break;
	case 328 + 1:name = L"TX_BL1_17"; break;
	case 321 + 1:name = L"TX_BL1_18"; break;
	case 310 + 1:name = L"TX_BL1_19"; break;
	case 306 + 1:name = L"TX_BL1_20"; break;
	case 297 + 1:name = L"TX_BL1_21"; break;
	case 318 + 1:name = L"TX_BL1_22"; break;
	case 308 + 1:name = L"TX_BL1_23"; break;
	case 304 + 1:name = L"TX_BL1_24"; break;
	case 295 + 1:name = L"TX_BL1_25"; break;

	case 222:name = L"Unknown_BL2"; break;
	case 223:name = L"BT_BL2_0"; break;
	case 287:name = L"BT_BL2_1"; break;
	case 282:name = L"BT_BL2_2"; break;
	case 270:name = L"BT_BL2_3"; break;
	case 272:name = L"BT_BL2_7"; break;
	case 262:name = L"BT_BL2_8"; break;
	case 245:name = L"BT_BL2_9"; break;
	case 231:name = L"BT_BL2_10"; break;
	case 280:name = L"BT_BL2_11"; break;
	case 268:name = L"BT_BL2_12"; break;
	case 255:name = L"BT_BL2_13"; break;
	case 278:name = L"BT_BL2_15"; break;
	case 266:name = L"BT_BL2_16"; break;
	case 260:name = L"BT_BL2_17"; break;
	case 253:name = L"BT_BL2_18"; break;
	case 242:name = L"BT_BL2_19"; break;
	case 238:name = L"BT_BL2_20"; break;
	case 229:name = L"BT_BL2_21"; break;
	case 250:name = L"BT_BL2_22"; break;
	case 240:name = L"BT_BL2_23"; break;
	case 236:name = L"BT_BL2_24"; break;
	case 227:name = L"BT_BL2_25"; break;
	case 223 + 1:name = L"TX_BL2_0"; break;
	case 287 + 1:name = L"TX_BL2_1"; break;
	case 282 + 1:name = L"TX_BL2_2"; break;
	case 270 + 1:name = L"TX_BL2_3"; break;
	case 272 + 1:name = L"TX_BL2_7"; break;
	case 262 + 1:name = L"TX_BL2_8"; break;
	case 245 + 1:name = L"TX_BL2_9"; break;
	case 231 + 1:name = L"TX_BL2_10"; break;
	case 280 + 1:name = L"TX_BL2_11"; break;
	case 268 + 1:name = L"TX_BL2_12"; break;
	case 255 + 1:name = L"TX_BL2_13"; break;
	case 278 + 1:name = L"TX_BL2_15"; break;
	case 266 + 1:name = L"TX_BL2_16"; break;
	case 260 + 1:name = L"TX_BL2_17"; break;
	case 253 + 1:name = L"TX_BL2_18"; break;
	case 242 + 1:name = L"TX_BL2_19"; break;
	case 238 + 1:name = L"TX_BL2_20"; break;
	case 229 + 1:name = L"TX_BL2_21"; break;
	case 250 + 1:name = L"TX_BL2_22"; break;
	case 240 + 1:name = L"TX_BL2_23"; break;
	case 236 + 1:name = L"TX_BL2_24"; break;
	case 227 + 1:name = L"TX_BL2_25"; break;

	case 86:name = L"Unknown_BL3"; break;
	case 87 :name = L"BT_BL3_0"; break;
	case 151:name = L"BT_BL3_1"; break;
	case 146:name = L"BT_BL3_2"; break;
	case 134:name = L"BT_BL3_3"; break;
	case 136:name = L"BT_BL3_7"; break;
	case 126:name = L"BT_BL3_8"; break;
	case 109:name = L"BT_BL3_9"; break;
	case 95 :name = L"BT_BL3_10"; break;
	case 144:name = L"BT_BL3_11"; break;
	case 132:name = L"BT_BL3_12"; break;
	case 119:name = L"BT_BL3_13"; break;
	case 142:name = L"BT_BL3_15"; break;
	case 130:name = L"BT_BL3_16"; break;
	case 124:name = L"BT_BL3_17"; break;
	case 117:name = L"BT_BL3_18"; break;
	case 106:name = L"BT_BL3_19"; break;
	case 102:name = L"BT_BL3_20"; break;
	case 93 :name = L"BT_BL3_21"; break;
	case 114:name = L"BT_BL3_22"; break;
	case 104:name = L"BT_BL3_23"; break;
	case 100:name = L"BT_BL3_24"; break;
	case 91 :name = L"BT_BL3_25"; break;
	case 87  + 1:name = L"TX_BL3_0"; break;
	case 151 + 1:name = L"TX_BL3_1"; break;
	case 146 + 1:name = L"TX_BL3_2"; break;
	case 134 + 1:name = L"TX_BL3_3"; break;
	case 136 + 1:name = L"TX_BL3_7"; break;
	case 126 + 1:name = L"TX_BL3_8"; break;
	case 109 + 1:name = L"TX_BL3_9"; break;
	case 95 + 1:name = L"TX_BL3_10"; break;
	case 144 + 1:name = L"TX_BL3_11"; break;
	case 132 + 1:name = L"TX_BL3_12"; break;
	case 119 + 1:name = L"TX_BL3_13"; break;
	case 142 + 1:name = L"TX_BL3_15"; break;
	case 130 + 1:name = L"TX_BL3_16"; break;
	case 124 + 1:name = L"TX_BL3_17"; break;
	case 117 + 1:name = L"TX_BL3_18"; break;
	case 106 + 1:name = L"TX_BL3_19"; break;
	case 102 + 1:name = L"TX_BL3_20"; break;
	case 93 + 1:name = L"TX_BL3_21"; break;
	case 114 + 1:name = L"TX_BL3_22"; break;
	case 104 + 1:name = L"TX_BL3_23"; break;
	case 100 + 1:name = L"TX_BL3_24"; break;
	case 91 + 1:name = L"TX_BL3_25"; break;

	case 154:name = L"Unknown_BL4"; break;
	case 155:name = L"BT_BL4_0"; break;
	case 219:name = L"BT_BL4_1"; break;
	case 214:name = L"BT_BL4_2"; break;
	case 202:name = L"BT_BL4_3"; break;
	case 204:name = L"BT_BL4_7"; break;
	case 194:name = L"BT_BL4_8"; break;
	case 177:name = L"BT_BL4_9"; break;
	case 163:name = L"BT_BL4_10"; break;
	case 212:name = L"BT_BL4_11"; break;
	case 200:name = L"BT_BL4_12"; break;
	case 187:name = L"BT_BL4_13"; break;
	case 210:name = L"BT_BL4_15"; break;
	case 198:name = L"BT_BL4_16"; break;
	case 192:name = L"BT_BL4_17"; break;
	case 185:name = L"BT_BL4_18"; break;
	case 174:name = L"BT_BL4_19"; break;
	case 170:name = L"BT_BL4_20"; break;
	case 161:name = L"BT_BL4_21"; break;
	case 182:name = L"BT_BL4_22"; break;
	case 172:name = L"BT_BL4_23"; break;
	case 168:name = L"BT_BL4_24"; break;
	case 159:name = L"BT_BL4_25"; break;
	case 155 + 1:name = L"TX_BL4_0"; break;
	case 219 + 1:name = L"TX_BL4_1"; break;
	case 214 + 1:name = L"TX_BL4_2"; break;
	case 202 + 1:name = L"TX_BL4_3"; break;
	case 204 + 1:name = L"TX_BL4_7"; break;
	case 194 + 1:name = L"TX_BL4_8"; break;
	case 177 + 1:name = L"TX_BL4_9"; break;
	case 163 + 1:name = L"TX_BL4_10"; break;
	case 212 + 1:name = L"TX_BL4_11"; break;
	case 200 + 1:name = L"TX_BL4_12"; break;
	case 187 + 1:name = L"TX_BL4_13"; break;
	case 210 + 1:name = L"TX_BL4_15"; break;
	case 198 + 1:name = L"TX_BL4_16"; break;
	case 192 + 1:name = L"TX_BL4_17"; break;
	case 185 + 1:name = L"TX_BL4_18"; break;
	case 174 + 1:name = L"TX_BL4_19"; break;
	case 170 + 1:name = L"TX_BL4_20"; break;
	case 161 + 1:name = L"TX_BL4_21"; break;
	case 182 + 1:name = L"TX_BL4_22"; break;
	case 172 + 1:name = L"TX_BL4_23"; break;
	case 168 + 1:name = L"TX_BL4_24"; break;
	case 159 + 1:name = L"TX_BL4_25"; break;

	case 18:name = L"Unknown_BL5"; break;
	case 19:name = L"BT_BL5_0"; break;
	case 83:name = L"BT_BL5_1"; break;
	case 78:name = L"BT_BL5_2"; break;
	case 66:name = L"BT_BL5_3"; break;
	case 68:name = L"BT_BL5_7"; break;
	case 58:name = L"BT_BL5_8"; break;
	case 41:name = L"BT_BL5_9"; break;
	case 27:name = L"BT_BL5_10"; break;
	case 76:name = L"BT_BL5_11"; break;
	case 64:name = L"BT_BL5_12"; break;
	case 51:name = L"BT_BL5_13"; break;
	case 74:name = L"BT_BL5_15"; break;
	case 62:name = L"BT_BL5_16"; break;
	case 56:name = L"BT_BL5_17"; break;
	case 49:name = L"BT_BL5_18"; break;
	case 38:name = L"BT_BL5_19"; break;
	case 34:name = L"BT_BL5_20"; break;
	case 25:name = L"BT_BL5_21"; break;
	case 46:name = L"BT_BL5_22"; break;
	case 36:name = L"BT_BL5_23"; break;
	case 32:name = L"BT_BL5_24"; break;
	case 23:name = L"BT_BL5_25"; break;
	case 19 + 1:name = L"TX_BL5_0"; break;
	case 83 + 1:name = L"TX_BL5_1"; break;
	case 78 + 1:name = L"TX_BL5_2"; break;
	case 66 + 1:name = L"TX_BL5_3"; break;
	case 68 + 1:name = L"TX_BL5_7"; break;
	case 58 + 1:name = L"TX_BL5_8"; break;
	case 41 + 1:name = L"TX_BL5_9"; break;
	case 27 + 1:name = L"TX_BL5_10"; break;
	case 76 + 1:name = L"TX_BL5_11"; break;
	case 64 + 1:name = L"TX_BL5_12"; break;
	case 51 + 1:name = L"TX_BL5_13"; break;
	case 74 + 1:name = L"TX_BL5_15"; break;
	case 62 + 1:name = L"TX_BL5_16"; break;
	case 56 + 1:name = L"TX_BL5_17"; break;
	case 49 + 1:name = L"TX_BL5_18"; break;
	case 38 + 1:name = L"TX_BL5_19"; break;
	case 34 + 1:name = L"TX_BL5_20"; break;
	case 25 + 1:name = L"TX_BL5_21"; break;
	case 46 + 1:name = L"TX_BL5_22"; break;
	case 36 + 1:name = L"TX_BL5_23"; break;
	case 32 + 1:name = L"TX_BL5_24"; break;
	case 23 + 1:name = L"TX_BL5_25"; break;
	case 999999: name = L"INVALID"; break;
	default: name = L"INVALID"; break;
	}

	return name;
}

SanteiOrder IntToSanteiOrder(unsigned int i) {
	switch (i) {
	case 4:	return SanteiOrder::Image; break;
	case 6: return SanteiOrder::RotVer; break;
	case 8: return SanteiOrder::RotHoz; break;
	case 10: return SanteiOrder::RotLeft; break;
	case 9: return SanteiOrder::RotRight; break;
	case 372: return SanteiOrder::Batch; break;
	case 370: return SanteiOrder::ID; break;

	case 361:return SanteiOrder::Submit; break;
	case 360:return SanteiOrder::Sb_Lg;
	case 359:return SanteiOrder::Pause;

	case 290:return SanteiOrder::BL1; break;
	case 291:return SanteiOrder::BL1_0a; break;
	case 355:return SanteiOrder::BL1_1a; break;
	case 350:return SanteiOrder::BL1_2a; break;
	case 338:return SanteiOrder::BL1_3a; break;
	case 340:return SanteiOrder::BL1_7a; break;
	case 330:return SanteiOrder::BL1_8a; break;
	case 313:return SanteiOrder::BL1_9a; break;
	case 299: return SanteiOrder::BL1_10a; break;
	case 348: return SanteiOrder::BL1_11a; break;
	case 336: return SanteiOrder::BL1_12a; break;
	case 323: return SanteiOrder::BL1_13a; break;
	case 346: return SanteiOrder::BL1_15a; break;
	case 334: return SanteiOrder::BL1_16a; break;
	case 328: return SanteiOrder::BL1_17a; break;
	case 321: return SanteiOrder::BL1_18a; break;
	case 310: return SanteiOrder::BL1_19a; break;
	case 306: return SanteiOrder::BL1_20a; break;
	case 297: return SanteiOrder::BL1_21a; break;
	case 318: return SanteiOrder::BL1_22a; break;
	case 308: return SanteiOrder::BL1_23a; break;
	case 304: return SanteiOrder::BL1_24a; break;
	case 295: return SanteiOrder::BL1_25a; break;
	case 291 + 1:return SanteiOrder::BL1_0; break;
	case 355 + 1:return SanteiOrder::BL1_1; break;
	case 350 + 1:return SanteiOrder::BL1_2; break;
	case 338 + 1:return SanteiOrder::BL1_3; break;
	case 340 + 1:return SanteiOrder::BL1_7; break;
	case 330 + 1:return SanteiOrder::BL1_8; break;
	case 313 + 1:return SanteiOrder::BL1_9; break;
	case 299 + 1: return SanteiOrder::BL1_10; break;
	case 348 + 1: return SanteiOrder::BL1_11; break;
	case 336 + 1: return SanteiOrder::BL1_12; break;
	case 323 + 1: return SanteiOrder::BL1_13; break;
	case 346 + 1: return SanteiOrder::BL1_15; break;
	case 334 + 1: return SanteiOrder::BL1_16; break;
	case 328 + 1: return SanteiOrder::BL1_17; break;
	case 321 + 1: return SanteiOrder::BL1_18; break;
	case 310 + 1: return SanteiOrder::BL1_19; break;
	case 306 + 1: return SanteiOrder::BL1_20; break;
	case 297 + 1: return SanteiOrder::BL1_21; break;
	case 318 + 1: return SanteiOrder::BL1_22; break;
	case 308 + 1: return SanteiOrder::BL1_23; break;
	case 304 + 1: return SanteiOrder::BL1_24; break;
	case 295 + 1: return SanteiOrder::BL1_25; break;

	case 222:return SanteiOrder::BL2; break;
	case 223:return SanteiOrder::BL2_0a;		 break;
	case 287:return SanteiOrder::BL2_1a;		 break;
	case 282:return SanteiOrder::BL2_2a;		 break;
	case 270:return SanteiOrder::BL2_3a;		 break;
	case 272:return SanteiOrder::BL2_7a;		 break;
	case 262:return SanteiOrder::BL2_8a;		 break;
	case 245:return SanteiOrder::BL2_9a;		 break;
	case 231: return SanteiOrder::BL2_10a;	 break;
	case 280: return SanteiOrder::BL2_11a;	 break;
	case 268: return SanteiOrder::BL2_12a;	 break;
	case 255: return SanteiOrder::BL2_13a;	 break;
	case 278: return SanteiOrder::BL2_15a;	 break;
	case 266: return SanteiOrder::BL2_16a;	 break;
	case 260: return SanteiOrder::BL2_17a;	 break;
	case 253: return SanteiOrder::BL2_18a;	 break;
	case 242: return SanteiOrder::BL2_19a;	 break;
	case 238: return SanteiOrder::BL2_20a;	 break;
	case 229: return SanteiOrder::BL2_21a;	 break;
	case 250: return SanteiOrder::BL2_22a;	 break;
	case 240: return SanteiOrder::BL2_23a;	 break;
	case 236: return SanteiOrder::BL2_24a;	 break;
	case 227: return SanteiOrder::BL2_25a;	 break;
	case 223 + 1:return SanteiOrder::BL2_0;		 break;
	case 287 + 1:return SanteiOrder::BL2_1;		 break;
	case 282 + 1:return SanteiOrder::BL2_2;		 break;
	case 270 + 1:return SanteiOrder::BL2_3;		 break;
	case 272 + 1:return SanteiOrder::BL2_7;		 break;
	case 262 + 1:return SanteiOrder::BL2_8;		 break;
	case 245 + 1:return SanteiOrder::BL2_9;		 break;
	case 231 + 1: return SanteiOrder::BL2_10;	 break;
	case 280 + 1: return SanteiOrder::BL2_11;	 break;
	case 268 + 1: return SanteiOrder::BL2_12;	 break;
	case 255 + 1: return SanteiOrder::BL2_13;	 break;
	case 278 + 1: return SanteiOrder::BL2_15;	 break;
	case 266 + 1: return SanteiOrder::BL2_16;	 break;
	case 260 + 1: return SanteiOrder::BL2_17;	 break;
	case 253 + 1: return SanteiOrder::BL2_18;	 break;
	case 242 + 1: return SanteiOrder::BL2_19;	 break;
	case 238 + 1: return SanteiOrder::BL2_20;	 break;
	case 229 + 1: return SanteiOrder::BL2_21;	 break;
	case 250 + 1: return SanteiOrder::BL2_22;	 break;
	case 240 + 1: return SanteiOrder::BL2_23;	 break;
	case 236 + 1: return SanteiOrder::BL2_24;	 break;
	case 227 + 1: return SanteiOrder::BL2_25;	 break;

	case 86: return SanteiOrder::BL3;		 break;
	case 87 :return SanteiOrder::BL3_0a;		 break;
	case 151:return SanteiOrder::BL3_1a;		 break;
	case 146:return SanteiOrder::BL3_2a;		 break;
	case 134:return SanteiOrder::BL3_3a;		 break;
	case 136:return SanteiOrder::BL3_7a;		 break;
	case 126:return SanteiOrder::BL3_8a;		 break;
	case 109:return SanteiOrder::BL3_9a;		 break;
	case 95 : return SanteiOrder::BL3_10a;	 break;
	case 144: return SanteiOrder::BL3_11a;	 break;
	case 132: return SanteiOrder::BL3_12a;	 break;
	case 119: return SanteiOrder::BL3_13a;	 break;
	case 142: return SanteiOrder::BL3_15a;	 break;
	case 130: return SanteiOrder::BL3_16a;	 break;
	case 124: return SanteiOrder::BL3_17a;	 break;
	case 117: return SanteiOrder::BL3_18a;	 break;
	case 106: return SanteiOrder::BL3_19a;	 break;
	case 102: return SanteiOrder::BL3_20a;	 break;
	case 93 : return SanteiOrder::BL3_21a;	 break;
	case 114: return SanteiOrder::BL3_22a;	 break;
	case 104: return SanteiOrder::BL3_23a;	 break;
	case 100: return SanteiOrder::BL3_24a;	 break;
	case 91 : return SanteiOrder::BL3_25a;	 break;

	case 154:return SanteiOrder::BL4;		 break;
	case 155:return SanteiOrder::BL4_0a;		 break;
	case 219:return SanteiOrder::BL4_1a;		 break;
	case 214:return SanteiOrder::BL4_2a;		 break;
	case 202:return SanteiOrder::BL4_3a;		 break;
	case 204:return SanteiOrder::BL4_7a;		 break;
	case 194:return SanteiOrder::BL4_8a;		 break;
	case 177:return SanteiOrder::BL4_9a;		 break;
	case 163: return SanteiOrder::BL4_10a;	 break;
	case 212: return SanteiOrder::BL4_11a;	 break;
	case 200: return SanteiOrder::BL4_12a;	 break;
	case 187: return SanteiOrder::BL4_13a;	 break;
	case 210: return SanteiOrder::BL4_15a;	 break;
	case 198: return SanteiOrder::BL4_16a;	 break;
	case 192: return SanteiOrder::BL4_17a;	 break;
	case 185: return SanteiOrder::BL4_18a;	 break;
	case 174: return SanteiOrder::BL4_19a;	 break;
	case 170: return SanteiOrder::BL4_20a;	 break;
	case 161: return SanteiOrder::BL4_21a;	 break;
	case 182: return SanteiOrder::BL4_22a;	 break;
	case 172: return SanteiOrder::BL4_23a;	 break;
	case 168: return SanteiOrder::BL4_24a;	 break;
	case 159: return SanteiOrder::BL4_25a;	 break;
		
	case 18: return SanteiOrder::BL5;		 break;
	case 19:return SanteiOrder::BL5_0a;		 break;
	case 83:return SanteiOrder::BL5_1a;		 break;
	case 78:return SanteiOrder::BL5_2a;		 break;
	case 66:return SanteiOrder::BL5_3a;		 break;
	case 68:return SanteiOrder::BL5_7a;		 break;
	case 58:return SanteiOrder::BL5_8a;		 break;
	case 41:return SanteiOrder::BL5_9a;		 break;
	case 27:return SanteiOrder::BL5_10a;		 break;
	case 76:return SanteiOrder::BL5_11a;		 break;
	case 64:return SanteiOrder::BL5_12a;		 break;
	case 51:return SanteiOrder::BL5_13a;		 break;
	case 74:return SanteiOrder::BL5_15a;		 break;
	case 62:return SanteiOrder::BL5_16a;		 break;
	case 56:return SanteiOrder::BL5_17a;		 break;
	case 49:return SanteiOrder::BL5_18a;		 break;
	case 38:return SanteiOrder::BL5_19a;		 break;
	case 34:return SanteiOrder::BL5_20a;		 break;
	case 25:return SanteiOrder::BL5_21a;		 break;
	case 46:return SanteiOrder::BL5_22a;		 break;
	case 36:return SanteiOrder::BL5_23a;		 break;
	case 32:return SanteiOrder::BL5_24a;		 break;
	case 23:return SanteiOrder::BL5_25a;		 break;
	case 19 + 1:return SanteiOrder::BL5_0;		 break;
	case 83 + 1:return SanteiOrder::BL5_1;		 break;
	case 78 + 1:return SanteiOrder::BL5_2;		 break;
	case 66 + 1:return SanteiOrder::BL5_3;		 break;
	case 68 + 1:return SanteiOrder::BL5_7;		 break;
	case 58 + 1:return SanteiOrder::BL5_8;		 break;
	case 41 + 1:return SanteiOrder::BL5_9;		 break;
	case 27 + 1:return SanteiOrder::BL5_10;		 break;
	case 76 + 1:return SanteiOrder::BL5_11;		 break;
	case 64 + 1:return SanteiOrder::BL5_12;		 break;
	case 51 + 1:return SanteiOrder::BL5_13;		 break;
	case 74 + 1:return SanteiOrder::BL5_15;		 break;
	case 62 + 1:return SanteiOrder::BL5_16;		 break;
	case 56 + 1:return SanteiOrder::BL5_17;		 break;
	case 49 + 1:return SanteiOrder::BL5_18;		 break;
	case 38 + 1:return SanteiOrder::BL5_19;		 break;
	case 34 + 1:return SanteiOrder::BL5_20;		 break;
	case 25 + 1:return SanteiOrder::BL5_21;		 break;
	case 46 + 1:return SanteiOrder::BL5_22;		 break;
	case 36 + 1:return SanteiOrder::BL5_23;		 break;
	case 32 + 1:return SanteiOrder::BL5_24;		 break;
	case 23 + 1:return SanteiOrder::BL5_25;		 break;
	case 999999: return SanteiOrder::INVALID; break;
	default: return SanteiOrder::INVALID; break;
	}
}
#endif//SANTEIORDER_H