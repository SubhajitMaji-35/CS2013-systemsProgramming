//TODO: Answer question 1 here.
//TODO: Complete the code

#include <stdio.h>
#include <stdlib.h>

int main(){
	
	char pattern[2];
	scanf("%s", pattern);

	int length;
	scanf("%d", &length);

	char* str = malloc(sizeof(char)*length);
	scanf("%s", str);

	int c=0;

	for (int i =0; i<length-1; i++){
		if(str[i]==pattern[0] && str[i+1]==pattern[1]){
			c++;
		}
	}

	printf("%d\n", c);

	free(str);

	return 0;

}

