/* given an integer n,find each x satisfiying 0<=x<=n and n+x=x^x 
   print total number of x satisfying the criteria above.
*/
#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    long n;
    long ans=1;
    scanf("%ld",&n);
    while(n!=0){
        if(n%2==0)
            ans=ans*2;
        n=n>>1;
    }
    printf("%ld",ans);
    return 0;
}

