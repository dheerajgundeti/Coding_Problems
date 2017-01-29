/*There are two kangaroos on an x-axis ready to jump in the positive direction (i.e, toward positive infinity).
 The first kangaroo starts at location x1  and moves at a rate of v1  meters per jump. The second kangaroo starts at
 location x2 and moves at a rate of v2 meters per jump.check whether they'll ever land at the same location at the same time
*/
#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int x1,v1,x2,v2;
    scanf("%d %d %d %d",&x1,&v1,&x2,&v2);
    if(x2>=x1 && v2<=v1){
        while(x1<=x2){
            if(x1==x2){
                   printf("YES");
                   return 0;
            }
            x1=x1+v1;
            x2=x2+v2;
        }
    }else if(x1>=x2 && v1<=v2){
        while(x2<=x1){
            if(x1==x2){
                   printf("YES");
                   return 0;
            }
            x1=x1+v1;
            x2=x2+v2;
        }
    }
    printf("NO");   
    return 0;
}

