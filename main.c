/* Minecraftに関連する関数を使用するためのヘッダーファイル */
#include "stdio.h"       // 標準入出力を使用
#include "minecraft.h"    // Minecraft関連の関数

#define GLASS "glass"
#define TNT "tnt"

int main() {
    //setvbuf(stdout, NULL, _IONBF, 0); // この行を消すと意図通りに動かなくなる可能性があります

    int x, y, z;
    char blockName[20];

    // ブロック名と座標の入力を求める
    printf("ブロック名を入力してください:\n");
    m_scanf("%s", blockName);

    printf("X座標を入力してください:\n");
    m_scanf("%d", &x);

    printf("Y座標を入力してください:\n");
    m_scanf("%d", &y);

    printf("Z座標を入力してください:\n");
    m_scanf("%d", &z);

    
    // 指定の座標にブロックを設置
    //setBlockReplace(x, y, z, blockName, 0);
    printf("指定の座標にブロック %s を設置しました。\n", blockName);

    printf("%d %d %d",x,y,z);

    // 設置後の確認
    printf("woefjiewfji+%d",testForBlock(x,y,z,TNT,0));
    if (testForBlock(x, y, z, TNT, 0)){
        printf("ブロックはTNTでした");
    } else if(testForBlock(x, y, z, GLASS, 0)){
        printf("ブロックはガラスでした");
    } 


    return 0;  
}
