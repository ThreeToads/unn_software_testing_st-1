// Copyright 2024 Kokin Ivan
#include <gtest/gtest.h>
#include <cstdint>



TEST(checkPrime, testConstantValue) {
EXPECT_TRUE(checkPrime(13));
}

TEST(checkPrime, CheckPrimeCompositeNumber) {
EXPECT_FALSE(checkPrime(10));
}

TEST(checkPrime, NthPrimeNumber) {
EXPECT_EQ(11, nPrime(7));
}

TEST(nextPrime, NextPrimeNumber) {
EXPECT_EQ(11, nextPrime(7));
}

TEST(nPrime, testConstValueN) {
EXPECT_EQ(2, nPrime(1));
EXPECT_EQ(3, nPrime(2));
EXPECT_EQ(5, nPrime(3));
}

TEST(nPrime, testBigConstValueN) {
EXPECT_EQ(1299709, nPrime(100000));
EXPECT_EQ(1299721, nPrime(100001));
}

TEST(nextPrime, testConstValueNext) {
EXPECT_EQ(2, nextPrime(0));
EXPECT_EQ(2, nextPrime(1));
EXPECT_EQ(11, nextPrime(7));
}

TEST(nextPrime, testBigConstValueNext) {
EXPECT_EQ(1e9 + 7, nextPrime(1e9));
EXPECT_EQ(1e9 + 9, nextPrime(1e9 + 7));
}

TEST(sumPrime, testConstValueSum) {
EXPECT_EQ(0, sumPrime(1));
EXPECT_EQ(17, sumPrime(10));
EXPECT_EQ(1060, sumPrime(100));
}

TEST(sumPrime, testBigConstValue) {
EXPECT_EQ(275502302023, sumPrime(1e6));
}
