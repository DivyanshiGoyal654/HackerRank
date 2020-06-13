#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    int N , a[100][100];
    scanf("%d",&N);
    int i,j,d1=0,d2=0;
    for(i=0;i<N;i++)
        for(j=0;j<N;j++)
        scanf("%d",&a[i][j]);
    for(i=0;i<N;i++)
        { 
      d1+=a[i][i];
        d2+=a[i][N-1-i];
       
    }
    int b=abs(d1-d2);
    printf("%d",b);
        
        
    
    return 0;
}