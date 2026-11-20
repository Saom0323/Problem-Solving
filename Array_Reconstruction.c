#include <stdio.h>
int main() 
{
    int t;
    scanf("%d",&t);
    while (t--)
    {
        int n;
        scanf("%d",&n);
        long long sum_current=0;
        long long x;
        for (int i=0;i<n-2;i++)
        {
            scanf("%lld",&x);
            sum_current += x;
        }
        long long total_sum;
        scanf("%lld",&total_sum);
        long long M=total_sum-sum_current;
        printf("%lld\n", M + 1);
    }
    return 0;
}