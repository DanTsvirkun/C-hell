#include <stdio.h>

int main()
{
    float rootbeer[10], things[10][5], *pf, value = 2.2;
    rootbeer[2] = value;    // valid;
    scanf("%f", &rootbeer); // invalid
    // rootbeer = value;           invalid
    printf("%f\n", rootbeer);   // invalid
    things[4][4] = rootbeer[3]; // valid
    // things[5] = rootbeer;       // invalid
    // pf = value;    // invalid
    pf = rootbeer; // valid

    return 0;
}