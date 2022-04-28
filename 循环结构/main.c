//
//  main.c
//  C5
//
//  Created by 紫川秀 on 2022/4/19.
//
/*
 循环结构：
    当条件满足的时候程序会重复的执行某一个代码段。
 构成循环结构的条件：
    1.循环控制条件
    2.循环体
    3.让循环结束的语句（让循环控制条件为假的条件）
 while是先判断再执行，do while是执行在判断
 */

#include <stdio.h>

int main(int argc, const char * argv[]) {
    void testTwo();
    testTwo();
    
    void testOne();
    testOne();
   
    void testThree();
    testThree();
        
    void testFour();
    testFour();
    return 0;
}
void testOne(){
    //计算1+2+3+4+...100的和
    int j = 1;
    int sum = 0;
    while (j<=100) {
        sum += j;
        j++;
    }
    printf("等于%d\n",sum);
}
void testTwo(){
    int i = 1;
    while (i < 5) {
        printf("第%d次\n",i);
        i++;
    }
}
void testThree(){
    int i = 1;
    do {
        printf("弄啥咧\n");
        i++;
    } while (i<5);

}
void testFour(){
    int i = 0, sum = 0;
    do {
        sum += i;
        i++;
    } while (i<=100);
    printf("等于 = %d\n",sum);
}
