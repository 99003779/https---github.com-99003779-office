#include <stdio.h> 
#include<stdarg.h>

// Function to find factorial of given number 
int factorial(int n) 
{ 
    if (n == 0) 
        return 1; 
    return n * factorial(n - 1); 
} 
int isPalindrome(int n) 
{
 int r,sum=0,temp;    

temp=n;    
while(n>0)    
{    
   r=n%10;    
   sum=(sum*10)+r;    
   n=n/10;    
}    
if(temp==sum)    
    return 0;    
else    
   return 1;
}
int isPrime(int n)
{
	int i;
	for(i=2;i<=n/2;i++)
	{
		if(n%i!=0)
			continue;
		else
			return 1;
	}
	return 0;
}
int vsum(int num_args, ...) 
{
   int val = 0;
   va_list ap;
   int i;

   va_start(ap, num_args);
   for(i = 0; i < num_args; i++) {
      val += va_arg(ap, int);
   }
   va_end(ap);
 
   return val;
}