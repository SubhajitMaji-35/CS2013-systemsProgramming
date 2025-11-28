
// TODO: Add appropriate headers, if needed
#include <stdio.h>
#include <stdlib.h>

// TODO: Answer question 3

int gcd(int a, int b){
	
	if(a<0){
		a=-a;
	}
	if(b<0){
		b=-b;
	}

	if(b>a){
		a=a^b;
		b=a^b;
		a=a^b;
	}
	if(b==0){
		return a;
	}else{
		int c= 	a%b;
		return gcd(b,c);
	}
}

int main()
{

	while(1){

		int a,b;
	
		scanf("%d/%d", &a, &b);
		char c = getchar();
		if(c == EOF){
			break;
		}

		if(b==0){
			printf("Invalid\n");
		}else{
		int div = gcd(a,b);

		a=a/div;
		b=b/div;

		printf("%d/%d\n", a, b);
		}
	}

  return 0;
}

