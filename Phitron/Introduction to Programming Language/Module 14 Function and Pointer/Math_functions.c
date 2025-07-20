#include<stdio.h>
#include<math.h>
int main()
{
    // double x;
    // scanf("%lf",&x);
    // int ans=ceil(x);
    // printf("%d\n",ans);
    // int anss=floor(x);
    // printf("%d\n",anss);
    // int ansss=round(x);
    // printf("%d\n",ansss);


    // int y;
    // scanf("%d",&y);
    // int sq=sqrt(y);
    // printf("%d",sq);

    
    int x,y;
    scanf("%d %d",&x ,&y);
    int ans=pow(x*1.0,y*1.0);
    printf("%d",ans);
    return 0;
}