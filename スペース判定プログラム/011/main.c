//
//  main.c
//  011
//
//  Created by 高島良祐 on 2016/01/24.
//  Copyright © 2016年 高島良祐. All rights reserved.
//

#include <stdio.h>
int main (void){
    char text [100];
    
    //printf("英文を入力してください。");
    gets(text);
    
    int i, n;
    
    i = 0;
    n = 0;
    
    /*入力された文字を表示*/
    //printf("string = \"%s\" \n",text);
    
    /*入力文字の終端が来るまでループ*/
    while(*(text+i) != '\0'){
        
        /*スペース(空白)*/
        if(*(text+i) == ' '){
            
            /* スペース(空白)なら次の文字へ */
            if( *(text+(i+1)) == ' ' ){
                i++;
                continue;
            }
            /* 終端文字ではないならば改行を出力 */
            else if(*(text+(i+1)) != '\0'){
                
                n++;
                //putchar('\n');
            }
            
        }
        /* スペース(空白)ではなく、終端だったら */
        else if(*(text+i) != ' ' && *(text+(i+1)) == '\0'){
            n++;
        }
        /* 上記の条件以外なら現在の文字を表示 */
        else{
            //putchar(*(text+i));
        }
        
        i++;
    }
    
    /*ワード数を表示*/
    //printf("\nword = %d \n\n", n);
    printf("%d\n", n);
    return 0;
}
