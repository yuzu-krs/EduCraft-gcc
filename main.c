#define TNT "tnt"
#define GLASS "glass"
#define SAND "sand"
#define GRASS "grass"
#define WATER "water"
#define STONE "stone"


#include <stdio.h>
#include "minecraft.h"  


int main(void) {
    
    int x=11,y=104,z=5;

    if(testForBlock(7,104,5,SAND,0)&&testForBlock(11,104,5,GLASS,0)){
        setBlockReplace(9,104,5,TNT,0);
    }

    return 0;
}
