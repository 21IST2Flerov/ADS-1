// Copyright 2022 NNTU-CS
#include <cstdint>
#include "alg.h"


bool checkPrime(uint64_t value) {
  int k = sqrt(value);
  bool checking = 0;
  int counting  = 0;
  for (int i = 0; i <=k; i++) {
    if ( 0 == value%i) {
      counting += 1;
    }
  }
  if (0 == counting){
    checking = true;
    return checking;
  } else {
    return checking;
  }
}

uint64_t nPrime(uint64_t n) {
  int flag = 1;
    int num = 0;
    uint64_t cnt_Prime = 0;
    for (int i = 2; 0 != flag; i++) {
        num = i;
        int counting = 0;
        int k = sqrt(num);
        for (int i = 2; i <= k; i++) {
            if (0 == num%i) {
                counting += 1;
                break;
            }
        }
        if (0 == counting) {
            cnt_Prime += 1;
            if (cnt_Prime == n) {
                flag = 0;
            }
        }
    }
    return num;
}
}

uint64_t nextPrime(uint64_t value) {
  int flag = 1;
    uint64_t num = 0;
    for (uint64_t i = value+1; 0 != flag; i++) {
        num = i;
        int counting = 0;
        int k = sqrt(num);
        for (int i = 2; i <= k; i++) {
            if (0 == num%i) {
                counting += 1;
                break;
            }
        }
        if (0 == counting) {
            flag = 0;
        }
    }
    return num;
}

uint64_t sumPrime(uint64_t hbound) {
  uint64_t num = 0;
    uint64_t sum = 0;
    for (uint64_t i = 2; i < hbound; i++) {
        num = i;
        int counting = 0;
        int k = sqrt(num);
        for (int i = 2; i <= k; i++) {
            if (0 == num%i) {
                counting += 1;
                break;
            }
        }
        if (0 == counting) {
            sum += num;
        }
    }
    return sum;
}
