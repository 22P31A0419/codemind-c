#include<stdio.h>
int main()
{
    int n,s;
    while(n!=-1)
    {
        scanf("%d",&n);
        if(n==-1)
        {
            break;
        }
        s=n*n;
        printf("%d
",s);
    }
}