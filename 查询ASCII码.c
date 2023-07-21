#include <stdio.h>

int main() 
{
    int a = 0;
    int z = 0;
    int ch = 0;

    // 提示用户输入0或1
    printf("(1/0):<");
    scanf("%d", &z);

    // 清除输入缓冲区中的多余字符
    while ((ch = getchar()) != '\n') 
    {
        ;
    }

    if (z == 0) {
        // 进入第一个代码块，用户输入为0
        while (1) {
            // 提示用户输入一个整数
            scanf("%d", &a);
            // 打印该整数对应的字符形式
            printf("%c\n", a);
            // 清除输入缓冲区中的多余字符
            while ((ch = getchar()) != '\n') 
            {
                ;
            }
            // 提示用户是否继续
            printf("是否继续？(0/1) :<\n");
            // 读取用户的回答
            scanf("%d", &z);
            // 清除输入缓冲区中的多余字符
            while ((ch = getchar()) != '\n') 
            {
                ;
            }
            // 如果用户输入0，则跳出循环，否则继续循环
            if (z == 0) 
            {
                break;
            }
        }
    }
    else if (z == 1) {
        // 进入第二个代码块，用户输入为1
        while (1) {
            // 提示用户输入一个字符
            a = getchar();
            // 打印该字符的ASCII值
            printf("%d\n", a);
            // 提示用户是否继续
            printf("是否继续？(0/1) :<\n");
            // 清除输入缓冲区中的多余字符
            while ((ch = getchar()) != '\n') {
                ;
            }
            // 读取用户的回答
            scanf("%d", &z);
            // 清除输入缓冲区中的多余字符
            while ((ch = getchar()) != '\n') 
            {
                ;
            }
            // 如果用户输入0，则跳出循环，否则继续循环
            if (z == 0) 
            {
                break;
            }
        }
    }
    else 
    {
        // 用户输入既不是0也不是1，无效输入
        printf("无效输入。程序终止。\n");
        return 1;
    }

    return 0;
}
//注释由人工智能生成
