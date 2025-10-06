  /**苗字と名前を別々に入力させて、それを結合して表示するプログラム
   * [自作問題]
   * 1. sprint関数を利用すること　OK
   * 2. ローマ字以外の文字の入力があった場合打ち直しを要求すること
   *  a = 97,z=122なので、その範囲に入っているかを判定。文字列ごとにfor文を回す。
   *  ちなみに、A=65,Z=90
   *  charX - 'a'して0~26の間にあるか、ってするとわかりやすい可能性。
   * 3. 文字数の切り捨てを行うこと。可能なら短い文字数での打ち直しを要求すること
   *  for(int i = 0,str[i] != '\0',i++);
   *  が使えるかと
   * 4. スペースを導入　OK
   *  */

#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAX_LEN 20  // 各入力の最大文字数

// 入力がローマ字のみで構成されているかチェック
int is_valid_roman(const char *str) {
    for (int i = 0; str[i] != '\0'; i++) {
        if (!isalpha((unsigned char)str[i])) { // アルファベット以外ならNG
            return 0;
        }
    }
    return 1;
}

// 安全に文字列を取得する関数
void input_roman_name(char *buffer,const char *prompt)
{
    while (1)
    {
        printf("%s (最大%d文字): ", prompt, MAX_LEN -1);
        if(fgets(buffer, MAX_LEN + 5, stdin) == NULL){
            printf("入力エラーが発生しました。\n");
            continue;
        }
        // 改行文字を除去
        buffer[strcspn(buffer, "\n")] = '\0';

        // 文字数チェック
        if(strlen(buffer) >= MAX_LEN){
            printf("入力が長すぎます。%d文字いないで入力してください。\n",MAX_LEN -1);
            continue;
        }

        // 入力内容のバリデーション
        if(!is_valid_roman(buffer)){
            printf("ローマ字以外の文字が含まれています。もう一度入力してください。\n");
            continue;
        }

        break;
    }
}

int main(void) {
    char first_name[MAX_LEN];
    char last_name[MAX_LEN];
    char full_name[MAX_LEN*2 + 2];

    printf("=== 名前入力プログラム ===\n");

    input_roman_name(last_name, "苗字を入力してください");
    input_roman_name(first_name, "名前を入力してください");

    // sprintfで結合
    sprintf(full_name,"%s %s",first_name,last_name);

    printf("あなたの名前は,%sです\n",full_name);

    return 0;
}
