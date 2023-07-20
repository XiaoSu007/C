#include <stdio.h>
#include <unistd.h>
int main()
{

    int m=250;
    int n=0;
    int i=0;
    printf("欢迎来到猜数字游戏\n");
    while (i<1)
    {   
    printf("输入数字:");
    scanf("%d",&n);
    if(m>n   &&   n<200)
    {
        printf("这个数字太小了\n");
    }
    if(m>n   &&   n>=200  &&    n<250   )
    {
        printf("这个数字小了,但很近了\n");
    }
    if(m<n   &&   n>300)
    {
        printf("这个数字太大了\n");
    }
    if(m<n   &&   n<=300    &&   n>250)
    {
        printf("这个数字大了,但很近了\n");
    }
    if(m==n)
    {
        printf("Yes\n");
        i++;
    }
    }
    printf(" #############         #          #             #    #########     \n");usleep(700000);
    printf(" #                   #   #        # #         # #    #             \n");usleep(700000);
    printf(" #                  #     #       #  #       #  #    #             \n");usleep(700000);
    printf(" #     #######     #       #      #   #     #   #    #########     \n");usleep(700000);
    printf(" #           #    ###########     #    #   #    #    #             \n");usleep(700000);
    printf(" #           #   #           #    #     # #     #    #             \n");usleep(700000);
    printf(" #############  #             #   #      #      #    #########     \n");usleep(700000);
    printf("\n");
    printf(" ############   #           #     #########      #########         \n");usleep(700000);
    printf(" #          #    #         #      #              #       #         \n");usleep(700000);
    printf(" #          #     #       #       #              #       #         \n");usleep(700000);
    printf(" #          #      #     #        #########      #########         \n");usleep(700000);
    printf(" #          #       #   #         #              #       #         \n");usleep(700000);
    printf(" #          #        # #          #              #        #        \n");usleep(700000);
    printf(" ############         #           #########      #         #       \n");usleep(700000);
    return 0;
}
