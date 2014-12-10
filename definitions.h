#ifndef _DEFINITIONS_H_
#define _DEFINITIONS_H_

typedef enum {
    EMPTY = 0,
    BLACK,
    WHITE
} SpaceState;

typedef struct {
  int x;
  int y;
} BoardLocation;

bool operator<(const BoardLocation& left, const BoardLocation& right);

#endif
