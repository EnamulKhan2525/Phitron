    #include<stdio.h>
    void recursion(int n)
    {
        if(n==1)
        {
            printf("1");
            return;
        }
        printf("%d ",n);
        recursion(n-1);
        
    }
    int main ()
    {
        int n;
        scanf("%d",&n);
        recursion(n);
        return 0;
    }