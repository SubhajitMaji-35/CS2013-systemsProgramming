#include <stdio.h>

struct decreasing {
	char* p; // 8 bytes (64 bit machine)
	int i;   // 4 bytes
	short s; // 2 bytes
	char c; // 1 byte
		// 1 byte padding added by compiler
}; // Total size is 16 bytes

struct diff_order {
	char c;  // 1 byte
		 // 7 bytes of padding
	char* p; // 8 bytes
	short s; // 2 bytes
	//Raj a;   // 5 bytes
		 // 1 byte padding
	short b; // 2 bytes
	int i;  // 4 bytes
	        // 2 bytes of padding
}; // Total size is 24 bytes

// Memory access needs to be byte aligned - as 16 bytes of aligned chunks of
// memory
// Moral - in a struct always pack from largest type to smallest type

int main(){
	printf("Size of stucture inreasing is %ld\n", sizeof(struct decreasing));
	printf("Size of stucture sorted is %ld\n", sizeof(struct diff_order));
	return 0;
}
