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
int makeLocation(bool is_accessible, string description) {
  if (!(initialized_location_count < NUM_LOCATIONS)) {
    cout << "Increase NUM_LOCATIONS!";
  }

  int location_id = initialized_location_count;
  locations[location_id].description = description;
  locations[location_id].is_accessible = is_accessible;
  initialized_location_count += 1;
  return location_id;
}

int main() {
  // Set up locations.
  int start = makeLocation(
      true, "You arrive at the opening of a large cave. To the north "
            "there is a small stream. To the south is the exit of "
            "the cave. To the east "
            "and west, lies darkness.");

  int west_wall =
      makeLocation(false, "You feel around to the west, but there's a wall of "
                          "solid rock.");
  int east_wall =
      makeLocation(false, "You feel around to the east, but there's a wall of "
                          "solid rock.");
  int exit_path =
      makeLocation(false, "You don't want to leave. You just got here!");

  int stream = makeLocation(
      true, "As you near the stream, you see that it's teaming with "
            "tiny little chimpanzees. You decide against taking a drink.");
  locations[start].n = stream;
  locations[start].e = east_wall;
  locations[start].s = exit_path;
  locations[start].w = west_wall;

  int end = makeLocation(
      true,
      "The tiny chimpanzees begin to swarm around you. Without "
      "warning, they begin to climb over you. You are soon submerged, and run "
      "out of oxygen. You are dead.");

  locations[stream].n = end;
  locations[stream].e = east_wall;
  locations[stream].s = start;
  locations[stream].w = west_wall;

  int dead =
      makeLocation(false, "Sorry, you're dead. You can't move any more.");
  locations[end].n = dead;
  locations[end].e = dead;
  locations[end].s = dead;
  locations[end].w = dead;

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
    // Try to go in the direction the user indicated. If the location isn't
    // accessible, output that location's description, and don't update
    // |current|.
    int next = current;
    if (dir == "n") {
      next = locations[current].n;
    }
    if (dir == "e") {
      next = locations[current].e;
    }
    if (dir == "s") {
      next = locations[current].s;
    }
    if (dir == "w") {
      next = locations[current].w;
    }

    if (!locations[next].is_accessible) {
      cout << locations[next].description << "\n";
    } else {
      current = next;
    }
  }
  return 0;
}
