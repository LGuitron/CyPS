#include <stdlib.h>
#include <stdio.h>
#include <math.h>

//Check prime//
int primeCheck(int num)
{
    for(int i=2;i<=num/2;i++)
    {
        if(num%i==0)
            return 0;
    }
    return 1;
}

//Rotate number to the right//
int rotRight(int num, int size)
{
    int digits[size];
    int temp = num;
    for(int i=size-1;i>=0;i--)
   {
        digits[i]=temp%10;
        temp /= 10;
   }
   int newDigits[size];
   int newInt = 0;
   
   for(int i=0;i<size;i++)
   {
       newDigits[i]=digits[(i+1)%size];
       int pos = (int)pow(10,size-i-1);
       newInt += newDigits[i]*pos;
   }
   return newInt;
}

//Parse argv[1] to int
int roundInput(int argc, char** argv)
{
   char* inp = argv[1];
   double x = atof(inp);
   
   int intX =(int)x;
   return intX;
}

//Take number length
//int inputSize(int argc, char** argv)
int inputSize(int intX)
{
   double dX = (double)intX;
   double size = log10(dX);
   int sizeR = ceil(size);
   return sizeR;
}

//Iterate to different rotations//
//Return 1 if circular prime and 0 if not//
int iterRotations(int intX, int sizeR)
{
   for(int i=0;i<sizeR;i++)
   {
        if(primeCheck(intX)==1)
            intX = rotRight(intX,sizeR);
        else
            return 0;
   }
   
   if(intX<2)
       return 0;
   else
       return 1;
}
