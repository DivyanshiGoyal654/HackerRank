#include <assert.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
int N; 
    scanf("%d",&N);
    
        if ((N%2) == 1)
        { printf ("Weird");}
    else if ((N >= 2) && (N<=5))
        { printf ("Not Weird");}
    else if ((N >= 6) && (N<=20))
        { printf ("Weird");}
    else 
        { printf ("Not Weird");}
    return 0;
}