#include <stdio.h>
int main()
{
    double A,B,C,D,P;
    scanf ("%lf%lf%lf", &A, &B, &C);
    if(A<B+C&&B<A+C&&C<A+B)
    {
        P=A+C+B;
    printf("Perimetro = %.1lf\n", P);
    }
    else
    {
        D=.5*(A+B)*C;
        printf("Area = %.1lf\n",D);
    }
    return 0;
}
