#include"myutils.h"
#include"bitmask.h"
#include"mystring.h"
#include<stdio.h>
int main() 
{ 
//     int num = 5,n; 
//        int res=0, k = 1;
//     printf("Factorial of %d is %d", num, factorial(num)); 
//     return 0; 
//     isPalindrome("abba"); 
//     isPalindrome("abbccbba"); 
// 	res=prime(num);
// 	if(res==0)
// 		printf("\n%d IS A PRIME NUMBER",num);
// 	else
// 		printf("\n%d IS NOT A PRIME NUMBER",num);
//      printf("Sum of 10, 20 and 30 = %d\n",  vsum(3, 10, 20, 30) );
//    printf("Sum of 4, 20, 25 and 30 = %d\n",  vsum(4, 4, 20, 25, 30) );

//     printf("%d with %d-th bit Set: %d\n", 
//            n, k, set(n, k)); 
//     printf("%d with %d-th bit Cleared: %d\n", 
//            n, k, reset(n, k)); 
//     printf("%d with %d-th bit Toggled: %d\n", 
//            n, k, flip(n, k)); 
//     printf("\nLength of the String is : %d", mystrlen(n));
//     char* str = (char*)calloc(100, 1);
//     my_strcat(str, "Hello ");
//     my_strcat(str, "World ");
//     puts(str);
//      char s1[100]="Hello",s2[100];
//     mystrcpy(s2,s1);
//     printf("String 1: %s \nString 2: %s\n",s1,s2);
//     printf("strcmp(\"a\", \"a\") = %d\n", mystrcmp("a", "a") );
//     return 0;*/



     char s1[20]= "Check-string";
    char s2[20];
    char s3[20]="Check-string";
    int n = 5, k=1;
    int m = 121;
    int o;
    int a=5,b;
    printf("String length = %d\n", mystrlen(s1));
    printf("String s1: %s  String s2: %s\n",s1,mystrcpy(s1,s2));
    printf("String s2: %s  String s2: %s\n",s2,mystrcpy(s1,s2));
    printf(" 0->equal 1->not equal\n");
    printf("Checking.... %d\n",mystrcmp(s1,s3));
    printf("Factorial of %d = %d\n", n,factorial(n));
    printf("0->Not prime 1->Prime\n");
    printf("%d\n",isPrime(n));
    printf("0->Palindrome 1->Not Palindrome");
    printf("%d\n",isPalindrome(m));
    printf("Vsum of 2 numbers =%d", vsum(2,10,20));
     printf("Set %d = %d",n,reset(n, b));
       printf("Set %d = %d",n,set(n, k));
    return 0;
}


