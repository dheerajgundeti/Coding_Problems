//problem from hackerrank/algorithms/implementation
/*Given five positive integers printing minimum and maximum values
 that can be calculated by summing exactly four of the five integers
*/
#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    long int a,b,c,d,e; 
    long long int tot;
    long  long int z[5];
    scanf("%ld %ld %ld %ld %ld",&a,&b,&c,&d,&e);
    tot=a+b+c+d+e;
    z[0]=tot-a;
    z[1]=tot-b;
    z[2]=tot-c;
    z[3]=tot-d;
    z[4]=tot-e;
    long long int max=z[0],min=z[0];
    for(int i=1;i<5;i++){
        if(z[i]>=max)
            max=z[i];
        if(z[i]<=min)
            min=z[i];
    }
    printf("%lld %lld",min,max);
    
    
    
    return 0;
}
