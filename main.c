#include <stdio.h>

#include "minecraft.h" // Minecraft APIを模倣したヘッダーファイル

// ブロックのIDを定義
#define TNT "tnt"
#define REDSTONE "redstone_block"

int main(void) {
    fillBlock(-72,74,-79,-63,65,-70,TNT,0);
    setBlock(-72,74,-79,REDSTONE,0);
    return 0;
}