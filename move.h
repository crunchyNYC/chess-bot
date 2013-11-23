#ifndef MOVE_H
#define MOVE_H

#include<string>
#include"constants.h"
using namespace std;

class Move {
  square_type from;
  square_type to;
  bool is_capture;
  piece_type promoted;

  int score;

  public:
  Move(int, int, bool, int promoted=NO_PIECE);
  string getStr();
};
#endif