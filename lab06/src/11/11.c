#include <stdio.h>

int main()
{
	int value, current;

	//Read an integer from the user
	scanf("%d", &value);

	//Do not add/modify anything about this line
	//TODO: Complete the code
	current = 0;
	if(value ==0){
		printf("%d ", current);
	}
	else{
		int j = 1;
		int current2;
		while( current<=value ){
			int i = j;
			current2= current;
			while( current2<= value ){
				printf("%d ",current2 );
				current2+=i;
				i++;
			}
			j++;
			current+=j;
			printf("\n");
		}
	}
	
	//Do not add/modify anything below this line
	return 0;
}

