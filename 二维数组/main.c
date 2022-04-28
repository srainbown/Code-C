//
//  main.c
//  二维数组
//
//  Created by 紫川秀 on 2022/4/28.
/*
    二维数组：
    类型 数组名[常量表达式1][常量表达式2]
 */

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int a[2][3]={{100,2,3},{88,54,31}};
//  遍历
    for (int i=0; i<2; i++) {
        for (int j=0; j<3; j++) {
            printf("%d\t",a[i][j]);
        }
    }
    printf("\n");
    a[0][0] = 1;
    a[0][1] = 2;
    a[0][2] = 3;
    a[1][0] = 76;
    a[1][1] = 45;
    a[1][2] = 32;
//  遍历
    for (int i=0; i<2; i++) {
        for (int j=0; j<3; j++) {
            printf("%d\t",a[i][j]);
        }
    }
    printf("\n");
    
    return 0;
}
