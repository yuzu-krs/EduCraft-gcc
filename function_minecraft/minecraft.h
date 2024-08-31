#ifndef MINECRAFT_H
#define MINECRAFT_H

// setBlock関数のプロトタイプ宣言
void setBlock(int x, int y, int z, const char *block_name, int block_id);

// fillBlock関数のプロトタイプ宣言
void fillBlock(int x1, int y1, int z1, int x2, int y2, int z2, const char *block_name, int block_id);

#endif // MINECRAFT_H