#include "pch.h"
#include "../ConsoleApplication1/Header.h"

TEST(Simple, One) {
	EXPECT_FALSE(IsPrime(1));
	EXPECT_FALSE(IsPrime(4));
	EXPECT_FALSE(IsPrime(-100));
	EXPECT_FALSE(IsPrime(25));
}

TEST(Simple, Two) {

	EXPECT_TRUE(IsPrime(2));
	EXPECT_TRUE(IsPrime(3));
	EXPECT_TRUE(IsPrime(13));
	EXPECT_TRUE(IsPrime(997));
}