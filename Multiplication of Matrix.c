#include <stdio.h>
int main()
{


      int matrixA[3][3];
      int matrixB[3][3];
      int result[3][3];

      //Taking elements of A from user
      printf("\nPlease enter the Values of Matrix A :\n");
      for (int i=0;i<3;++i)
      {

      	 for(int j=0;j<3;++j)
      	 {
      	 	printf("Enter Element %d %d th :",i,j);
      	 	scanf("%d", &matrixA[i][j]);
		   }
	  }

	        //Taking elements of B from user
      printf("\nPlease enter the Values of Matrix B :\n");

      for (int i=0;i<3;++i)
      {
      	 for( int j=0;j<3;++j)
      	 {
      	 	printf("Enter Element %d %d th :",i,j);
      	 	scanf("%d", &matrixB[i][j]);

		   }
	  }

	  //Multiplying the Matrix A and Matrix B
	  	int i,  j, k;
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			result[i][j] = 0;
			for (k = 0; k < 3; k++)
				result[i][j] += matrixA[i][k]*matrixB[k][j];
		}
	}
	//displaying values of result matrix

	printf("\n The multiplication of Matrix A and B gives us \n");

	for (int i=0;i<3;++i)
	{
		for (int j=0;j<3;++j)
		{
			printf("%d ",result[i][j]);
		}
		printf("\n");
	}

	return 0;

}
