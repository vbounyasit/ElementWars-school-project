#ifndef CONFIGURATION_H_INCLUDED
#define CONFIGURATION_H_INCLUDED

#define TILE_SIZE 32
#define MAP_SIZE 18
#define DEFAULT_GRAPHICAL_PARAM 5
#define DEFAULT_PHYSICAL_PARAM NO_CLIPPED
#define SPRITE_PANEL_WIDTH 750
#define SPRITE_PANEL_HEIGHT
#define RIGHT_PANEL_SIZE_X 62
#define RIGHT_PANEL_SIZE_Y 38
#define RIGHT_PANEL_SCALE 60
#define PHYSIC_PROP_AMOUNT 7
#define NPC_SPRITE_AMOUNT 8
#define WINDOWS_FINAL_SIZE_X TILE_SIZE*MAP_SIZE+SPRITE_PANEL_WIDTH
#define WINDOWS_FINAL_SIZE_Y TILE_SIZE*MAP_SIZE + BOTTOM_PANEL_HEIGHT
#define RIGHT_PANEL_MIN_X WINDOWS_FINAL_SIZE_X - (SPRITE_PANEL_WIDTH / 2) + 307
#define BOTTOM_PANEL_HEIGHT 75

using namespace std;

#endif
