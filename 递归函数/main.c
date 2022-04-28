//
//  main.c
//  C8
//
//  Created by 紫川秀 on 2022/4/27.
//
/*
 递归函数：在函数的内部存在调用当前函数本身的语句，这个函数就是递归函数
 递归调用：一个函数在它的函数体内调用它自身称为递归。
 使用注意：
    主调函数就是被调函数
    在递归函数中应该存在递归结束的条件
*/
#include <stdio.h>

int main(int argc, const char * argv[]) {
//    void test();
//    test();
    
    int ageNum(int age);
    int age = ageNum(5);
    printf("age == %d\n",age);
    return 0;
}

void test(){
    printf("哈哈哈\n");
    test();
}
int ageNum(int age){
    int n = 0;
    if (age == 1) {
        n = 10;
    }else{
        n = ageNum(age-1)+2;
    }
    return n;
}
