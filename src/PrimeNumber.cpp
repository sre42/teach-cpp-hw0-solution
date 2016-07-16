//
// Created by Chohee Kim on 7/14/16.
//


#include "PrimeNumber.h"
#include <math.h>

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

int PrimeNumber(int n) {

  if (n <= 0) {
    return -1;
  }

  int count = 0;

  for (int i = 0; ; i++) {

    if (isPrimeNumber(i)) {
      count++;
    }

    if (count == n) {
      return i;
    }
  }

}

