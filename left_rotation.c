/* A left rotation operation on an array of size n shifts each of
   the array's elements 1 unit to the left
*/
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int i,j,n,d;
    scanf("%d",&n);
    scanf("%d",&d);
    int a[n],b[n];
    for(i=0;i<=n-1;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<=(n-d-1);i++)
        {
        b[i]=a[d+i];
    }
    for(j=0;j<=d-1;j++)
        {
        b[n-d+j]=a[j];
    }
    for(i=0;i<=n-1;i++){
        printf("%d ",b[i]);
    }
        
    return 0;
}

