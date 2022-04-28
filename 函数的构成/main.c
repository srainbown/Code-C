//
//  main.c
//  C7
//
//  Created by 紫川秀 on 2022/4/19.
//
/*
 使用函数的优点：
    提高代码可读性
    提高开发效率
    提高代码复用性
 格式
    返回值 函数名（形参列表）{
    函数体;
    return;
 }
 形参和实参：定义函数时是形参，调用时传递的参数是实参
 主调函数与被调函数：A，B两个函数，A中调用了B，A就是主调函数，B就是被调函数
 
 */
#include <stdio.h>
void testOne(){
    printf("无参数无返回值\n");
}
void testTwo(int a,int b){
    printf("有参无返回值%d  %d\n",a,b);
}
int testThree(){
    int a = 5;
    printf("无参有返回值%d\n",a);
    return a;
}
int testFour(int a,int b){
    return a>b?a:b;
}
int main(int argc, const char * argv[]) {
    
    testOne();
    testTwo(1,2);
    int a = 0;
    a = testThree();
    printf("a== %d\n",a);
    int b = 0;
    b = testFour(5,10);
    printf("testFour==%d\n",b);
    
    return 0;
}

void sum(float a,float b){
    
}
