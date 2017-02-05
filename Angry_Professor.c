/*A Discrete Mathematics professor has a class of N students. Frustrated with their lack of discipline,
  he decides to cancel class if fewer than K students are present when class starts.
  Given the arrival time of each student, determine if the class is canceled.
*/
#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int t,count; 
    scanf("%d",&t);
    int k[t],n[t];
    int a[t][1000];
    for(int a0 = 0; a0 < t; a0++){
        scanf("%d %d",&n[a0],&k[a0]);
        for(int a_i = 0; a_i < n[a0]; a_i++){
           scanf("%d",&a[a0][a_i]);
        }
    }
    for(int i=0;i<t;i++){
        count=0;
        for(int j=0;j<n[i];j++){
            if(a[i][j]<=0)
                count++;
        }
        if(count>=k[i])
            printf("NO\n");
        else
            printf("YES\n");
    }
    return 0;
}

