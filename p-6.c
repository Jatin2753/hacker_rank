#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    
    int n,sum=0,a;
    scanf("%d", &n);
   for(int i=0;i<10;i++)
   {
       a=n%10;
       sum=sum+a;
       n=n/10;
   }
   printf("%d",sum);
    return 0;
}
