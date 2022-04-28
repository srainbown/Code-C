//
//  main.c
//  C7
//
//  Created by 紫川秀 on 2022/4/19.
//

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
