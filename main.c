#include <stdio.h>
#include "minecraft.h"
#include <unistd.h>  // sleep() のために必要

#define COMMAND1 "time set day"
#define COMMAND2 "time set 16000"

int main(void) {
    while (1) {
        // 朝に変更
        printf("Setting time to day\n");
        sendCommand(COMMAND1);
        fflush(stdout);  // これで標準出力をフラッシュ
        sleep(3);  // 3秒待機

        // 夜に変更
        printf("Setting time to night\n");

        sendCommand(COMMAND2);
        fflush(stdout);  // これで標準出力をフラッシュ
        sleep(3);  // 3秒待機
    }
    return 0;
}
