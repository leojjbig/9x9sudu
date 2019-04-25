#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL));
    int right_answer = rand() % 10;

    printf("guess 0 to 9 int number...\n");
    printf("you have three chance\n");
    printf("Ready ..\n");

    int count = 0;
    int flag = 0;

    while (count < 3) {
        count += 1;
        int guess;
        printf("please guess int nurber:\n");
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
                printf("Right anser!\n");
                printf("you guess %d time...\n", count);
                flag = 1;
                break;
            case 1:
                printf("more big!\n");
                break;
            case 2:
                printf("get little!\n");
                break;
            default:
                printf("input not int ...\n");
        }

        if (flag == 1) {
            break;
        }
    }

    if (flag == 0) {
        printf("you use 3 time,Ans is %d.\n", right_answer);
    }

    return 0;
}

/*《程式語言教學誌》的範例程式
   http://kaiching.org/
   檔名：copy.c
   功能：猜數字遊戲的 main() 版本
   作者：張凱慶 */
