#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    
    int n;
    scanf("%d", &n);
    int s=0;
   while(n!=0)
   {
       
       s=s+n%10;
       n=n/10;
   }
   printf("%d",s);
    return 0;
}
