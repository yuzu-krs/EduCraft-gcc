#define TNT "tnt"
#define STONE "stone"
#define GLASS "glass"

#include <stdio.h>
#include "minecraft.h"  // Minecraft APIのヘッダー

    

int main(void) {
    int x = -49; // ここに任意のx座標を指定
    int y = 106; // y座標
    int z = 12;  // z座標

    testForBlock(11,104,5,STONE,0);

    return 0;
}
