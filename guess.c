#include "guess.h"

int set_answer() {
    srand(time(NULL));

    return rand() % 10;
}

int answer(int a, int g) {
    if (g > 9 || g < 0) {
        return 3;
    }

    if (a == g) {
        return 0;
    }
    else {
        if (a > g) {
            return 1;
        }
        else {
            return 2;
        }
    }
}

/*《程式語言教學誌》的範例程式
   http://kaiching.org/
   檔名：guess.c
   功能：猜數字遊戲的核心程式
   作者：張凱慶 */
