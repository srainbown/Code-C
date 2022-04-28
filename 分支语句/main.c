//
//  main.c
//  C4
//
//  Created by 紫川秀 on 2022/4/17.
//
/*
 分支语句：if,switch
 */
#include <stdio.h>
#include <stdlib.h>//随机数函数所在的库

int main(int argc, const char * argv[]) {
    
    int a = 0;
    int b = 0;
    a = 1;
    b = 10;
    if (a<b) {
        printf("嘿嘿\n");
    }
    
    if (a != 2) {
        printf("不等于2\n");
    }else{
        printf("不等于1\n");
    }
    
    if (a == 1 || b == 2) {
        printf("或\n");
    }
    if (a == 1 && b == 10){
        printf("且\n");
    }else{
        printf("懵逼");
    }
    printf("随机数 == %d\n",arc4random_uniform(5));
    
    for (int i = 0; i<5; i++) {
        switch (i) {
            case 0:
                printf("0\n");
                break;
            case 1:
                printf("嘿嘿\n");
                break;
            case 5:
                printf("哈哈\n");
                break;
            case 10:
                printf("啥呀\n");
                break;
            default:
                break;
        }
    }
    
    int month = 0;
    printf("请输入一个月份\n");
    scanf("%d",&month);
    if (month >= 1 && month <= 12) {
        switch (month) {
            case 1:
            case 2:
            case 3:
                printf("春季\n");
                break;
            case 4:
            case 5:
            case 6:
                printf("夏季\n");
                break;
            case 7:
            case 8:
            case 9:
                printf("秋季\n");
                break;
            case 10:
            case 11:
            case 12:
                printf("冬季\n");
                break;
            default:
                break;
        }
    }else{
        printf("该季节不存在\n");
    }
    return 0;
}
