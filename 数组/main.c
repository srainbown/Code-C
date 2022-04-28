//
//  main.c
//  数组
//
//  Created by 紫川秀 on 2022/4/28.
/*
 数组：存储相同类型，若干变量，有序形式
    数组类型 数组名[数组长度]
    int sum[5]  定义了一个int类型的数组，数组名是sum，只能存放5个int类型的数据
 冒泡排序
 选择排序
 */

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int a[10];
    float b[10];
    char c[5+5];
    int d[5] = {1,2,3,4,5};
    printf("%d  %d  %d  %d  %d\n",d[0],d[1],d[2],d[3],d[4]);
    d[4] = 12;
    printf("%d  %d  %d  %d  %d\n",d[0],d[1],d[2],d[3],d[4]);
    //正序遍历数组
    
    for (int i=0; i<5; i++) {
        printf("%d\t",d[i]);
    }
    printf("\n");
    //倒叙遍历数组
    for (int i=4; i>=0; i--) {
        printf("%d\t",d[i]);
    }
    printf("\n");
    
    void test(int arr[]);
    test(d);
    //冒泡排序
    int arr[10] = {100,13,37,22,67,43,67,33,88,77};
    void maoPao(int arr[],int len);
    maoPao(arr,10);
    for (int i=0; i<10; i++) {
        printf("%d\t",arr[i]);
    }
    printf("\n");
    //选择排序
    void xuanZe(int arr[],int len);
    xuanZe(arr, 10);
    for (int i=0; i<10; i++) {
        printf("%d\t",arr[i]);
    }
    printf("\n");
    
    return 0;
}

//形参为数组
void test(int arr[]){
    printf("arr==%d  %d  %d  %d  %d\n",arr[0],arr[1],arr[2],arr[3],arr[4]);
}

void maoPao(int arr[],int len){
    int temp = 0;
    for (int i=0; i<len-1; i++) {
        for (int j=0; j<len-1-i; j++) {
            if (arr[j]>arr[j+1]) {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

void xuanZe(int arr[],int len){
    int temp = 0;
    for (int i=0; i<len-1; i++) {
        for (int j=i+1; j<len; j++) {
            if (arr[i]>arr[j]) {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}
