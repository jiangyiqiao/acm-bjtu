#include <stdio.h>
int Work()
{
    long long N,t;
    scanf("%lld",&N);
    if (N==1) return 1;
    for (t=1;N>t;t*=18)
        if (t*9>=N) return 1;
    return 0;
}
int main()
{
    if (Work()) printf("181818181818");
    else printf("ZBT");
    return 0;
}
