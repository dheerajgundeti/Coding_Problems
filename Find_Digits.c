
//problem from hackerrank/algorithms/implementation
/*Given an integer,N, traverse its digits (d1,d2,...,dn) and determine how many digits evenly divide N 
 (i.e.: count the number of times N divided by each digit di has a remainder of 0). Print the number of evenly divisible digits.
*/
#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int t,temp,rem; 
    scanf("%d",&t);
    int a[t];
    for(int a0 = 0; a0 < t; a0++) 
        scanf("%d",&a[a0]);
    for(int i=0;i<t;i++){
        int count=0;
        temp=a[i];
        while(a[i]>0){
            rem=a[i]%10;
            if(rem!=0){
                if(temp%rem==0)
                   count++;
            }
             a[i]=a[i]/10;
        }
        
            printf("%d\n",count);
    }
    
    return 0;
}

