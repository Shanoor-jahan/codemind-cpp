#include<stdio.h>
#include<math.h>
int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    for(int i=a+1;i<b;i++)
    {
        int sq=(i*i);
        int cu=pow(i,3);
        printf("%d %d %d
",i,sq,cu);
    }
}