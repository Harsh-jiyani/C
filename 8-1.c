
//recurion
#include<stdio.h>
#include<math.h>
intPow(int a,int n)
{
    if (n==1)
    return a*pow(a,n-1);
    else
    return pow(a,n-1);
}
void main (){
    int result;
    result = pow(5,3);
    printf("%d",result);

}