#include <string>
#include <iostream>
#include <stdlib.h>

using namespace std;

struct Location {
  bool is_accessible;
  string description;
  int n;
  int e;
  int s;
  int w;
};

// Make an array of uninitialized locations.
const int NUM_LOCATIONS = 10;
Location locations[NUM_LOCATIONS];

// The number of locations we've initialized.
int initialized_location_count = 0;

// Initialize a location in the next available slot in |locations|.
int makeLocation(/* TODO - what information do we need to pass
  in to initialize a location? */) {
  if (!(initialized_location_count < NUM_LOCATIONS)) {
    cout << "Increase NUM_LOCATIONS!";
  }
  int location_id = initialized_location_count;
  // TODO - initialize the location in |locations| with position |location_id|.
  initialized_location_count += 1;
  return location_id;
}

int main() {
  // TODO - Set up locations.
  int start = makeLocation();

  // Set the current location to the starting location.
  int current = start;

  // Each run of this loop gets some input from the user, and responds to it.
  while (true) {
    if (!locations[current].is_accessible) {
      cout << "How are we in an inaccessible location? Something bad is "
              "happening";
    }
    // Write the description of the current location.
    cout << locations[current].description << "\n";

    // Get the user to enter in the direction they want to go, or "q" to quit.
    string dir;
    cin >> dir;
    if (dir == "q") {
      exit(1);
    }

    // TODO - handle other user input.
    // Try to go in the direction the user indicated. If the location isn't
    // accessible, output that location's description, and don't update
    // |current|.
  }
  return 0;
}
