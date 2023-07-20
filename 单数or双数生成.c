#include <stdio.h>
int a;
int z;
int main()
{
    printf("双or单/2or1\n");
    scanf("%d",&z);
    if (z==2)
    {
    scanf("%d",&a);
    while(a>0)
    {
        int b=a%2;
        if (b==0)
        {
            printf("%d\n",a);
        }
        a--;
    }
    }
    if (z==1)
    {
    scanf("%d",&a);
    while(a>0)
    {
        int b=a%2;
        if (b==1)
        {
            printf("%d\n",a);
        }
        a--;
    }
    }
    return 0;
}
