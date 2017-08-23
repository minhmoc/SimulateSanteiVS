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
	case 291+1:return SanteiOrder::BL1_0; break;
	case 355+1:return SanteiOrder::BL1_1; break;
	case 350+1:return SanteiOrder::BL1_2; break;
	case 338+1:return SanteiOrder::BL1_3; break;
	case 340+1:return SanteiOrder::BL1_7; break;
	case 330+1:return SanteiOrder::BL1_8; break;
	case 313+1:return SanteiOrder::BL1_9; break;
	case 299+1: return SanteiOrder::BL1_10; break;
	case 348+1: return SanteiOrder::BL1_11; break;
	case 336+1: return SanteiOrder::BL1_12; break;
	case 323+1: return SanteiOrder::BL1_13; break;
	case 346+1: return SanteiOrder::BL1_15; break;
	case 334+1: return SanteiOrder::BL1_16; break;
	case 328+1: return SanteiOrder::BL1_17; break;
	case 321+1: return SanteiOrder::BL1_18; break;
	case 310+1: return SanteiOrder::BL1_19; break;
	case 306+1: return SanteiOrder::BL1_20; break;
	case 297+1: return SanteiOrder::BL1_21; break;
	case 318+1: return SanteiOrder::BL1_22; break;
	case 308+1: return SanteiOrder::BL1_23; break;
	case 304+1: return SanteiOrder::BL1_24; break;
	case 295+1: return SanteiOrder::BL1_25; break;

	case 221:return SanteiOrder::BL2; break;
	case 223+1:return SanteiOrder::BL2_0;		 break;
	case 287+1:return SanteiOrder::BL2_1;		 break;
	case 282+1:return SanteiOrder::BL2_2;		 break;
	case 270+1:return SanteiOrder::BL2_3;		 break;
	case 272+1:return SanteiOrder::BL2_7;		 break;
	case 262+1:return SanteiOrder::BL2_8;		 break;
	case 245+1:return SanteiOrder::BL2_9;		 break;
	case 231+1: return SanteiOrder::BL2_10;	 break;
	case 280+1: return SanteiOrder::BL2_11;	 break;
	case 268+1: return SanteiOrder::BL2_12;	 break;
	case 255+1: return SanteiOrder::BL2_13;	 break;
	case 278+1: return SanteiOrder::BL2_15;	 break;
	case 266+1: return SanteiOrder::BL2_16;	 break;
	case 260+1: return SanteiOrder::BL2_17;	 break;
	case 253+1: return SanteiOrder::BL2_18;	 break;
	case 242+1: return SanteiOrder::BL2_19;	 break;
	case 238+1: return SanteiOrder::BL2_20;	 break;
	case 229+1: return SanteiOrder::BL2_21;	 break;
	case 250+1: return SanteiOrder::BL2_22;	 break;
	case 240+1: return SanteiOrder::BL2_23;	 break;
	case 236+1: return SanteiOrder::BL2_24;	 break;
	case 227+1: return SanteiOrder::BL2_25;	 break;
											 break;
	case 86: return SanteiOrder::BL3;		 break;
	case 87+1:return SanteiOrder::BL3_0;		 break;
	case 151+1:return SanteiOrder::BL3_1;		 break;
	case 146+1:return SanteiOrder::BL3_2;		 break;
	case 134+1:return SanteiOrder::BL3_3;		 break;
	case 136+1:return SanteiOrder::BL3_7;		 break;
	case 126+1:return SanteiOrder::BL3_8;		 break;
	case 109+1:return SanteiOrder::BL3_9;		 break;
	case 95 + 1: return SanteiOrder::BL3_10;	 break;
	case 144+1: return SanteiOrder::BL3_11;	 break;
	case 132+1: return SanteiOrder::BL3_12;	 break;
	case 119+1: return SanteiOrder::BL3_13;	 break;
	case 142+1: return SanteiOrder::BL3_15;	 break;
	case 130+1: return SanteiOrder::BL3_16;	 break;
	case 124+1: return SanteiOrder::BL3_17;	 break;
	case 117+1: return SanteiOrder::BL3_18;	 break;
	case 106+1: return SanteiOrder::BL3_19;	 break;
	case 102+1: return SanteiOrder::BL3_20;	 break;
	case 93 + 1: return SanteiOrder::BL3_21;	 break;
	case 114+1: return SanteiOrder::BL3_22;	 break;
	case 104+1: return SanteiOrder::BL3_23;	 break;
	case 100+1: return SanteiOrder::BL3_24;	 break;
	case 91 + 1: return SanteiOrder::BL3_25;	 break;
											 break;
	case 154:return SanteiOrder::BL4;		 break;
	case 155+1:return SanteiOrder::BL4_0;		 break;
	case 219+1:return SanteiOrder::BL4_1;		 break;
	case 214+1:return SanteiOrder::BL4_2;		 break;
	case 202+1:return SanteiOrder::BL4_3;		 break;
	case 204+1:return SanteiOrder::BL4_7;		 break;
	case 194+1:return SanteiOrder::BL4_8;		 break;
	case 177+1:return SanteiOrder::BL4_9;		 break;
	case 163+1: return SanteiOrder::BL4_10;	 break;
	case 212+1: return SanteiOrder::BL4_11;	 break;
	case 200+1: return SanteiOrder::BL4_12;	 break;
	case 187+1: return SanteiOrder::BL4_13;	 break;
	case 210+1: return SanteiOrder::BL4_15;	 break;
	case 198+1: return SanteiOrder::BL4_16;	 break;
	case 192+1: return SanteiOrder::BL4_17;	 break;
	case 185+1: return SanteiOrder::BL4_18;	 break;
	case 174+1: return SanteiOrder::BL4_19;	 break;
	case 170+1: return SanteiOrder::BL4_20;	 break;
	case 161+1: return SanteiOrder::BL4_21;	 break;
	case 182+1: return SanteiOrder::BL4_22;	 break;
	case 172+1: return SanteiOrder::BL4_23;	 break;
	case 168+1: return SanteiOrder::BL4_24;	 break;
	case 159+1: return SanteiOrder::BL4_25;	 break;
											 break;
	case 18: return SanteiOrder::BL5;		 break;
	case 19+1:return SanteiOrder::BL5_0;		 break;
	case 83+1:return SanteiOrder::BL5_1;		 break;
	case 78+1:return SanteiOrder::BL5_2;		 break;
	case 66+1:return SanteiOrder::BL5_3;		 break;
	case 68+1:return SanteiOrder::BL5_7;		 break;
	case 58+1:return SanteiOrder::BL5_8;		 break;
	case 41+1:return SanteiOrder::BL5_9;		 break;
	case 27+1:return SanteiOrder::BL5_10;		 break;
	case 76+1:return SanteiOrder::BL5_11;		 break;
	case 64+1:return SanteiOrder::BL5_12;		 break;
	case 51+1:return SanteiOrder::BL5_13;		 break;
	case 74+1:return SanteiOrder::BL5_15;		 break;
	case 62+1:return SanteiOrder::BL5_16;		 break;
	case 56+1:return SanteiOrder::BL5_17;		 break;
	case 49+1:return SanteiOrder::BL5_18;		 break;
	case 38+1:return SanteiOrder::BL5_19;		 break;
	case 34+1:return SanteiOrder::BL5_20;		 break;
	case 25+1:return SanteiOrder::BL5_21;		 break;
	case 46+1:return SanteiOrder::BL5_22;		 break;
	case 36+1:return SanteiOrder::BL5_23;		 break;
	case 32+1:return SanteiOrder::BL5_24;		 break;
	case 23+1:return SanteiOrder::BL5_25;		 break;
	case 999999: return SanteiOrder::INVALID; break;
	default: return SanteiOrder::INVALID; break;
	}
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
	case 291+1:name = L"TX_BL1_0"; break;
	case 355+1:name = L"TX_BL1_1"; break;
	case 350+1:name = L"TX_BL1_2"; break;
	case 338+1:name = L"TX_BL1_3"; break;
	case 340+1:name = L"TX_BL1_7"; break;
	case 330+1:name = L"TX_BL1_8"; break;
	case 313+1:name = L"TX_BL1_9"; break;
	case 299+1:name = L"TX_BL1_10"; break;
	case 348+1:name = L"TX_BL1_11"; break;
	case 336+1:name = L"TX_BL1_12"; break;
	case 323+1:name = L"TX_BL1_13"; break;
	case 346+1:name = L"TX_BL1_15"; break;
	case 334+1:name = L"TX_BL1_16"; break;
	case 328+1:name = L"TX_BL1_17"; break;
	case 321+1:name = L"TX_BL1_18"; break;
	case 310+1:name = L"TX_BL1_19"; break;
	case 306+1:name = L"TX_BL1_20"; break;
	case 297+1:name = L"TX_BL1_21"; break;
	case 318+1:name = L"TX_BL1_22"; break;
	case 308+1:name = L"TX_BL1_23"; break;
	case 304+1:name = L"TX_BL1_24"; break;
	case 295+1:name = L"TX_BL1_25"; break;

	case 222:name = L"Unknown_BL2"; break;
	case 223+1:name = L"TX_BL2_0"; break;
	case 287+1:name = L"TX_BL2_1"; break;
	case 282+1:name = L"TX_BL2_2"; break;
	case 270+1:name = L"TX_BL2_3"; break;
	case 272+1:name = L"TX_BL2_7"; break;
	case 262+1:name = L"TX_BL2_8"; break;
	case 245+1:name = L"TX_BL2_9"; break;
	case 231+1:name = L"TX_BL2_10"; break;
	case 280+1:name = L"TX_BL2_11"; break;
	case 268+1:name = L"TX_BL2_12"; break;
	case 255+1:name = L"TX_BL2_13"; break;
	case 278+1:name = L"TX_BL2_15"; break;
	case 266+1:name = L"TX_BL2_16"; break;
	case 260+1:name = L"TX_BL2_17"; break;
	case 253+1:name = L"TX_BL2_18"; break;
	case 242+1:name = L"TX_BL2_19"; break;
	case 238+1:name = L"TX_BL2_20"; break;
	case 229+1:name = L"TX_BL2_21"; break;
	case 250+1:name = L"TX_BL2_22"; break;
	case 240+1:name = L"TX_BL2_23"; break;
	case 236+1:name = L"TX_BL2_24"; break;
	case 227+1:name = L"TX_BL2_25"; break;

	case 86:name = L"Unknown_BL3"; break;
	case 87 + 1:name = L"TX_BL3_0"; break;
	case 151+1:name = L"TX_BL3_1"; break;
	case 146+1:name = L"TX_BL3_2"; break;
	case 134+1:name = L"TX_BL3_3"; break;
	case 136+1:name = L"TX_BL3_7"; break;
	case 126+1:name = L"TX_BL3_8"; break;
	case 109+1:name = L"TX_BL3_9"; break;
	case 95 + 1:name = L"TX_BL3_10"; break;
	case 144+1:name = L"TX_BL3_11"; break;
	case 132+1:name = L"TX_BL3_12"; break;
	case 119+1:name = L"TX_BL3_13"; break;
	case 142+1:name = L"TX_BL3_15"; break;
	case 130+1:name = L"TX_BL3_16"; break;
	case 124+1:name = L"TX_BL3_17"; break;
	case 117+1:name = L"TX_BL3_18"; break;
	case 106+1:name = L"TX_BL3_19"; break;
	case 102+1:name = L"TX_BL3_20"; break;
	case 93 + 1:name = L"TX_BL3_21"; break;
	case 114+1:name = L"TX_BL3_22"; break;
	case 104+1:name = L"TX_BL3_23"; break;
	case 100+1:name = L"TX_BL3_24"; break;
	case 91 + 1:name = L"TX_BL3_25"; break;

	case 154+1:name = L"Unknown_BL4"; break;
	case 155+1:name = L"TX_BL4_0"; break;
	case 219+1:name = L"TX_BL4_1"; break;
	case 214+1:name = L"TX_BL4_2"; break;
	case 202+1:name = L"TX_BL4_3"; break;
	case 204+1:name = L"TX_BL4_7"; break;
	case 194+1:name = L"TX_BL4_8"; break;
	case 177+1:name = L"TX_BL4_9"; break;
	case 163+1:name = L"TX_BL4_10"; break;
	case 212+1:name = L"TX_BL4_11"; break;
	case 200+1:name = L"TX_BL4_12"; break;
	case 187+1:name = L"TX_BL4_13"; break;
	case 210+1:name = L"TX_BL4_15"; break;
	case 198+1:name = L"TX_BL4_16"; break;
	case 192+1:name = L"TX_BL4_17"; break;
	case 185+1:name = L"TX_BL4_18"; break;
	case 174+1:name = L"TX_BL4_19"; break;
	case 170+1:name = L"TX_BL4_20"; break;
	case 161+1:name = L"TX_BL4_21"; break;
	case 182+1:name = L"TX_BL4_22"; break;
	case 172+1:name = L"TX_BL4_23"; break;
	case 168+1:name = L"TX_BL4_24"; break;
	case 159+1:name = L"TX_BL4_25"; break;

	case 18+1:name = L"Unknown_BL5"; break;
	case 19+1:name = L"TX_BL5_0"; break;
	case 83+1:name = L"TX_BL5_1"; break;
	case 78+1:name = L"TX_BL5_2"; break;
	case 66+1:name = L"TX_BL5_3"; break;
	case 68+1:name = L"TX_BL5_7"; break;
	case 58+1:name = L"TX_BL5_8"; break;
	case 41+1:name = L"TX_BL5_9"; break;
	case 27+1:name = L"TX_BL5_10"; break;
	case 76+1:name = L"TX_BL5_11"; break;
	case 64+1:name = L"TX_BL5_12"; break;
	case 51+1:name = L"TX_BL5_13"; break;
	case 74+1:name = L"TX_BL5_15"; break;
	case 62+1:name = L"TX_BL5_16"; break;
	case 56+1:name = L"TX_BL5_17"; break;
	case 49+1:name = L"TX_BL5_18"; break;
	case 38+1:name = L"TX_BL5_19"; break;
	case 34+1:name = L"TX_BL5_20"; break;
	case 25+1:name = L"TX_BL5_21"; break;
	case 46+1:name = L"TX_BL5_22"; break;
	case 36+1:name = L"TX_BL5_23"; break;
	case 32+1:name = L"TX_BL5_24"; break;
	case 23+1:name = L"TX_BL5_25"; break;
	case 999999: name = L"INVALID"; break;
	default: name = L"INVALID"; break;
	}

	return name;
}
#endif//SANTEIORDER_H