#include<stdio.h>
int main()
{
float x,term,sinx=0;
int n,i;
printf("enter x (in radians):");
scanf("%f",&x);
printf("enter the number of terms:");
scanf("%d",&n);
term=x;
sinx=term;
for(i=1;i<n;i++){
term=-term*x*x/((2*i)*(2*i+1));
sinx+=term;
}-
printf("sin(%f)=%f\n"x,sinx);

return 0;
}
