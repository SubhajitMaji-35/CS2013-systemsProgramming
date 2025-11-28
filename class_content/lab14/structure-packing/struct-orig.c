#include <stdio.h>

struct decreasing {
	char* p; 
	int i;   
	short s; 
	char c; 
}; 

struct diff_order {
	char c; 
	char* p; 
	short s; 
	int i; 
}; 


int main(){
	printf("Size of stucture decreasing is %ld\n", sizeof(struct decreasing));
	printf("Size of stucture diff_order is %ld\n", sizeof(struct diff_order));
	return 0;
}
