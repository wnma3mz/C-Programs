# include <stdio.h>

int main()
{
    int stamp, i=2, j, count=0, n, m, sum=0;
    scanf("%d %d", &n, &m);
//  printf("%d %d", n, m);
    while (count<m)
    {
        stamp = 1;
        for (j=2;j<i;j++)
        {
            if (i%j==0) 
            {
                stamp = 0;
                break;
            }
        }
        if (stamp == 1)
        {
            count++;
            if (count>=n)
            {
                sum+=i;             
            }
//          printf("%d\n", i);
        }
        i++;
    }
    printf("%d", sum);
}

"""
题目内容：
我们认为2是第一个素数，3是第二个素数，5是第三个素数，依次类推。
现在，给定两个整数n和m，0<n<=m<=200，你的程序要计算第n个素数到第m个素数之间所有的素数的和，包括第n个素数和第m个素数。

注意：是第n个素数到第m个素数，不是n和m之间的素数！

输入格式:
两个正整数，第一个表示n，第二个表示m。

输出格式：
一个整数，表示第n个素数到第m个素数之间所有的素数的和，包括第n个素数和第m个素数。

输入样例：
2 4


输出样例：
15
"""