#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int i,tc;
scanf("%d",&tc);
for(i=0;i<tc;i++)
{
char a[10001];
int i,len; 
scanf("%s", a);

len=strlen(a);


for(i=0;i<len;i++)
{
if(i%2==0)
{
printf("%c",a[i]);
} 
}

printf(" "); 

for(i=0;i<len;i++)
{
if(i%2==1)
{
printf("%c",a[i]);
} 
}

printf("\n"); 

}   
    return 0;
}
