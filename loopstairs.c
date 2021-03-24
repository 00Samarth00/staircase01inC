#include<stdio.h>
main()
{
    int n,i,x=0;
    printf("Enter the number of stairs you want to see : ");
    scanf("%d",&n);
    for(i=0;i<=n;++i)
    {
        for(x=0;x<=i;++x)
            {
            printf("01");}
        printf("\n");
    }

}
