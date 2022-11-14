#include <stdio.h>

int cnt = 0;
void move(int, char, char, char);

int main()
{
    int n;
    printf("请输入盘子的数量: \n");
    scanf("%d", &n);
    
    char a = 'A';
    char b = 'B';
    char c = 'C';

    move(n, a, b, c);

    printf("一共移动了%d次\n", cnt); 

    return 0;
}

void move(int n, char a, char b, char c)
{
    if (n == 1)
        printf("第%d次: %c -> %c\n", ++cnt, a, b);
    else
    {
        move(n - 1, a, c, b); //把n - 1个盘子从A移到C
        printf("第%d次: %c -> %c\n", ++cnt, a, b); //把最下面的盘子从A移到B
        move(n - 1, c, b, a); //再把n - 1个盘中从C移到B
    }
}
