#ifndef MINECRAFT_H
#define MINECRAFT_H





#include "stdio.h"
// 初期化関数（内部的に使用）
void initialize_minecraft(void) __attribute__((constructor));





// setBlock系関数のプロトタイプ宣言
void setBlockReplace(int x, int y, int z, const char *block_name, int block_id);

void setBlockKeep(int x, int y, int z, const char *block_name, int block_id);

void setBlockDestroy(int x, int y, int z, const char *block_name, int block_id);



// fill系関数のプロトタイプ宣言
void fillDestroy(int x1, int y1, int z1, int x2, int y2, int z2, const char *block_name, int block_id);

void fillKeep(int x1, int y1, int z1, int x2, int y2, int z2, const char *block_name, int block_id);

void fillHollow(int x1, int y1, int z1, int x2, int y2, int z2, const char *block_name, int block_id);

void fillOutline(int x1, int y1, int z1, int x2, int y2, int z2, const char *block_name, int block_id);

void fillReplace(int x1, int y1, int z1, int x2, int y2, int z2, const char *block_name, int block_id);


void fillReplaceBlock(int x1, int y1, int z1, int x2, int y2, int z2, const char *block_name1, int block_id1, const char *block_name2, int block_id2);



// clone系関数のプロトタイプ宣言

void cloneReplaceNormal(int x1,int y1,int z1,int x2,int y2,int z2,int x,int y,int z);

void cloneReplaceForce(int x1,int y1,int z1,int x2,int y2,int z2,int x,int y,int z);

void cloneReplaceMove(int x1,int y1,int z1,int x2,int y2,int z2,int x,int y,int z);


void cloneMaskedNormal(int x1,int y1,int z1,int x2,int y2,int z2,int x,int y,int z);

void cloneMaskedForce(int x1,int y1,int z1,int x2,int y2,int z2,int x,int y,int z);

void cloneMaskedMove(int x1,int y1,int z1,int x2,int y2,int z2,int x,int y,int z);


void cloneFilteredNormal(int x1,int y1,int z1,int x2,int y2,int z2,int x,int y,int z, const char *block_name, int block_id);

void cloneFilteredForce(int x1,int y1,int z1,int x2,int y2,int z2,int x,int y,int z, const char *block_name, int block_id);

void cloneFilteredMove(int x1,int y1,int z1,int x2,int y2,int z2,int x,int y,int z, const char *block_name, int block_id);




//summonコマンド
void summon(const char *entity,int x,int y,int z,const char *status);


//commandを直接送る
void sendCommand(const char *packet);



//testforblock
// ブロックをテストする関数の宣言（int 型の戻り値に修正）
int testForBlock(int x, int y, int z, const char *block_name, int block_id);




//testforblocks
int testForBlocksAll(int x1,int y1,int z1,int x2,int y2,int z2,int x,int y,int z);

int testForBlocksMasked(int x1,int y1,int z1,int x2,int y2,int z2,int x,int y,int z);




//minecraftのチャットからscanfに送信する関数
void m_scanf(const char *format, void *var);


//現在の座標をゲットする関数
int getPositionX();
int getPositionY();
int getPositionZ();



#endif // MINECRAFT_H