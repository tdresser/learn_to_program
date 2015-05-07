#include <string>
#include <iostream>
#include <stdlib.h>

using namespace std;

struct Room {
  bool is_wall;
  string description;
  int n;
  int e;
  int s;
  int w;
};

const int NUM_ROOMS = 10;
Room rooms[NUM_ROOMS];
int room_count = 0;

int makeRoom(bool is_wall, string description) {
  if (!(room_count < NUM_ROOMS)) {
    cout << "Increase NUM_ROOMS!";
  }
  rooms[room_count].description = description;
  rooms[room_count].is_wall = is_wall;
  int room_id = room_count;
  room_count += 1;
  return room_id;
}

int main() {
  int start =
      makeRoom(false, "You arrive at the opening of a large cave. To the north "
                      "there is a small stream. To the south is the exit of "
                      "the cave. To the east "
                      "and west, lies darkness.");

  int west_wall =
      makeRoom(true, "You feel around to the west, but there's a wall of "
                     "solid rock.");
  int east_wall =
      makeRoom(true, "You feel around to the west, but there's a wall of "
                     "solid rock.");
  int exit_path = makeRoom(true, "You don't want to leave. You just got here!");

  int stream = makeRoom(
      false, "As you near the stream, you see that it's teaming with "
             "tiny little chimpanzees. You decide against taking a drink.");
  rooms[start].n = stream;
  rooms[start].e = east_wall;
  rooms[start].s = exit_path;
  rooms[start].w = west_wall;

  int end = makeRoom(
      false,
      "The tiny chimpanzees begin to swarm around you. Without "
      "warning, they begin to climb over you. You are soon submerged, and run "
      "out of oxygen. You are dead.");

  rooms[stream].n = end;
  rooms[stream].e = east_wall;
  rooms[stream].s = start;
  rooms[stream].w = west_wall;

  int dead = makeRoom(true, "Sorry, you're dead. You can't move any more.");
  rooms[end].n = dead;
  rooms[end].e = dead;
  rooms[end].s = dead;
  rooms[end].w = dead;

  int current;
  current = start;
  while (true) {
    if (rooms[current].is_wall) {
      cout << "How are we on a wall? Something bad is happening";
    }
    cout << rooms[current].description << "\n";
    string dir;
    cin >> dir;
    if (dir == "q") {
      exit(1);
    }
    int next;
    if (dir == "n") {
      next = rooms[current].n;
    }
    if (dir == "e") {
      next = rooms[current].e;
    }
    if (dir == "s") {
      next = rooms[current].s;
    }
    if (dir == "w") {
      next = rooms[current].w;
    }

    if (rooms[next].is_wall) {
      cout << rooms[next].description << "\n";
    } else {
      current = next;
    }
  }
  return 0;
}
