#include <stdio.h>

// TODO: Add appropriate headers, if needed
#include <math.h>

#define LASTSIX 1000000
#define SIZE 32

unsigned int modpow(unsigned int a, unsigned int b){
  long result = 1;
  // TODO: Complete the function
  long arr[32];
  unsigned int bit = 1;

  arr[0] = a%LASTSIX;

  for (int i=1; i<32; i++){
	arr[i] = ((arr[i-1]%LASTSIX) * (arr[i-1]%LASTSIX))%LASTSIX;
  }

  for (int i=0; i<32; i++){
	  if(bit & b){
		  result = ((result%LASTSIX) * (arr[i]%LASTSIX))%LASTSIX;
  }
	  bit = bit<<1;
  }

  return result;
}


int main()
{
        // DO NOT EDIT THE CODE BELOW

	int length;
        int a, b;

	scanf("%d", &length);
	

        for(int i = 0; i< length; i++){
          scanf("%u %u", &a, &b);
          printf("%u ", modpow(a,b));
        }
        printf("\n");

	return 0;
}
