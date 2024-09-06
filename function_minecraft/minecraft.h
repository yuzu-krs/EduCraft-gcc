#ifndef MINECRAFT_H
#define MINECRAFT_H

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

#endif // MINECRAFT_H