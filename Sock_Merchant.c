/*John's clothing store has a pile of n loose socks where each sock i is labeled with an integer,ci , denoting its color.
 He wants to sell as many socks as possible, but his customers will only buy them in matching pairs. 
Two socks, i and j, are a single matching pair if ci=cj .
Given n and the color of each sock, print pairs of socks can John sell?
*/
#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int n,a,count=0; 
    scanf("%d",&n);
    int *c = malloc(sizeof(int) * n);
    for(int c_i = 0; c_i < n; c_i++){
       scanf("%d",&c[c_i]);
    }
     for (int i=0;i<n;i++){
        for (int j=i+1;j<n;j++){
            if (c[i] > c[j]){
                a =  c[i];
                c[i] =c[j];
                c[j] = a;
                    }
                }
            }
    for(int i=0;i<n;i++){
        if(c[i]==c[i+1]){
            count++;
            i++;
        }
    }
    printf("%d",count);
    return 0;
}

