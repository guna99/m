#include <stdio.h>
int main()
{
    int n, i;
    unsigned long long factorial = 1;
    scanf("%d",&n);
    if (n < 0)
        printf("");
    else
    {
        for(i=1; i<=n; ++i)
        {
            factorial *= i;              
        }
        printf("%llu",factorial);
    }
    return 0;
}
