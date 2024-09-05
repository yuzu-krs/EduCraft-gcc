#include <stdio.h>
#include "minecraft.h"  // ヘッダファイルをインクルード

/*############################################
##############################################*/
//Minecraftに読み込ませるときに識別させるid
//x座標
//y座標
//z座標
//Block名前(例:stone)
//Block_id(東西南北など)

void setBlockReplace(int x, int y, int z, const char *block_name, int block_id) {
    int id=999999999;
    printf("\n%d,%d,%d,%d,%s,%d\n",id,x,y,z,block_name,block_id);
}

void setBlockKeep(int x, int y, int z, const char *block_name, int block_id) {
    int id=999999998;
    printf("\n%d,%d,%d,%d,%s,%d\n",id,x,y,z,block_name,block_id);
}

void setBlockDestroy(int x, int y, int z, const char *block_name, int block_id) {
    int id=999999997;
    printf("\n%d,%d,%d,%d,%s,%d\n",id,x,y,z,block_name,block_id);
}


/*############################################
##############################################*/


/*############################################
##############################################*/
//Minecraftに読み込ませるときにfillBlock関数と識別させるid

//x1座標
//y1座標
//z1座標

//x2座標
//y2座標
//z2座標

//Block名前(例:stone)
//Block_id(東西南北など)

// fillBlock関数
void fillBlock(int x1, int y1, int z1, int x2, int y2, int z2, const char *block_name, int block_id) {
    int id = -99999; 
    printf("\n%d,%d,%d,%d,%d,%d,%d,%s,%d\n", id, x1, y1, z1, x2, y2, z2, block_name, block_id);
}
/*############################################
##############################################*/