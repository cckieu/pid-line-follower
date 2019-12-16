// maze.h

#ifndef _MAZE_H
#define _MAZE_H

const int maze_length=280;

const uint8_t theMaze[] PROGMEM = 
// 00  01   02   03   04   05   06   07   08   09   0A   0B   0C   0D   0E   0F   10   11   12   13   14
{0x05,0x09,0x09,0x09,0x09,0x09,0x01,0x03,0x05,0x09,0x09,0x09,0x09,0x09,0x09,0x09,0x29,0x09,0x09,0x09,0x02,  // 00
 0x0C,0x09,0x09,0x03,0x05,0x09,0x0A,0x06,0x06,0x05,0x09,0x09,0x09,0x09,0x09,0x09,0x09,0x03,0x05,0x03,0x06,  // 01
 0x05,0x09,0x0B,0x06,0x06,0x05,0x09,0x0A,0x06,0x0C,0x09,0x09,0x09,0x09,0x09,0x01,0x0B,0x0C,0x0A,0x06,0x06,  // 02
 0x06,0x0D,0x09,0x0A,0x06,0x06,0x05,0x03,0x0C,0x09,0x09,0x03,0x05,0x09,0x09,0x0A,0x05,0x09,0x09,0x08,0x02,  // 03
 0x06,0x05,0x09,0x09,0x0A,0x06,0x06,0x0C,0x09,0x09,0x09,0x0A,0x0C,0x09,0x09,0x03,0x06,0x05,0x09,0x09,0x0A,  // 04
 0x06,0x0C,0x03,0x05,0x09,0x02,0x06,0x05,0x09,0x09,0x09,0x09,0x09,0x09,0x03,0x06,0x06,0x0C,0x03,0x05,0x03,  // 05
 0x06,0x05,0x0A,0x0C,0x03,0x06,0x06,0x06,0x05,0x01,0x03,0x07,0x05,0x03,0x06,0x06,0x06,0x05,0x0A,0x06,0x06,  // 06
 0x06,0x0C,0x09,0x03,0x0E,0x0C,0x08,0x02,0x06,0x06,0x06,0x06,0x06,0x06,0x0C,0x02,0x06,0x0C,0x09,0x02,0x06,  // 07
 0x06,0x05,0x0B,0x0C,0x09,0x09,0x09,0x08,0x02,0x06,0x06,0x06,0x06,0x0C,0x09,0x0A,0x04,0x09,0x0B,0x06,0x06,  // 08
 0x0C,0x08,0x09,0x09,0x09,0x09,0x01,0x01,0x02,0x06,0x0C,0x08,0x08,0x09,0x01,0x09,0x08,0x09,0x03,0x06,0x06,  // 09
 0x05,0x01,0x09,0x09,0x0B,0x07,0x06,0x04,0x02,0x0C,0x09,0x09,0x09,0x03,0x04,0x09,0x03,0x07,0x06,0x06,0x06,  // 0A
 0x06,0x0C,0x09,0x09,0x09,0x02,0x06,0x04,0x02,0x0D,0x09,0x09,0x09,0x0A,0x0C,0x03,0x06,0x06,0x06,0x06,0x06,  // 0B
 0x06,0x05,0x09,0x09,0x09,0x0A,0x06,0x0C,0x0A,0x05,0x09,0x09,0x09,0x09,0x03,0x06,0x06,0x06,0x06,0x06,0x06,  // 0C
 0x06,0x0C,0x09,0x09,0x09,0x03,0x04,0x09,0x09,0x08,0x0B,0x05,0x03,0x05,0x0A,0x06,0x06,0x06,0x06,0x06,0x06,  // 0D
 0x04,0x09,0x09,0x09,0x09,0x08,0x02,0x05,0x01,0x09,0x03,0x06,0x06,0x06,0x05,0x0A,0x0E,0x06,0x06,0x06,0x06,  // 0E
 0x06,0x05,0x09,0x09,0x09,0x09,0x0A,0x0E,0x06,0x07,0x06,0x06,0x06,0x06,0x06,0x05,0x09,0x0A,0x06,0x06,0x06,  // 0F
 0x06,0x0C,0x09,0x09,0x09,0x09,0x09,0x09,0x0A,0x06,0x06,0x06,0x06,0x0E,0x0E,0x06,0x05,0x09,0x0A,0x06,0x06,  // 10
 0x04,0x09,0x09,0x09,0x09,0x09,0x09,0x09,0x09,0x0A,0x0C,0x0A,0x06,0x05,0x09,0x0A,0x06,0x0D,0x09,0x0A,0x06,  // 11
 0x04,0x09,0x09,0x09,0x09,0x09,0x09,0x09,0x09,0x09,0x09,0x09,0x08,0x08,0x09,0x09,0x08,0x09,0x09,0x09,0x0A,  // 12
 0x06,
}; 

// Compass  S    E    W    N
// dir     00   01   10   11

const uint8_t turn_table[] PROGMEM =
{ 
  0x00,0x01,0x02,0x03, // 00 no turn
  0x02,0x00,0x03,0x01, // 01 turn right
  0x01,0x03,0x00,0x02, // 10 turn left
  0x03,0x02,0x01,0x00// 11 turn around
};

// turn        none  right  left  turn around 
// hex value:  0x00  0x01   0x02    0x03
const uint8_t turn_map[] PROGMEM = 
{
  0x00,0x00,0x00,0x00,0x00,0x01,0x00,0x00,0x00,0x00,0x00,0x02,
  0x00,0x00,0x00,0x00,0x01,0x00,0x02,0x00,0x00,0x01,0x00,
  0x01,0x00,0x00,0x02,0x00,0x00,0x00,0x01,0x00,0x02,0x01,
  0x00,0x00,0x01,0x02,0x00,0x03,0x00,0x01,0x02,0x00,0x00,
  0x02,0x01,0x00,0x01,0x00,0x02,0x00,0x00,0x00,0x00,0x00,
  0x01,0x00,0x00,0x00,0x02,0x00,0x00,0x00
};

struct Coord_t
{
  uint8_t row; 
  uint8_t col;  
};
typedef struct Coord_t Coord;


struct MyRobot_t 
{
  uint8_t dir; 
  uint8_t turn;
  uint8_t room;
  uint8_t bees;
  Coord maze;  // contains row and col information 
};

typedef struct MyRobot_t MyRobot;

#endif  // _CMAP_H
