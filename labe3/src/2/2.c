
// TODO: Add appropriate headers
#include <stdio.h>
#include <stdlib.h>

// THIS CODE DOES NOT COMPILE PROPERLY.
// ADD APPROPRIATE DECLARATIONS AND FIX 
// THE COMPILE ISSUES.



int main()
{

        int a, b;
        // Add appropriate code
	
	scanf("%d", &a);

	int **M = malloc(sizeof(int*)*a);
	for(int i=0; i<a; i++){
		M[i] = malloc(sizeof(int)*a);
	}

	for(int i =0; i<a; i++){
		for(int j=0; j<a; j++){
			scanf("%d", &M[i][j]);
		}
	}

	scanf("%d", &b);

	int **N = malloc(sizeof(int*)*b);
	for(int i=0; i<b; i++){
		N[i] = malloc(sizeof(int)*b);
	}

	for(int i =0; i<b; i++){
		for(int j=0; j<b; j++){
			scanf("%d", &N[i][j]);
		}
	}

	int ****Z = malloc(sizeof(int***)*a);
	for(int i=0; i<a; i++){
		Z[i] = malloc(sizeof(int**)*b);
		for(int j=0; j<b; j++){
			Z[i][j] = malloc(sizeof(int*)*a);
			for(int k=0; k<a; k++){
				Z[i][j][k] = malloc(sizeof(int)*b);
			}
		}
	}

	for(int i=0; i<a; i++){
		for(int p=0; p<b; p++){
			for(int j=-0; j<a; j++){
				for(int q=0; q<b; q++){
					Z[i][p][j][q] = M[i][j] * N[p][q];
				}
			}
		}
	}



        //////////////////////////
        // DO NOT MODIFY CODE BELOW
        /////////////////////////
        
        // Printing the final result.
        for(int i = 0; i < a; i++)
          for(int p = 0; p < b; p++)
            for(int j = 0; j < a; j++)
              for(int q = 0; q < b; q++)
                printf("%d ", Z[i][p][j][q]);
	    

        printf("\n");

        //////////////////////////
        // DO NOT MODIFY CODE ABOVE
        ////////////////////

        // Do not modify any line below
	
	
	for(int i=0; i<a; i++){
		for(int j=0; j<b; j++){
			for(int k=0; k<a; k++){
				free(Z[i][j][k]);
			}
			free(Z[i][j]);
		}
		free(Z[i]);
	}
	free(Z);
	

	for(int i=0; i<a; i++){
		free(M[i]);
	}
	free(M);

	for(int i=0; i<b; i++){
		free(N[i]);
	}
	free(N);



	return 0;
}
