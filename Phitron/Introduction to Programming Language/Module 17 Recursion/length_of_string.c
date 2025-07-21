#include<stdio.h>
int fun(char a[], int i)
{
    if(a[i]=='\0')return 0; //Base case
     int l=fun(a,i+1);
     return l+1; 
}
int main()
{
    char a[6]="hello";
    int l = fun(a,0);
    printf("%d\n",l);
    return 0;
}