#include<stdio.h>  
int main()    
{    
int n,r,sum=0,temp;    
printf("enter the number to be checked =");    
scanf("%d",&n);    
temp=n;    
while(n>0)    
{    
r=n%10;    
sum=(sum*10)+r;    
n=n/10;    
}    
if(temp==sum)    
printf("Is palindrome number ");    
else    
printf("Not palindrome");   
return 0;  
}
