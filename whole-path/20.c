#include <stdio.h>
#include <math.h>

double my_cos(double x);
int fact(int n);

int main()
{
    printf(" x    mycos(x)   cos(x)\n");
    for (double i = 0; i <= 1; i+=0.1)
    {
        printf("%1.1f    %1.3f      %1.3f\n", i,my_cos(i),cos(i));
    }
    
    return 0;
}

double my_cos(double x){
    double cos = 0;
    for (int i = 0; i < 11; i++)
    {
        cos+=(pow(-1,i)*pow(x,2*i))/fact(2*i);
    }
    return cos;
}

int fact(int n)
{
    return (n < 2) ? 1 : n * fact(n - 1);
}