#include<stdio.h>
int main()
{
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    int x=a;
    int y=b;
    int z=c;
    if (x>y)
    {
        int tmp=x;
        x=y;
        y=tmp;
    }
    if (x>z)
    {
        int tmp=x;
        x=z;
        z=tmp;
    }
    if (y>z)
    {
        int tmp=y;
        y=z;
        z=tmp;
    }
    
    printf("%d\n%d\n%d\n",x,y,z);
    printf("\n%d\n%d\n%d",a,b,c);
    
    return 0;
}