//
// Created by Branislau Yanchuk 14.03.2023

// Here you can find an implementation of the functions from main_interface.h

#include "main_interface.h"
#include <stdio.h>

int is_prime(int n) 
{
  if (n <= 1) 
  {
    return 0;
  }
  for (int i = 2; i * i <= n; i++) 
  {
    if (n % i == 0) 
    {
      return 0;
    }
  }
  return 1;
}

void find_primes() 
{
  for (int n = 100; n <= 999; n++) 
  {
    if (is_prime(n)) 
    {
      printf("n=%d\t", n);
    }
  }
}
