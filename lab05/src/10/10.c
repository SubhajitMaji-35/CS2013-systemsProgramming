#include <stdio.h>

int main()
{
	long a=0, factor_sum = 0;

	//Read an integer from the user
	scanf("%ld", &a);

	//Do not add/modify anything about this line
	//TODO: Complete the code
	
	long i = 2;
	long j = a;

	if(a != 1){
		factor_sum += 1;
	}

	while( i < j){
		if( a%i ==0){
			j = a/i;
			factor_sum += i + j;
		}
		i++;
	}

	if(factor_sum == a){
	printf("Yes");
	}else{
	printf("No");
	}

	//Do not add/modify anything below this line
	return 0;
}

