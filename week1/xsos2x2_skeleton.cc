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

int main() {

  while (true) {
    if (xs_turn) {
      cout << "X's turn\n";
    }
    if (!xs_turn) {
      cout << "O's turn\n";
    }

    // TODO: Draw board.

    // TODO: if the game is over, exit

    cout << "Please enter the location you would like to play in.\n";
    string location;
    cin >> location;

    cout << "The user entered location " << location << "\n";
    // TODO - check if the location is valid and if so, update the board.

    if (location=="q")
      break;
    xs_turn = !xs_turn;
  }
}
