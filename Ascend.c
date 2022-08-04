/*Lab8PartA, Noah Guthrie, 2021-11-15*/

#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(void){
  int i, j, n, temp;
  //ask user for number of elements
  puts("Please enter the number of elements");
  scanf("%d", &n);

  int number[n];

  //start clock
  clock_t start = clock();
  //generate new elements of the array everytime
  srand(time(NULL));

  //loop for assigning randomized elements to array
  for (i = 0; i < n; ++i){
    number[i] = rand() % 1001;
  }//end loop

  //loop to continually compare elements of the array
  for (i = 0; i < n; ++i){
    for (j = i + 1; j < n; j++) {
      //loop for arranging the array
      if(number[i] < number[j]){
        temp =  number[i];
        number[i] = number[j];
        number[j] = temp;
      }
    }
  }
    printf("The numbers arranged in ascending order are given below \n"); 
  //loop to print elements of array in ascending order
    for (i = 0; i < n; i++){
      printf("%d ,", number[i]);
    }
  //end clock
  clock_t end = clock();
  double timeInSeconds = (double)(end - start) / CLOCKS_PER_SEC;
  printf("\n");
    
  //print time it took to complete
  printf("%f\n", timeInSeconds);
}