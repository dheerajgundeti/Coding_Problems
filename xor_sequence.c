//problem from hackerrank/bit manipulation-xor sequence
#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int n;
    scanf("%d",&n);
    unsigned long long int l[n],r[n],r0=0;
    for(int i=0;i<n;i++){
          scanf("%llu %llu",&l[i],&r[i]);
        if(r[i]>=r0)
            r0=r[i];
    }
    unsigned long long a[r0],b;
    a[0]=0;
    for(int i=1;i<=r0;i++){
        a[i]=a[i-1]^i;
    }
    for(int i=0;i<n;i++){
        b=0;
        for(int j=l[i];j<=r[i];j++){
            b=b^a[j];
        }
        printf("%llu\n",b);
    }
    
    
    return 0;
}
