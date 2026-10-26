#include<stdio.h>
#include<string.h>
int main()
{
char str[] = " c programming is simple to learn";
char keyword[50];
printf("string:%s\n",str);
printf("enter the keyword to search:");
scanf("%s",&keyword);
if(strstr(str,keyword)!=NULL)
{
printf("YES,keyword is found:");
}
else
{
printf("NO,keyword is not found:");
}
return 0;
}
