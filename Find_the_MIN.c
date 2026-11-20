#include <stdio.h>
#define MAX 3000005
int heap[MAX];
int sz=0;
void swap(int *a,int *b) 
{
    int t=*a;
    *a=*b;
    *b=t;
}
void push(int x) 
{
    sz=sz+1;
    heap[sz]=x;
    int i=sz;
    while (i > 1) 
    {
        int parent = i / 2;
        if (heap[parent] <= heap[i]) 
        {
            break;
        }
        swap(&heap[parent], &heap[i]);
        i = parent;
    }
}
void pop() 
{
    heap[1]=heap[sz];
    sz=sz-1;
    int i =1;
    while (1) {
        int left =i*2;
        int right =i*2+1;
        int smallest =i;
        if (left <= sz && heap[left] < heap[smallest]) 
        {
            smallest = left;
        }
        if (right <= sz && heap[right] < heap[smallest]) 
        {
            smallest = right;
        }
        if (smallest == i) 
        {
            break;
        }
        swap(&heap[i], &heap[smallest]);
        i = smallest;
    }
}
int main() 
{
    int q;
    scanf("%d", &q);
    while (q--) 
    {
        int type;
        scanf("%d", &type);
        if (type == 1) 
        {
            int x;
            scanf("%d", &x);
            push(x);
        } 
        else 
        {
            if (sz == 0) 
            {
                printf("empty\n");
            } 
            else 
            {
                int mn = heap[1];
                printf("%d\n", mn);
                while (sz > 0 && heap[1] == mn) 
                {
                    pop();
                }
            }
        }
    }
    return 0;
}