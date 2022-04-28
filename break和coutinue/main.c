//
//  main.c
//  C6
//
//  Created by 紫川秀 on 2022/4/19.
//
/*
 break和coutinue都可以用在循环中，用来跳出循环
 break对if else 不起作用
 coutinue表示结束本次循环，继续下次循环
 */

#include <stdio.h>

int main(int argc, const char * argv[]) {
    
//    void testOne();
//    testOne();
//    void testTwo();
//    testTwo();
//    void testThree();
//    testThree();
//    void testFour();
//    testFour();
//    void testFive();
//    testFive();
    void testSix();
    testSix();
    
    return 0;
}
void testOne(){
    for (int i = 0; i<3; i++) {
        printf("第%d次\n",i);
    }
}
void testTwo(){
    int i = 0;
    for (; ; ) {
        if (i<3) {
            printf("emmmmm%d次\n",i);
            i++;
        }else{
            break;
        }
    }
}
void testThree(){
    for (int i=0; i<5; i++) {
        for (int j=0;j<=i ;j++) {
            printf("* ");
        }
        printf("\n");
    }
    for (int i=0; i<5; i++) {
        for (int j=5;j>i ;j--) {
            printf("* ");
        }
        printf("\n");
    }
    for (int i=0; i<5; i++) {
        for (int j=0; j<5-i; j++) {
            printf("* ");
        }
        printf("\n");
    }
    
    
}
void testFour(){
    for (int i=1; i<=6; i++) {
        for (int j=0; j<6-i; j++) {
            printf(" ");
        }
        for (int k=0; k<i*2-1; k++) {
            printf("*");
        }
        printf("\n");
    }
}
void testFive(){
    for (int i=1; i<=9; i++) {
        for (int j=1; j<=i; j++) {
            printf("%d*%d=%d ",i,j,i*j);
        }
        printf("\n");
    }
}
void testSix(){
    for (int i=0; i<10; i++) {
        if (i==5) {
//            break;
            continue;
        }
        printf("**%d**  ",i);
    }
    printf("\n");
}
