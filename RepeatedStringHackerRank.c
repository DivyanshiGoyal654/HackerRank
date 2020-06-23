#include <assert.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char* s = (char *)malloc(512000 * sizeof(char));
    scanf("%s",s);
    long n; 
    scanf("%ld",&n);
    int len=strlen(s);
    long int count=0;
    for(int i=0;(i<len && i<n);i++)
    {
        if(s[i]=='a')
            count++;
    }
    long rem=n%len;
    long quo=n/len;
    if(quo==0)
        printf("%ld",count);
    else
      {
        count=count*quo;
         for(int i=0;i<rem;i++)
    {
        if(s[i]=='a')
            count++;
    }
        printf("%ld",count);
        
    }  
    return 0;
}