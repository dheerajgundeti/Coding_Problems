//problem from hackerrank/algorithms/implementation
/* Anna and Brian order n items at a restaurant, but Anna declines to eat any of the k th item (where 0<=k<=n ) due to an allergy.
 When the check comes, they decide to split the cost of all the items they shared; however, Brian may have forgotten 
that they didn't split k th item and accidentally charged Anna for it.

You are given n,k the cost of each of the n items, and the total amount of money that Brian charged Anna for her
 portion of the bill. If the bill is fairly split, print Bon Appetit; otherwise, print the amount of money that 
Brian must refund to Anna.
*/
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n,k,anna,sum=0;
    scanf("%d %d",&n,&k);
    int a[n];
    for(int i=0;i<n;i++)
        scanf("%d",&a[i]);
    scanf("%d",&anna);
    for(int i=0;i<n;i++){
        if(i==k)
           continue;
        sum=sum+a[i];
    }
    if(sum/2==anna)
        printf("Bon Appetit");
    else{
        if(anna>sum/2)
            anna=anna-sum/2;
        else
            anna=sum/2-anna;
        printf("%d",anna);
    }
    return 0;
}

