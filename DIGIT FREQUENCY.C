#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int i,j,count=0;
    char u[]={'0','1','2','3','4','5','6','7','8','9'};
        char s[1000];
    scanf("%s",s);
    for(i=0;i<10;i++)
    {
        count=0;
        {
            for(j=0;j<strlen(s);j++)
            {
            if(s[j]==u[i])
            {
            count++;
            }
            }
        }
        
        printf("%d ",count);
    }
    
    return 0;
}
