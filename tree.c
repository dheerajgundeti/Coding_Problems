/*Tree goes through 2 cycles of growth every year. Each spring, it doubles in height.
 Each summer, its height increases by 1 meter.
 person plants a Utopian Tree sapling with a height of 1 meter at the onset of spring.
 How tall will her tree be after N growth cycles
*/
#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int n,k; 
    scanf("%d",&n);
    int a[n],res[n];
    for(int a0=0;a0<n;a0++)
        scanf("%d",&a[a0]);
    for(int i=0;i<n;i++){
        k=1;
        res[i]=1;
        while(k<=a[i]){
            if(k%2!=0)
                res[i]=2*res[i];
            else
                res[i]=res[i]+1;
            k++;
        }        
    }
    for(int i=0;i<n;i++)
        printf("%d\n",res[i]);
    return 0;
}
