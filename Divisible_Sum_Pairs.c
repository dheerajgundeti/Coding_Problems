/*You are given an array of n integers,a0,a1,a2,.....,an-1 , and a positive integer, k.
print the number of (i,j) pairs where i<j  and ai + aj is evenly divisible by k .
*/
#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int n,k,count; 
    scanf("%d %d",&n,&k);
    int *a = malloc(sizeof(int) * n);
    for(int a_i = 0; a_i < n; a_i++){
       scanf("%d",&a[a_i]);
    }
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){           
            if((a[i]+a[j])%k==0)
                 count++;
        }
    }
    printf("%d",count);
    return 0;
}
