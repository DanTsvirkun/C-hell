#include <stdio.h>
void reorder(float *a, float *b) {         
    int t = *a;
    *a = *b;
    *b = t;
    }

int main (void) {   
    float a=15, b=-6;   
    reorder (&a, &b);   
    printf("%f %f\n", a, b);    
    return  0;  

}