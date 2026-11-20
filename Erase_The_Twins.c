#include <stdio.h>
#include <string.h>
int main() 
{
    int t;
    scanf("%d",&t);
    while (t--) 
    {
        int n;
        scanf("%d",&n);
        char s[1000005];
        scanf("%s",s);
        char stack[1000005];
        int top=-1;
        for (int i=0;i<n;i++) 
        {
            if(top==-1) 
            {
                top++;
                stack[top]=s[i];
            } 
            else 
            {
                if(stack[top]==s[i]) 
                {
                    top--;
                } 
                else 
                {
                    top++;
                    stack[top]=s[i];
                }
            }
        }
        printf("%d\n",top+1);
    }
    return 0;
}