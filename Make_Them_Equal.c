#include <stdio.h>
int main() {
    int t;
    scanf("%d", &t);
    while (t--) 
    {
        int n, k;
        scanf("%d %d", &n, &k);
        char a[100005], b[100005];
        scanf("%s", a);
        scanf("%s", b);
        int count = 0;
        for (int i = 0; i < n; i++) 
        {
            if (a[i] == '0' && b[i] == '1') 
            {
                count = count + 1;
            }
            else if (a[i] == '1' && b[i] == '0') 
            {
                count = count + 1;
            }
        }
        if (count <= k) 
        {
            printf("YES\n");
        }
        else 
        {
            printf("NO\n");
        }
    }
    return 0;
}