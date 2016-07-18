//
// Created by Chohee Kim on 7/14/16.
//


#include "PrimeNumber.h"
#include <math.h>

bool isPrimeNumber(int num);

int PrimeNumber(int input) {

  //return -1 for invalid input - less or equal to 0
  if (input <= 0) {
    return -1;
  }

  int count = 0;
  int num = 0;

  while(count != input) {

    if (isPrimeNumber(++num)) {
      count++;
    }
  }

  return num;

}

//find nth prime number from the beginning
bool isPrimeNumber(int num) {

  if (num < 2) return false;

  for (int i = 2; i <= sqrt(num); i++) {

    if (num % i == 0) {
      return false;
    }
  }

  return true;
}

