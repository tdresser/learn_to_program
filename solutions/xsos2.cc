#include <string>
#include <iostream>
#include <stdlib.h>

using namespace std;

const int EMPTY = 0;
const int X = 1;
const int O = 2;

int b00 = EMPTY;
int b01 = EMPTY;
int b10 = EMPTY;
int b11 = EMPTY;

bool xs_turn = true;
int num_played = 0;

int main() {

  while (true) {
    if (xs_turn) {
      cout << "X's turn\n";
    }
    if (!xs_turn) {
      cout << "O's turn\n";
    }

    // Draw board;
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

    cout << "\n";

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

    cout << "\n";

    if (num_played >= 4)
      break;

    cout << "Please enter the location you would like to play in.\n";
    string location;
    cin >> location;

    if (location=="4") {
      if (b00 != EMPTY) {
	cout << "You can't play there\n";
	continue;
      }
      if (xs_turn) {
	b00 = X;
      }
      if (!xs_turn) {
	b00 = O;
      }
    }

    if (location=="5") {
      if (b01 != EMPTY) {
	cout << "You can't play there\n";
	continue;
      }
      if (xs_turn) {
	b01 = X;
      }
      if (!xs_turn) {
	b01 = O;
      }
    }

    if (location=="1") {
      if (b10 != EMPTY) {
	cout << "You can't play there\n";
	continue;
      }
      if (xs_turn) {
	b10 = X;
      }
      if (!xs_turn) {
	b10 = O;
      }
    }

    if (location=="2") {
      if (b11 != EMPTY) {
	cout << "You can't play there\n";
	continue;
      }
      if (xs_turn) {
	b11 = X;
      }
      if (!xs_turn) {
	b11 = O;
      }
    }

    if (location=="q")
      break;
    num_played = num_played + 1;
    xs_turn = !xs_turn;
  }
}
