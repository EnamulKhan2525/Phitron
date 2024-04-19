#include<stdio.h>
int main (){
    int x;
    scanf("%d",&x);
    int even=0;
    for (int i = 1; i <= x; i++)
    {
        if (i%2 == 0)
        {
            printf("%d\n",i);
            even++;
        }
    }
    if (even==0)
    {
        printf("-1");
    }
    return 0;
}