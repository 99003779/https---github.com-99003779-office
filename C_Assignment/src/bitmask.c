#include <stdio.h> 
  #include"bitmask.h"
// Function to set the kth bit of n 
int set(int n, int k) 
{  n=n | (1<<k);
    return n; 
} 
// Function to clear the kth bit of n 
int reset(int n, int k) 

{ n=n & (~0);
    return n;
} 
// Function to toggle the kth bit of n 
int flip(int n, int k) 
{ n=n^(1<<k);
    return n; 
} 