#include<stdio.h>
#include<math.h>
int main()
{
float a,b,c,d,root1,root2;
printf("enter the cofficients of a,b,c\n");
scanf("%f%f%f",&a,&b,&c);
d= b*b-4*a*c;
if(d>0)
{
printf("roots are real and different.\n");
root1= (-b+sqrt(d))/(2*a);
root2= (-b-sqrt(d))/(2*a);
printf("root1=%f,root2=%f\n",root1,root2);
}
else if(d=0)
{
printf("roots are real and equal.\n");
root1=root2= -b/(2*a);
printf("root1=root2=%f\n",root1);
}
else
{
printf("roots are imaginary. (no real roots)");
}
return 0;
}
