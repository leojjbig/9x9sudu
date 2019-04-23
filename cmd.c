#include "cmd.h"

void gameloop() {
    //第一步驟
    int right_answer = set_answer();

    //第二步驟
    printf("請猜出 0 到 9 之間的正整數...\n");
    printf("總共有三次機會猜出正確數字...\n");
    printf("準備好了嗎...\n");

    //第三步驟
    int count = 0; //記錄遊戲次數
    int flag = 0; //記錄是否猜對
    while (count < 3) {
        count += 1;
        int guess; //記錄使用者輸入
        printf("請輸入：\n");
        scanf("%d", &guess);
        int result = answer(right_answer, guess); //取得猜測結果

        switch (result) {
            case 0:
                //第四步驟之情況一
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

    //第四步驟之情況二
    if (flag == 0) {
        printf("猜了三次也沒猜對，答案是%d。\n", right_answer);
    }
}

/*《程式語言教學誌》的範例程式
   http://kaiching.org/
   檔名：cmd.c
   功能：猜數字遊戲的終端機版本
   作者：張凱慶 */
