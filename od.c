#include <stdio.h>
int main()
{
    int i, start, end;
    scanf("%d %d", &start,&end);
    if(start%2==0)
    {
        start++;
    }
    for(i=start; i<=end; i+=2)
    {
        printf("%d ", i);
    }
}
