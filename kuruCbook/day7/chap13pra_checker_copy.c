  /**入力された10個の数字を最後から表示するプログラム
   * [自作問題]
   * 1. 整数以外が入力された場合は再入力を促す。
   *  整数かどうかの判定
   *  float型で代入させておいて、実際にarray[]に書くのする前にキャストする。
   *  入力時点で少数部分があれば切り捨てるようにする。
   * 2. (今やらなくていい）入力数が巨大すぎても対応できるようにする。
   *  double型を導入する
   */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define NUM_COUNT 10
#define BUFFER_SIZE 100

// 整数文字列チェック関数
int isInteger(const char *str) {
    if (*str == '-' || *str == '+') str++;  // 符号対応
    if (*str == '\0') return 0;              // 符号だけはNG

    while (*str) {
        if (!isdigit(*str)) return 0;
        str++;
    }
    return 1;
}

int main(void) {
    long long numbers[NUM_COUNT];
    char buffer[BUFFER_SIZE];

    printf("整数を %d 個入力してください（1入力ごとにEnterを押します）:\n", NUM_COUNT);

    for (int i = 0; i < NUM_COUNT; i++) {
        while (1) {
            printf("%d個目の入力: ", i + 1);
            if (fgets(buffer, sizeof(buffer), stdin) == NULL) {
                printf("入力エラーが発生しました。もう一度入力してください。\n");
                continue;
            }

            // 改行除去
            buffer[strcspn(buffer, "\n")] = '\0';

            // 整数チェック
            if (!isInteger(buffer)) {
                printf("整数ではありません。もう一度入力してください。\n");
                continue;
            }

            // long long に変換
            numbers[i] = atoll(buffer);
            break;
        }
    }

    printf("\n--- 逆順で表示します ---\n");
    for (int i = NUM_COUNT - 1; i >= 0; i--) {
        printf("%lld\n", numbers[i]);
    }

    return 0;
}
