#include <stdio.h>
int main()
{
    int num, originalNum, rem, result = 0;
    scanf("%d", &num);
    originalNum = num;
    while (originalNum != 0)
    {
        rem = originalNum%10;
        result += rem*rem*rem;
        originalNum /= 10;
    }
    if(result == num)
        printf("yes");
    else
        printf("no");
}
