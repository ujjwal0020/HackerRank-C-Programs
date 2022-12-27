#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,n[1000];
    int size;
    scanf("%d",&size);
    for(i=0;i<size;i++)
    {
        scanf("%d",&n[i]);
    }
    for(i=size-1;i>=0;i--)
    {
        printf("%d\t",n[i]);
    }
}
