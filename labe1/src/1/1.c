#include <stdio.h>


#define SIZE 5

int main()
{
	char input[SIZE];
	int result;

	// Read the input
	scanf("%s", input);

	//Do not add/modify anything above this line
	//TODO: Complete the code
	int z = (int)input;
	char char_x[SIZE]=input;
	char char_y[SIZE]=input;

	for(int i=0; i<SIZE; i++){
		for(int j=i; j<SIZE; j++){
			if(char_x[i] > char_x[j]){
				char temp = char_x[i];
				char_x[i]=char_x[j];
				char_x[j]=temp;
			}
		}
	}

	for(int i=0; i<SIZE; i++){
		for(int j=i; j<SIZE; j++){
			if(char_y[i] < char_y[j]){
				char temp = char_y[i];
				char_y[i]=char_y[j];
				char_y[j]=temp;
			}
		}
	}

	int x = (int)char_x;
	int y = (int)char_y;

	printf("%d %d %d" , x, y, z);


	//Do not add/modify anything below this line
	//Print the answer
	printf("%d\n", result);
	return 0;
}

