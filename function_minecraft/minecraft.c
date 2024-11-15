#include <stdio.h>
#include <stdlib.h>  // exit() 関数を使うために追加
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

// fill系関数
void fillDestroy(int x1, int y1, int z1, int x2, int y2, int z2, const char *block_name, int block_id) {
    int id = 999999996; 
    printf("\n%d,%d,%d,%d,%d,%d,%d,%s,%d\n", id, x1, y1, z1, x2, y2, z2, block_name, block_id);
}

void fillKeep(int x1, int y1, int z1, int x2, int y2, int z2, const char *block_name, int block_id) {
    int id = 999999995; 
    printf("\n%d,%d,%d,%d,%d,%d,%d,%s,%d\n", id, x1, y1, z1, x2, y2, z2, block_name, block_id);
}

void fillHollow(int x1, int y1, int z1, int x2, int y2, int z2, const char *block_name, int block_id) {
    int id = 999999994; 
    printf("\n%d,%d,%d,%d,%d,%d,%d,%s,%d\n", id, x1, y1, z1, x2, y2, z2, block_name, block_id);
}

void fillOutline(int x1, int y1, int z1, int x2, int y2, int z2, const char *block_name, int block_id) {
    int id = 999999993; 
    printf("\n%d,%d,%d,%d,%d,%d,%d,%s,%d\n", id, x1, y1, z1, x2, y2, z2, block_name, block_id);
}

void fillReplace(int x1, int y1, int z1, int x2, int y2, int z2, const char *block_name, int block_id) {
    int id = 999999992; 
    printf("\n%d,%d,%d,%d,%d,%d,%d,%s,%d\n", id, x1, y1, z1, x2, y2, z2, block_name, block_id);
}

void fillReplaceBlock(int x1, int y1, int z1, int x2, int y2, int z2, const char *block_name1, int block_id1, const char *block_name2, int block_id2){
    int id = 999999991; 
    printf("\n%d,%d,%d,%d,%d,%d,%d,%s,%d,%s,%d\n", id, x1, y1, z1, x2, y2, z2, block_name1, block_id1, block_name2, block_id2);
}
/*############################################
##############################################*/

void cloneReplaceNormal(int x1,int y1,int z1,int x2,int y2,int z2,int x,int y,int z){
    int id = 999999989; 
    printf("\n%d,%d,%d,%d,%d,%d,%d,%d,%d,%d\n", id, x1, y1, z1, x2, y2, z2, x, y, z);
}

void cloneReplaceForce(int x1,int y1,int z1,int x2,int y2,int z2,int x,int y,int z){
    int id = 999999988; 
    printf("\n%d,%d,%d,%d,%d,%d,%d,%d,%d,%d\n", id, x1, y1, z1, x2, y2, z2, x, y, z);
}

void cloneReplaceMove(int x1,int y1,int z1,int x2,int y2,int z2,int x,int y,int z){
    int id = 999999987; 
    printf("\n%d,%d,%d,%d,%d,%d,%d,%d,%d,%d\n", id, x1, y1, z1, x2, y2, z2, x, y, z);
}



void cloneMaskedNormal(int x1,int y1,int z1,int x2,int y2,int z2,int x,int y,int z){
    int id = 999999986; 
    printf("\n%d,%d,%d,%d,%d,%d,%d,%d,%d,%d\n", id, x1, y1, z1, x2, y2, z2, x, y, z);
}

void cloneMaskedForce(int x1,int y1,int z1,int x2,int y2,int z2,int x,int y,int z){
    int id = 999999985; 
    printf("\n%d,%d,%d,%d,%d,%d,%d,%d,%d,%d\n", id, x1, y1, z1, x2, y2, z2, x, y, z);
}

void cloneMaskedMove(int x1,int y1,int z1,int x2,int y2,int z2,int x,int y,int z){
    int id = 999999984; 
    printf("\n%d,%d,%d,%d,%d,%d,%d,%d,%d,%d\n", id, x1, y1, z1, x2, y2, z2, x, y, z);
}



void cloneFilteredNormal(int x1,int y1,int z1,int x2,int y2,int z2,int x,int y,int z, const char *block_name, int block_id){
    int id = 999999983; 
    printf("\n%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%s,%d\n", id, x1, y1, z1, x2, y2, z2, x, y, z,block_name,block_id);
}

void cloneFilteredForce(int x1,int y1,int z1,int x2,int y2,int z2,int x,int y,int z, const char *block_name, int block_id){
    int id = 999999982; 
    printf("\n%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%s,%d\n", id, x1, y1, z1, x2, y2, z2, x, y, z,block_name,block_id);
}

void cloneFilteredMove(int x1,int y1,int z1,int x2,int y2,int z2,int x,int y,int z, const char *block_name, int block_id){
    int id = 999999981; 
    printf("\n%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%s,%d\n", id, x1, y1, z1, x2, y2, z2, x, y, z,block_name,block_id);
}



//#########################

void summon(const char *entity,int x,int y,int z,const char *status){
    int id=999999979;
    printf("\n%d,%s,%d,%d,%d,%s\n",id,entity,x,y,z,status);
}

//#########################

void sendCommand(const char *packet){
    int id=999999969;
    printf("\n%d,%s\n",id,packet);
}

//#########################

int testForBlock(int x,int y,int z, const char *block_name, int block_id){
    int id=999999959;
    printf("\n%d,%d,%d,%d,%s,%d\n",id,x,y,z,block_name,block_id);
    fflush(stdout); //// ここでバッファをフラッシュして即時出力
    int number; 

    //プロセスビルダーから
    scanf("%d", &number); 


    int err_id=-999999959;
    // 1, 0 以外の場合は強制終了
    if (number != 1 && number != 0) {
        printf("\n%d,エラー: 無効な入力 %d です。プログラムを終了します。\n", err_id,number);
        exit(1); // プログラムを強制終了
    }

    
    return number; 
}




//#########################

int testForBlocksAll(int x1,int y1,int z1,int x2,int y2,int z2,int x,int y,int z){
    int id=999999949;    
    printf("\n%d,%d,%d,%d,%d,%d,%d,%d,%d,%d\n",id,x1,y1,z1,x2,y2,z2,x,y,z);
    
    fflush(stdout); //// ここでバッファをフラッシュして即時出力
    int number; 

    //プロセスビルダーから
    scanf("%d", &number); 


    int err_id=-999999959;
    // 1, 0 以外の場合は強制終了
    if (number != 1 && number != 0) {
        printf("\n%d,エラー: 無効な入力 %d です。プログラムを終了します。\n", err_id,number);
        exit(1); // プログラムを強制終了
    }

    
    return number; 
}

int testForBlocksMasked(int x1,int y1,int z1,int x2,int y2,int z2,int x,int y,int z){
    int id=999999948;
    printf("\n%d,%d,%d,%d,%d,%d,%d,%d,%d,%d\n",id,x1,y1,z1,x2,y2,z2,x,y,z);

    fflush(stdout); //// ここでバッファをフラッシュして即時出力
    int number; 

    //プロセスビルダーから
    scanf("%d", &number); 


    int err_id=-999999959;
    // 1, 0 以外の場合は強制終了
    if (number != 1 && number != 0) {
        printf("\n%d,エラー: 無効な入力 %d です。プログラムを終了します。\n", err_id,number);
        exit(1); // プログラムを強制終了
    }

    
    return number; 
}


//minecraftのチャットからscanfに送信する関数
void m_scanf(const char *format, void *var) {
    printf("\n999999919\n");
    fflush(stdout);   // 出力バッファをクリア
    scanf(format, var);  // 入力を受け取る
}