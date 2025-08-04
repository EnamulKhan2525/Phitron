#include<stdio.h>
#include<string.h>
// return_type name(Parameter)
// {
//     code;
//     return what;
// }
int sum(int x, int y)
{
    int result=x+y;
    return result;
}
int main ()
{
    int x,y;
    scanf("%d %d",&x,&y);
    int result=sum(x,y);
    printf("%d",result);
    printf("\n%d",sum(15,15));
    return 0;
}