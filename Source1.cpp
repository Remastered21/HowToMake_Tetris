#include <iostream>
using namespace std;

// Defining index of available tetriminos
wstring tetromino[7]; 

// Defining the playing area
int nFieldWidth = 12;
int nFieldHeight = 18;
unsigned char* pField = nullptr; // means null pointer value


// Formula for representing tetriminos in 1D indexing to represent 2D.
int Rotate(int px, int py, int r) {
	switch (r % 4)
	{
	case 0: return py * 4 + px; // 0 degrees
	case 1: return 12 + py - (px * 4); // 90 degrees
	case 2: return 15 - (py * 4) - px; // 180 degrees
	case 3: return 3 - py + (px * 4); // 270 degrees
	}
	return 0;
}



int main() {
	// Create assets
	tetrominos[0].append(L"..X.");
	tetrominos[0].append(L"..X.");
	tetrominos[0].append(L"..X.");
	tetrominos[0].append(L"..X.");

	tetrominos[1].append(L"..X.");
	tetrominos[1].append(L".XX.");
	tetrominos[1].append(L".X..");
	tetrominos[1].append(L"....");

	tetrominos[2].append(L".X..");
	tetrominos[2].append(L".XX.");
	tetrominos[2].append(L"..X.");
	tetrominos[2].append(L"....");

	tetrominos[3].append(L"....");
	tetrominos[3].append(L".XX.");
	tetrominos[3].append(L".XX.");
	tetrominos[3].append(L"....");

	tetrominos[4].append(L"..X.");
	tetrominos[4].append(L".XX.");
	tetrominos[4].append(L"..X.");
	tetrominos[4].append(L"....");

	tetrominos[5].append(L"....");
	tetrominos[5].append(L".XX.");
	tetrominos[5].append(L"..X.");
	tetrominos[5].append(L"..X.");

	tetrominos[6].append(L"....");
	tetrominos[6].append(L".XX.");
	tetrominos[6].append(L".X..");
	tetrominos[6].append(L".X..");

}