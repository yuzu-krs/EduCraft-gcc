#include <stdio.h>
#include "setblock.h"

int main(void){
	int x=100;
	int y=64;
	int z=100;

	const char *block_name="stone";

	int block_id=0;

	setBlock(x,y,z,block_name,block_id);
	return 0;
}