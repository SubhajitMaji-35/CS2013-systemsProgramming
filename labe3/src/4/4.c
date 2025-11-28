
// TODO: Include header files as necessary
#include <stdio.h>
#include <string.h>

#define LEN 100


// Answer question 4 here.
int main()
{

	int n;
	scanf("%d", &n);

	for(int i=0; i<n; i++){
		char str1[LEN];
		char str2[LEN];

		scanf("%s", str1);
		scanf("%s", str2);

		int len1=strlen(str1);

		for(int i=0; i<len1; i++){
			for(int j=i; j<len1; j++){
				if(str1[i]>str1[j]){
					char temp= str1[i];
					str1[i]=str1[j];
					str1[j]=temp;
				}
			}
		}

		int len2=strlen(str2);

		for(int i=0; i<len2; i++){
			for(int j=i; j<len2; j++){
				if(str2[i]>str2[j]){
					char temp = str2[i];
					str2[i]=str2[j];
					str2[j]=temp;
				}
			}
		}

		if(strcmp(str1,str2) == 0){
			printf("Yes\n");
		}else{
			printf("No\n");
		}
	}



   //Do not add/modify anything below this line
   return 0;
}


