
#ifndef __AQUA__PLATFORM_CURSOR_H
	#define __AQUA__PLATFORM_CURSOR_H
	
	#include "../types.h"
	
	uint16_t mouse_cursor_width = 16;
	uint16_t mouse_cursor_height = 16;
	uint8_t mouse_cursor[1024]={0,0,0,210,18,18,18,192,23,23,23,78,0,0,0,36,0,0,0,7,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,13,13,13,197,59,59,59,248,21,21,21,243,26,26,26,211,14,14,14,99,0,0,0,36,0,0,0,7,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,12,12,12,116,30,30,30,239,185,185,185,254,116,116,116,250,32,32,32,239,26,26,26,211,14,14,14,99,0,0,0,36,0,0,0,7,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,7,7,7,37,18,18,18,223,148,148,148,249,240,240,240,255,219,219,219,255,116,116,116,250,32,32,32,239,17,17,17,224,14,14,14,99,0,0,0,36,0,0,0,7,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,0,0,0,8,14,14,14,110,33,33,33,239,220,220,220,255,254,254,254,255,248,248,248,255,219,219,219,255,158,158,158,249,32,32,32,239,17,17,17,224,7,7,7,140,0,0,0,36,0,0,0,7,255,255,255,0,255,255,255,0,255,255,255,0,0,0,0,1,7,7,7,36,18,18,18,223,148,148,148,249,248,248,248,255,255,255,255,255,255,255,255,255,248,248,248,255,219,219,219,255,158,158,158,249,47,47,47,233,14,14,14,228,7,7,7,140,0,0,0,36,0,0,0,7,255,255,255,0,255,255,255,0,0,0,0,8,11,11,11,122,39,39,39,237,220,220,220,255,255,255,255,255,249,249,249,255,220,220,220,255,213,213,213,255,206,206,206,255,177,177,177,255,133,133,133,249,19,19,19,233,0,0,0,231,0,0,0,141,0,0,0,43,255,255,255,0,0,0,0,1,7,7,7,36,18,18,18,223,148,148,148,249,248,248,248,255,201,201,201,255,30,30,30,253,27,27,27,235,27,27,27,231,26,26,26,231,22,22,22,231,4,4,4,231,0,0,0,227,0,0,0,227,0,0,0,239,255,255,255,0,255,255,255,0,0,0,0,8,11,11,11,122,39,39,39,237,219,219,219,255,195,195,195,255,31,31,31,232,6,6,6,79,6,6,6,44,6,6,6,43,6,6,6,43,0,0,0,43,0,0,0,43,0,0,0,42,0,0,0,42,255,255,255,0,255,255,255,0,0,0,0,1,7,7,7,36,18,18,18,223,148,148,148,249,188,188,188,255,31,31,31,227,6,6,6,44,0,0,0,2,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,255,255,255,0,255,255,255,0,255,255,255,0,0,0,0,7,9,9,9,122,39,39,39,237,178,178,178,254,26,26,26,231,6,6,6,43,0,0,0,1,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,0,0,0,1,0,0,0,36,14,14,14,229,134,134,134,248,22,22,22,231,6,6,6,43,0,0,0,1,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,0,0,0,7,9,9,9,122,15,15,15,237,4,4,4,230,0,0,0,43,0,0,0,1,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,0,0,0,1,0,0,0,36,0,0,0,228,0,0,0,228,0,0,0,43,0,0,0,1,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,0,0,0,7,0,0,0,122,0,0,0,232,0,0,0,42,0,0,0,1,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,0,0,0,43,0,0,0,237,0,0,0,60,0,0,0,1,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,255,255,255,0,};
	
#endif
