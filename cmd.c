#include "cmd.h"

void gameloop() {
    //第一步驟
    int right_answer = set_answer();

    //第二步驟
    printf("guess 0 to 9 int number...\n");
    printf("you have three chance\n");
    printf("Ready ..\n");

    //第三步驟
    int count = 0; //記錄遊戲次數
    int flag = 0; //記錄是否猜對
    while (count < 3) {
        count += 1;
        int guess; //記錄使用者輸入
        printf("please guess int nurber:\n");
        scanf("%d", &guess);
        int result = answer(right_answer, guess); //取得猜測結果

        switch (result) {
            case 0:
                //第四步驟之情況一
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

    //第四步驟之情況二
    if (flag == 0) {
        printf("you use 3 time,Ans is %d.\n", right_answer);
    }
}

/*《程式語言教學誌》的範例程式
   http://kaiching.org/
   檔名：cmd.c
   功能：猜數字遊戲的終端機版本
   作者：張凱慶 */
