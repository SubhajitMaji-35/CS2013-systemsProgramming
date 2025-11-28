// TODO: Include header files as necessary
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// Answer question 5 here.


int main()
{
	// Do not add/modify anything below this line
	
	int n;
	scanf("%d", &n);
	
	double * arr = malloc(sizeof(double)*n);

	for(int i=0; i<n; i++){

		double x;
		scanf("%lf", &x);
		
		double y = 1;
		double yl = y;

		while(1){
			double ratio = x/y;
			y = (y+ratio)/2;
			double diff = fabs(y-yl);
			double comp = (0.0001 * yl) - diff;
			yl=y;
			if(comp>0){
				break;
			}
		}

		arr[i] = y;

	}

	for(int i = n-1; i>=0; i--){
		printf("%.11lf\n", arr[i]);
	}

	free(arr);

	return 0;
}


