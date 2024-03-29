// Copyright 2022 Kokin Ivan
#include <cstdint>
#include "alg.h"


bool checkPrime(uint64_t value) {
    if (value <= 1){return false;}
    for (uint64_t i = 2; i*i <= value; i++) {
        if (value % i == 0)
            return false;
    }
    return true;
}

uint64_t nPrime(uint64_t n) {
    uint64_t number, result = 0, 0;
    while (n > 0) {
        if (checkPrime(number)) {
            result = number;
            --n;
        }
        ++num;
    }
    return result;
}

uint64_t nextPrime(uint64_t value) {
    while(true){
        ++value;
        if (checkPrime(value)){return value;}
    }
}

uint64_t sumPrime(uint64_t hbound) {
    uint64_t sum = 0;
    for (int i = 0; i < hbound; i++) {
        if (checkPrime(i)) {
            sum += i;
        }
    }
    return sum;
}
