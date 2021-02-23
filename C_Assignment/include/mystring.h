/**
 * @file mystring.h
 * @author Neha Tabassum (neha.tabassum@ltts.com)
 * @brief This file stores header for all the boxes
 * @version 0.1
 * @date 2021-02-23
 * 
 * @copyright Copyright (c) 2021
 * 
 */

# ifndef __MYSTRING_H__
# define __MYSTRING_H__
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int mystrlen(char *s1);
char *mystrcat(char *s1, char *s2);
int mystrcmp(char *s1, char *s2);
char *mystrcpy (char * s1, char * s2);
# endif