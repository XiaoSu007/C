#include <stdio.h>
int a=0;
void x()
{
    
    printf("%d.洗一个碗\n",a);
    a++;
}


int main()
{
    printf("开始洗碗\n");
    extern int a;
    while(a<20001)
    {
        x();
    };
    if(a>=20001)
        printf("买电脑\n");
}
