#include <stdio.h>
#include "minecraft.h"

int main() {
    char str[100]; // 入力する文字列用の配列

    // ユーザーに入力を促すメッセージ
    printf("Please enter a string: "); 

    // m_scanf関数を使って文字列を入力する
    m_scanf("%s", str);

    printf("You entered: %s\n", str);

    return 0;
}