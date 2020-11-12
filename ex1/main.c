#include <stdio.h>
#include "myMath.h"

int main  ()
{
    
    double tempSum, tempSum1 ,ans ,x;
    
 printf("Please insert a real number:\n");
 scanf("%lf",&x);
 tempSum = add(Exponent((int)(x)),Power(x,3));
 ans = sub(tempSum,2);
 printf("The value of f(x)=e^x+x^3-2 at the point %lf is %0.4lf\n",x, ans);  // first excersize;
 tempSum = mul(3,x);
 tempSum1 = mul(2,Power(x,2));
  ans = add(tempSum,tempSum1); 
 printf("The value of f(x)=3x+2x^2 at the point %lf is %0.4lf\n" , x,ans); // second excersize
 tempSum=mul(4,Power(x,3));
 tempSum1=div(tempSum,5);
 ans = sub(tempSum1,mul(2,x)); 
  printf("The value of f(x)=(4x^3)/5-2x at the point %lf is %0.4lf\n" , x,ans); // thrird excersize
 return 0;
}