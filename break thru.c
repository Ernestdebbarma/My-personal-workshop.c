#include<stdio.h>
int gcd(int m, int n)
{
    if(m == 0)
    {
        return n;
    }
    else
    return gcd(n%m, m);
}

int main()
{
    int m, n;
    printf("give your two numbers in m_n order\n");
    scanf("%d %d", &m, &n);
    int ans = gcd(m,n);
    printf(" %d is the greates common divisor");

    return 0;
}
