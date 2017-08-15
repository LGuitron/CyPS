#include "gtest/gtest.h"
#include "circularPrime.h"
#include <iostream>

TEST(CircularPrimes, Primeros19)
{
    int circularPrimes[19] = {2, 3, 5, 7, 11, 13, 17, 37, 79, 113, 197, 199, 337, 1193, 3779, 11939, 19937, 193939, 199933};
    for(int i=0;i<19;i++)
    {
        int sizeR = inputSize(circularPrimes[i]);
        EXPECT_TRUE(iterRotations(circularPrimes[i],sizeR));
        i++;
        
    }
}

TEST(CircularPrimes, CantidadEntreMenos100_100)
{
    int i=-100;
    int circularPrimeCount = 0;
    while(i<=100)
    {
        int sizeR = inputSize(i);
        if(iterRotations(i,sizeR))
            circularPrimeCount++;
        i++;
    }
    //Hay 13 circular primes entre -100 y 100//
    //No hay circular primes negativos//
    EXPECT_EQ(13,circularPrimeCount);
}
