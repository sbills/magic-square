#include <stdio.h>

#define SIZE 15

int declareArray(void);

int main(void)
{
        declareArray();

return 0;
}
//main logic
int declareArray(void)
{
        //variables
        int rowNumber = 0;
        int dimension = 0;
        int arr[SIZE][SIZE] = {0};
        int row, col;
        int sum, sum1, sum2;
        int flag = 0;

        //ask for input of squares
        printf("Please enter the dimension of the square: ");
        //makes sure the size is between 1 and 15 for the dimension of the square
        if(scanf("%d", &dimension) != 1 || dimension >= 15 || dimension < 1)
        {
                printf("invalid input\n");
                return 1;
        }
        //enter the data

        //array rows
        for(row = 0; row < dimension; ++row)
        {
                printf("Please enter the data for row %d: ", ++rowNumber);
                //array collumns
                for(col = 0; col < dimension; ++col)
                {
                        //store the user input
                        scanf("%2d", &arr[row][col]);
                }
        }
        printf("\n");
        printf("Here is the square");
        printf("\n");
        //print the square

        //array rows
        for(row = 0; row < dimension; ++row)
        {
                //array collumns
                for(col = 0; col < dimension; ++col)
                {
                        printf("%d", arr[row][col]);
                }
        printf("\n");
        }

 //Checks Sum of diagonal elements
   sum = 0;
   for (row = 0; row < dimension; row++) {
      for (col = 0; col < dimension; col++) {
         if (row == col)
            sum = sum + arr[row][col];
      }
   }

   //Checks Sum of Rows
   for (row = 0; row < dimension; row++) {
      sum1 = 0;
      for (col = 0; col < dimension; col++) {
         sum1 = sum1 + arr[row][col];
      }
      if (sum == sum1)
         flag = 1;
      else {
         flag = 0;
         break;
      }
   }

   //Checks sum of Columns
   for (row = 0; row < dimension; row++) {
      sum2 = 0;
      for (col = 0; col < dimension; col++) {
         sum2 = sum2 + arr[col][row];
      }
      if (sum == sum2)
         flag = 1;
      else {
         flag = 0;
         break;
      }
   }
   //if the sums match, it will print a success message with the constant
   //if the sums dont match, a fail message will appear
   if (flag == 1)
      printf("\nTHE SQUARE IS A MAGIC SQUARE WITH A CONSTANT OF %d \n", sum);
   else
      printf("\nThe Square is not a magic square \n");


return 0;
}
