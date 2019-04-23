#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL));
    int right_answer = rand() % 10;

    printf("請猜出 0 到 9 之間的正整數...\n");
    printf("總共有三次機會猜出正確數字...\n");
    printf("準備好了嗎...\n");

    int count = 0;
    int flag = 0;

    while (count < 3) {
        count += 1;
        int guess;
        printf("請輸入：\n");
        scanf("%d", &guess);
        int result = 0;
        if (right_answer == guess) {
            result = 0;
        }
        else {
            if (right_answer > guess) {
                result = 1;
            }
            else {
                result = 2;
            }
        }

        switch (result) {
            case 0:
                printf("答對！\n");
                printf("你猜了%d次...\n", count);
                flag = 1;
                break;
            case 1:
                printf("大一點！\n");
                break;
            case 2:
                printf("小一點！\n");
                break;
            default:
                printf("不正確的輸入...\n");
        }

        if (flag == 1) {
            break;
        }
    }

    if (flag == 0) {
        printf("猜了三次也沒猜對，答案是%d。\n", right_answer);
    }

    return 0;
}

/*《程式語言教學誌》的範例程式
   http://kaiching.org/
   檔名：copy.c
   功能：猜數字遊戲的 main() 版本
   作者：張凱慶 */
