//Given a time in 12-hour AM/PM format, convert it to military (24-hour) time.
#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int k=1;
    char* time = (char *)malloc(10240 * sizeof(char));
    char res[10];
    scanf("%s",time);
    if(time[8]=='P'){
        
        if(time[0]=='1' && time[1]=='2'){
            res[1]=time[1];
            res[0]=time[0];
        }
        else{           
            res[1]=time[1]+2;
            res[0]=time[0]+1;
        }
        for(int i=2;i<8;i++){
                res[i]=time[i];
        }   
    }else{
        if(time[0]=='1' && time[1]=='2'){
            res[1]=time[1]-2;
            res[0]=time[0]-1;
        }
        else{           
            res[1]=time[1];
            res[0]=time[0];
        }
        for(int i=2;i<8;i++){          
             res[i]=time[i];           
           }
    }
    res[8]='\0';
    printf("%s",res);
    return 0;
}
