#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int i = 4;
    double d = 4.0;
    char s[] = "HackerRank ";

    
    // Declare second integer, double, and String variables.
    int j;
    double e;
    char t[500] = "junk text";
    
    // Read and save an integer, double, and String to your variables.
    scanf("%d", &j);
    scanf("%lf", &e);
    // Print the sum of both integer variables on a new line.
    fgets(t, sizeof(t), stdin);
    fgets(t, sizeof(t), stdin);
    // Print the sum of the double variables on a new line.
    printf ("%d \n", i+j);
    // Concatenate and print the String variables on a new line
 printf ("%.1f \n", d+e);
    // The 's' variable above should be printed first.
 printf ("%s%s \n", s, t);
    return 0;
}