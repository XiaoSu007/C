#include <stdio.h>
int main()
{
    int age=0;
    int i=0;
    int z=0;
    int m=0;
    while(i<1)
    {
    while(m<3)
    {
    scanf("%d",&age);
    if (age<18)
        printf("未成年\n");
    else
    {
    if (age>250-1)
        printf("恭喜你，打破了吉尼斯世界纪录！！\n");
    else
        printf("成年\n");
    }
    m++;
    }
    printf("是否继续?(1/0)>:     \n");
    scanf("%d",&z);
    if (z==1)
        m--;
    else
        i++;
    }
    return 0;
}
