# include <stdio.h>
# include <math.h>
int main()
{
    int n;
    scanf("%d", &n);
    printf("%d=", n);
    if (isPrime(n) == 0 )
    {
        printf("%d", n);    
    }
    else
    {
        getPrime(n);
    }
    
}

int getPrime(int n)
{
    int i=2;
    while (i<=n)
    {
        if (n%i==0)
        {
            printf("%d", i);
            if (n!=i)
            {
                printf("x");
            }
            n /= i;
        }
        else
        {
            i++;
            while (isPrime(i)==1)
            {
                i++;
            }
        }
    }
}

int isPrime(int n)
{
    int i=2;
    int stamp=0;
    while (i<=sqrt(n))
    {
        if (n%i==0)
        {
            stamp=1;
            break;
        }
        i++;
    }
//  stamp为1，则该数为合数；为0，则该数为素数 
    return stamp;
}

"""
题目内容：
每个非素数（合数）都可以写成几个素数（也可称为质数）相乘的形式，这几个素数就都叫做这个合数的质因数。比如，6可以被分解为2x3，而24可以被分解为2x2x2x3。

现在，你的程序要读入一个[2,100000]范围内的整数，然后输出它的质因数分解式；当读到的就是素数时，输出它本身。

输入格式:
一个整数，范围在[2,100000]内。

输出格式：
形如：
n=axbxcxd
或
n=n
所有的符号之间都没有空格，x是小写字母x。

输入样例：
18

输出样例：
18=2x3x3
"""