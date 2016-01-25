//
//  main.c
//  文字数判定プログラム
//
//  Created by 高島良祐 on 2016/01/24.
//  Copyright © 2016年 高島良祐. All rights reserved.
//

#include <stdio.h>

int main(void) {
    // insert code here...
    
    //¥¥¥¥¥¥¥¥¥¥¥¥¥¥¥¥¥¥
    //一回目
    int i;
    
    char str1[256];
    scanf("%s",str1);
    for (i = 0;str1[i] != '\0';i++);
    printf("%d\n",i);
    //¥¥¥¥¥¥¥¥¥¥¥¥¥¥¥¥¥¥
    //２回目
    int j;
    
    char str2[256];
    scanf("%s",str2);
    for (i = 0;str2[j] != '\0';j++);
    printf("%d\n",j);
    //¥¥¥¥¥¥¥¥¥¥¥¥¥¥¥¥¥¥
    int k;
    
    char str3[256];
    scanf("%s",str3);
    for (i = 0;str3[k] != '\0';k++);
    printf("%d\n",k);
    //¥¥¥¥¥¥¥¥¥¥¥¥¥¥¥¥¥¥
    int l;
    
    char str4[256];
    scanf("%s",str3);
    for (i = 0;str4[l] != '\0';k++);
    printf("%d\n",k);
    //¥¥¥¥¥¥¥¥¥¥¥¥¥¥¥¥¥¥
    return 0;
}
