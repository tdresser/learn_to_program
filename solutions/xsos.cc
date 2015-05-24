#include <string>
#include <iostream>
#include <stdlib.h>

using namespace std;

const int EMPTY = 0;
const int X = 1;
const int O = 2;

int b00 = EMPTY;
int b01 = EMPTY;
int b02 = EMPTY;
int b10 = EMPTY;
int b11 = EMPTY;
int b12 = EMPTY;
int b20 = EMPTY;
int b21 = EMPTY;
int b22 = EMPTY;

bool xs_turn = true;

int main() {

  while (true) {
    if (xs_turn) {
      cout << "X's turn\n";
    }
    if (!xs_turn) {
      cout << "O's turn\n";
    }

    // Draw board;
    // Row 1
    if (b00 == EMPTY) {
      cout << "_";
    }
    if (b00 == X) {
      cout << "X";
    }
    if (b00 == O) {
      cout << "O";
    }
    if (b01 == EMPTY) {
      cout << "_";
    }
    if (b01 == X) {
      cout << "X";
    }
    if (b01 == O) {
      cout << "O";
    }
    if (b02 == EMPTY) {
      cout << "_";
    }
    if (b02 == X) {
      cout << "X";
    }
    if (b02 == O) {
      cout << "O";
    }
    cout << "\n";

    // Row 2
    if (b10 == EMPTY) {
      cout << "_";
    }
    if (b10 == X) {
      cout << "X";
    }
    if (b10 == O) {
      cout << "O";
    }
    if (b11 == EMPTY) {
      cout << "_";
    }
    if (b11 == X) {
      cout << "X";
    }
    if (b11 == O) {
      cout << "O";
    }
    if (b12 == EMPTY) {
      cout << "_";
    }
    if (b12 == X) {
      cout << "X";
    }
    if (b12 == O) {
      cout << "O";
    }
    cout << "\n";

    // Row 3
    if (b20 == EMPTY) {
      cout << "_";
    }
    if (b20 == X) {
      cout << "X";
    }
    if (b20 == O) {
      cout << "O";
    }
    if (b21 == EMPTY) {
      cout << "_";
    }
    if (b21 == X) {
      cout << "X";
    }
    if (b21 == O) {
      cout << "O";
    }
    if (b22 == EMPTY) {
      cout << "_";
    }
    if (b22 == X) {
      cout << "X";
    }
    if (b22 == O) {
      cout << "O";
    }
    cout << "\n";

    cout << "Please enter the column you would like to play in.";
    string column;
    cin >> column;
    cout << "Please enter the row you would like to play in.";
    string row;
    cin >> row;

    if (row == "0" && column == "0") {
      if (xs_turn) {
	b00 = X;
      }
      if (!xs_turn) {
	b00 = O;
      }
    }
    if (row == "0" && column == "1") {
      if (xs_turn) {
	b01 = X;
      }
      if (!xs_turn) {
	b01 = O;
      }
    }
    if (row == "0" && column == "2") {
      if (xs_turn) {
	b02 = X;
      }
      if (!xs_turn) {
	b02 = O;
      }
    }

    if (row == "1" && column == "0") {
      if (xs_turn) {
	b10 = X;
      }
      if (!xs_turn) {
	b10 = O;
      }
    }
    if (row == "1" && column == "1") {
      if (xs_turn) {
	b11 = X;
      }
      if (!xs_turn) {
	b11 = O;
      }
    }
    if (row == "1" && column == "2") {
      if (xs_turn) {
	b12 = X;
      }
      if (!xs_turn) {
	b12 = O;
      }
    }


    if (row == "2" && column == "0") {
      if (xs_turn) {
	b20 = X;
      }
      if (!xs_turn) {
	b20 = O;
      }
    }
    if (row == "2" && column == "1") {
      if (xs_turn) {
	b21 = X;
      }
      if (!xs_turn) {
	b21 = O;
      }
    }
    if (row == "2" && column == "2") {
      if (xs_turn) {
	b22 = X;
      }
      if (!xs_turn) {
	b22 = O;
      }
    }

    if (row == "q" || column == "q")
      break;
    xs_turn = !xs_turn;
  }
}
