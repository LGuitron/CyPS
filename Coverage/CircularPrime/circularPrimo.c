#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int primeCheck(int num)
{
    for(int i=2;i<num/2;i++)
    {
        if(num%i==0)
            return 0;
    }
    return 1;
}

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

int main(int argc, char** argv)
{
   char* inp = argv[1];
   double x = atof(inp);
   
   double size = log10(x);
   int sizeR = ceil(size);
   int intX =(int)x;
   
   for(int i=0;i<sizeR;i++)
   {
        if(primeCheck(intX)==1)
            intX = rotRight(intX,sizeR);
        else
        {
            printf("Not circular prime \n");
            return 0;
        }
   }
   printf("Circular prime \n");
   return 1;
}

