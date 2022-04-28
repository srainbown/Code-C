//
//  main.c
//  C3
//
//  Created by 紫川秀 on 2022/4/17.
//
/*
 标识符命名原则：
 1.只能由字母，数字，下划线或者美元符号（$）组成
 2.不能以数字开头
 3.不能与关键字重名
 4.严格区分大小写
 驼峰命名法:userName;
 */

#include <stdio.h>

float num3 = 33.3f;
int main(int argc, const char * argv[]) {
    int a;
    float b;
    double c;
    char d;
    int e,f,g,h;//定义了4个int类型的变量
    printf("a=%d,e=%d,f=%d,g=%d,h=%d\n",a,e,f,g,h);//此时都是这些变量的值都是随机数
   
    int i = 0;
    printf("i=%d\n",i);
    int w;
    w = 500;
    printf("w=%d\n",w);
    
    int num1 = 1;
    int num2 = num1;
    printf("num1 = %d,num2 = %d\n",num1,num2);
    printf("num3 = %f\n",num3);
    printf("num3 = %.2f\n",num3);
    printf("num3 = %.3f\n",num3);
    printf("num3 = %.4f\n",num3);
    char name = 'z';
    printf("name = %c\n",name);
    
    //调用函数
    void test();
    test();
    
    //单双精度的差别
    //float精度是小数点后6位有效数字，double是15位
    float num4 = 3.1415916f;
    printf("num4 = %.7f\n",num4);
    double num5 = 3.1415926;
    printf("num5 = %.7f\n",num5);
    
    //0md%表示不足部分补0
    for (i = 0; i<5; i++) {
        printf("数字 = %02d\n",i);
    }
    for (i = 0; i<5; i++) {
        printf("嘿嘿 = %05d\n",i);
    }
    
    //scanf函数是一个阻塞式函数，执行后会等待用户输入，如果用户不输入任何内容，会一直等待
    int age = 100;
    printf("请输入年龄\n");
    //用户输入年龄
    scanf("%d",&age);//&是取地址符号
    printf("age = %d\n",age);
    
    void score();
    score();
    
    return 0;
}
void score(){
    float a  = 99.f;
    printf("请输入分数");
    scanf("%f",&a);
    printf("分数为 = %.2f\n",a);
    
}
void test() {
    printf("test = %.2f\n",num3);
}
