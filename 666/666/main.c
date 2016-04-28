#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
  /*  printf("Hello, World!\n");
    //计算一个数的平方根
    int a;
    printf("请输入一个数：");
    scanf("%d",&a);
    double b;
    b=sqrt(a);
    printf("%lf\n",b);*/
    //c语言计算用一分钱，二分钱，五分钱组成一元钱的形式。
    // int m,m1,m2;
    //int a1=1,a2=2,a3=5;
    //yiyuan=100;
    for(int i=0;i<=10;i++)
        for(int j=0;j<=5;j++)
            for(int k=0;k<=2;k++)
                if(i*1+j*2+k*5==10)
                    printf("%d个1分,%d个2分,%d个5分组成\n",i,j,k);
    

 
   
        int cnt=0, i,j,k ;
        for( i=0;i<=20;i++ )
            for( j=0;j<=50;j++ )
                for( k=0;k<=100;k++ )
                    if ( i*5 + j*2 + k == 100 ) //5分 2分 1分
                        cnt++;
        printf("%d\n", cnt );
      return 0;
}
