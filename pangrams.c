//hackerrank/strings/pangrams
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    char s[1000];
    int *a;
    a=calloc(26,sizeof(int));
    int count=0;
    scanf ("%[^\n]%*c", s);   
    for(int i=0;i<strlen(s);i++){
        if(s[i]>=97 && s[i]<=122 && (a[s[i]-97])==0){
            a[s[i]-97]=1;
            count++;
        }
        if(s[i]>=65 && s[i]<=90 && (a[s[i]-65])==0){
            a[s[i]-65]=1;
            count++;
        }
    }
    if(count==26)
        printf("pangram");
    else
        printf("not pangram");
    return 0;
}
