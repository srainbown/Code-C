//
//  main.c
//  文件
//
//  Created by 紫川秀 on 2022/4/28.
//
/*
 include是C预处理指令
 1.include “”包含的是一个用户自定义的文件，可以是头文件，也可以是普通文件
    在当前文件所在路径下查找
    如果上面没有找到，到编译器include路径查找
    如果include路径没有找到，到系统的include路径下查找
    如果都没有找到，则报错
 2.include <>包涵的是一个系统（编译器自带）的头文件
    到编译器include路径下查找
    如果没有找到就到系统include路径下查找
    如果都没有则报错
 */

#include <stdio.h>
#include "Caculator.h"
int main(int argc, const char * argv[]) {
    int a = jia(5, 7);
    printf("和==%d\n",a);
    
    
    return 0;
}
