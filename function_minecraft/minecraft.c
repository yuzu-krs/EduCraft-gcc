#include <stdio.h>
#include "minecraft.h"  // ヘッダファイルをインクルード

//Minecraftに読み込ませるときにsetBlock関数と識別させるid
//x座標
//y座標
//z座標
//Block名前(例:stone)
//Block_id(東西南北など)

// setBlock関数の実装
void setBlock(int x, int y, int z, const char *block_name, int block_id) {
    int id=99999;
    printf("\n%d,%d,%d,%d,%s,%d\n",id,x,y,z,block_name,block_id);
}