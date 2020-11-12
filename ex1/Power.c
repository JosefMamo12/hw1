#include "myMath.h"


double Exponent(int x)
{
    float exponent= 2.718281828 , ans = 1 ;
    int ifNegativeX = x;     
    if(x==0){
    return ans;
    }
    if(x<0){
    exponent  = 1/exponent;
    }
    while(ifNegativeX>0)
    {
        ans*= exponent;
        ifNegativeX--;
    }
    return ans;
    }

 double Power (double x, int y)
 {
    double ans = 1;
    if(y==0)
    {
    return ans;
    }
   else if(x==0)
    return ans-1;

    else
    {
        while(y>0)
        {
            ans*=x;
            y--;
        }
    } 
    return ans;
}