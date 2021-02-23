#include <stdio.h>
#include<string.h>
#include"mystring.h"
int mystrlen(char *s1)
{
    int i, n = 0;
    
    for (i=0; s1[i] != '\0'; i++)
    {
        n++;
    }
    return n;
}
int mystrcmp(char *s1, char *s2)
{
    while( ( *s1 != '\0' && *s2 != '\0' ) && *s1 == *s2 )
    {
        s1++;
        s2++;
    }

    if(*s1 == *s2)
    {
        return 0; // strings are identical
    }

    else
    {
        return 1;
    }
}
char *mystrcpy (char * s1, char * s2)
 {
    //char s1[100]="program", s2[100];
    int i;

    for (i = 0; s1[i] != '\0'; ++i) 
    {
        s2[i] = s1[i];
    }
    s2[i] = '\0';
    return s2;
}
char* mystrcat(char* s1, char* s2)
{
    // make ptr point to the end of destination string
    char* ptr = s2 + mystrlen(s2);
 
    // Appends characters of source to the destination string
    while (*s1 != '\0')
        *ptr++ = *s1++;
 
    // null terminate destination string
    *ptr = '\0';
 
    // destination is returned by standard strcat()
    return s2;
}