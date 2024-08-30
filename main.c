#include <stdio.h>
#include "minecraft.h" // Minecraft APIを模倣したヘッダーファイル

// ブロックのIDを定義
#define GLASS "glass"

int main(void) {
    setBlock(100,100,100,GLASS,0);    
    setBlock(100,101,100,GLASS,0);    
    return 0;
}