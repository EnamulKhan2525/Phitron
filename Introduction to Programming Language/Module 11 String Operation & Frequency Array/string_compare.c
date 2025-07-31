#include<stdio.h>
#include<string.h>
int main ()
{
    char a[100],b[200];
    scanf("%s %s",a ,b);
    int i=1;
    while (i)
    {
        // Checking Null
        if (a[i] == '\0' && b[i] == '\0')
        {
            printf("A and B quall\n");
            break;
        }
        else if (a[i]=='\0')
        {
            printf("A small and B big\n");
            break;
        }
        else if (b[i]=='\0')
        {
            printf("B small and A big\n");
            break;
        }
        
        if (a[i]==b[i])
        {
            i++;
        }
        else if (a[i] < b[i])   
        {
            printf("A small and B big\n");
            break;
        }
        else 
        {
            printf("B small and A big\n");
            break;
        }
    }
    
    return 0;
}