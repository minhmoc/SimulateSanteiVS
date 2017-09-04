#pragma once

#define TEXTBOXES_COUNT 5*22
#define BUTTONS_COUNT 5
///
/// Function: GetTextBoxName(int Index)
///
System::String^ GetTextBoxName(int Index) {
	System::String^ name = System::String::Empty;
	switch (Index) {
	case 0: name = L"TX_BL1_0"; break;
	case 1: name = L"TX_BL1_1"; break;
	case 2: name = L"TX_BL1_2"; break;
	case 3: name = L"TX_BL1_3"; break;
	case 4: name = L"TX_BL1_7"; break;
	case 5: name = L"TX_BL1_8"; break;
	case 6: name = L"TX_BL1_9"; break;
	case 7: name = L"TX_BL1_10"; break;
	case 8: name = L"TX_BL1_11"; break;
	case 9: name = L"TX_BL1_12"; break;
	case 10: name = L"TX_BL1_13"; break;
	case 11: name = L"TX_BL1_15"; break;
	case 12: name = L"TX_BL1_16"; break;
	case 13: name = L"TX_BL1_17"; break;
	case 14: name = L"TX_BL1_18"; break;
	case 15: name = L"TX_BL1_19"; break;
	case 16: name = L"TX_BL1_20"; break;
	case 17: name = L"TX_BL1_21"; break;
	case 18: name = L"TX_BL1_22"; break;
	case 19: name = L"TX_BL1_23"; break;
	case 20: name = L"TX_BL1_24"; break;
	case 21: name = L"TX_BL1_25"; break;

	case 22: name = L"TX_BL2_0"; break;
	case 23: name = L"TX_BL2_1"; break;
	case 24: name = L"TX_BL2_2"; break;
	case 25: name = L"TX_BL2_3"; break;
	case 26: name = L"TX_BL2_7"; break;
	case 27: name = L"TX_BL2_8"; break;
	case 28: name = L"TX_BL2_9"; break;
	case 29: name = L"TX_BL2_10"; break;
	case 30: name = L"TX_BL2_11"; break;
	case 31: name = L"TX_BL2_12"; break;
	case 32: name = L"TX_BL2_13"; break;
	case 33: name = L"TX_BL2_15"; break;
	case 34: name = L"TX_BL2_16"; break;
	case 35: name = L"TX_BL2_17"; break;
	case 36: name = L"TX_BL2_18"; break;
	case 37: name = L"TX_BL2_19"; break;
	case 38: name = L"TX_BL2_20"; break;
	case 39: name = L"TX_BL2_21"; break;
	case 40: name = L"TX_BL2_22"; break;
	case 41: name = L"TX_BL2_23"; break;
	case 42: name = L"TX_BL2_24"; break;
	case 43: name = L"TX_BL2_25"; break;

	case 44: name = L"TX_BL3_0"; break;
	case 45: name = L"TX_BL3_1"; break;
	case 46: name = L"TX_BL3_2"; break;
	case 47: name = L"TX_BL3_3"; break;
	case 48: name = L"TX_BL3_7"; break;
	case 49: name = L"TX_BL3_8"; break;
	case 50: name = L"TX_BL3_9"; break;
	case 51: name = L"TX_BL3_10"; break;
	case 52: name = L"TX_BL3_11"; break;
	case 53: name = L"TX_BL3_12"; break;
	case 54: name = L"TX_BL3_13"; break;
	case 55: name = L"TX_BL3_15"; break;
	case 56: name = L"TX_BL3_16"; break;
	case 57: name = L"TX_BL3_17"; break;
	case 58: name = L"TX_BL3_18"; break;
	case 59: name = L"TX_BL3_19"; break;
	case 60: name = L"TX_BL3_20"; break;
	case 61: name = L"TX_BL3_21"; break;
	case 62: name = L"TX_BL3_22"; break;
	case 63: name = L"TX_BL3_23"; break;
	case 64: name = L"TX_BL3_24"; break;
	case 65: name = L"TX_BL3_25"; break;

	case 66: name = L"TX_BL4_0"; break;
	case 67: name = L"TX_BL4_1"; break;
	case 68: name = L"TX_BL4_2"; break;
	case 69: name = L"TX_BL4_3"; break;
	case 70: name = L"TX_BL4_7"; break;
	case 71: name = L"TX_BL4_8"; break;
	case 72: name = L"TX_BL4_9"; break;
	case 73: name = L"TX_BL4_10"; break;
	case 74: name = L"TX_BL4_11"; break;
	case 75: name = L"TX_BL4_12"; break;
	case 76: name = L"TX_BL4_13"; break;
	case 77: name = L"TX_BL4_15"; break;
	case 78: name = L"TX_BL4_16"; break;
	case 79: name = L"TX_BL4_17"; break;
	case 80: name = L"TX_BL4_18"; break;
	case 81: name = L"TX_BL4_19"; break;
	case 82: name = L"TX_BL4_20"; break;
	case 83: name = L"TX_BL4_21"; break;
	case 84: name = L"TX_BL4_22"; break;
	case 85: name = L"TX_BL4_23"; break;
	case 86: name = L"TX_BL4_24"; break;
	case 87: name = L"TX_BL4_25"; break;

	case 88: name = L"TX_BL5_0"; break;
	case 89: name = L"TX_BL5_1"; break;
	case 90: name = L"TX_BL5_2"; break;
	case 91: name = L"TX_BL5_3"; break;
	case 92: name = L"TX_BL5_7"; break;
	case 93: name = L"TX_BL5_8"; break;
	case 94: name = L"TX_BL5_9"; break;
	case 95: name = L"TX_BL5_10"; break;
	case 96: name = L"TX_BL5_11"; break;
	case 97: name = L"TX_BL5_12"; break;
	case 98: name = L"TX_BL5_13"; break;
	case 99: name = L"TX_BL5_15"; break;
	case 100: name = L"TX_BL5_16"; break;
	case 101: name = L"TX_BL5_17"; break;
	case 102: name = L"TX_BL5_18"; break;
	case 103: name = L"TX_BL5_19"; break;
	case 104: name = L"TX_BL5_20"; break;
	case 105: name = L"TX_BL5_21"; break;
	case 106: name = L"TX_BL5_22"; break;
	case 107: name = L"TX_BL5_23"; break;
	case 108: name = L"TX_BL5_24"; break;
	case 109: name = L"TX_BL5_25"; break;

	default: break;
	}
	return name;
}

///
/// Function GetTextBoxIndex()
///
int GetTextBoxIndex(System::String^name) {
	int index;
	for (int index = 0; index < TEXTBOXES_COUNT; index++) {
		if (GetTextBoxName(index) == name) {
			break;
		}
	}
	return index;
}