//
//  main.c
//  Day17_1
//
//  Created by lk on 16/1/8.
//  Copyright © 2016年 lk. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    printf("Hello, World!\n");
    //计算一个数的平方根
    int a;
    printf("请输入一个数：");
    scanf("%d",&a);
    double b;
    b=sqrt(a);
    printf("%lf\n",b);
  //c语言计算用一分钱，二分钱，五分钱组成一元钱的形式。
   // int m,m1,m2;
    //int a1=1,a2=2,a3=5;
    //yiyuan=100;
    for(int i=0;i<=100;i++)
    {
        for(int j=0;j<=50;j++)
        {
            for(int k=0;k<=20;k++)
            {
               if(1*i+2*j+5*k==100)
               {
                 printf("一元钱可以由％d个1分,％d个2分,％d个5分组成\n",i,j,k);
               }
            }
        }
        
    }
    
    
    
    
    
    
    
    return 0;
}
