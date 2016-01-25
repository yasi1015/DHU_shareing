//
//  main.c
//  時計
//
//  Created by 高島良祐 on 2016/01/24.
//  Copyright © 2016年 高島良祐. All rights reserved.
//

#include <stdio.h>
#include <math.h>

#define BUFFER_SIZE  18


int main(void){
    
    int n;
    char buf[BUFFER_SIZE];
    
    int h1, h2, m1, m2, s1, s2;
    int t1, t2, diff;
    int hd, md, sd;
    int count = 0;
    
    while (1){
        fgets(buf, BUFFER_SIZE, stdin);
        n = sscanf(buf, "%d:%d:%d-%d:%d:%d", &h1, &m1, &s1, &h2, &m2, &s2);
        if (n == 6){
            break;
        }
        else if (n ==3){
            printf("走りました");
            break;
        }
        /*
        else if(n == 3){
            count = 1;
        }
         */
        else if (n == -1){
            continue;
        }
        else {
            return 0;
        }
    }
     
 
      if(count == 1){
        t1 = h1 * 3600 + m1 * 60 + s1;
        t2 = h2 * 3600 + m2 * 60 + s2;
        //秒に変換して足したもの
        diff = abs(t1 + t2);
        //時間が計算される
        hd = diff / 3600;
        //分
        md = (diff - 3600 * hd) / 60;
        //sd = diff - 3600 * hd - md * 60;
        
        printf("%02d:%02d:%02d ", hd, md, sd);
        
        
    }
    
    t1 = h1 * 3600 + m1 * 60 + s1;
    t2 = h2 * 3600 + m2 * 60 + s2;
    
    diff = abs(t1 - t2);
    
    hd = diff / 3600;
    
    md = (diff - 3600 * hd) / 60;
    sd = diff - 3600 * hd - md * 60;
    
    printf("%02d:%02d:%02d ", hd, md, sd);
    
    
    return 0;
}

