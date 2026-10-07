#include <math.h>
#include <stdio.h>

int main()
{
    float x,result;

    printf("Enter the value of x in radians: ");
    scanf("%f",&x);


    result= sin(x);

    printf("sin(%.2f)=%.4f\n",x,result);

    return 0;

}
