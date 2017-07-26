#include <stdio.h>
#include <stdlib.h>
 
void printRepeating(int arr[], int size)
{
  int k;
  printf("The repeating elements are: \n");
  for (k= 0; k< size; k++)
  {
   if (arr[abs(arr[k])] >= 0)
    arr[abs(arr[k])] = -arr[abs(arr[k])];
    else
      printf(" %d ", abs(arr[k]));
  }
}
 
int main()
{
  int arr[] = {1, 2, 3, 1, 3, 6, 6};
  int arr_size = sizeof(arr)/sizeof(arr[0]);
  printRepeating(arr, arr_size);
  getchar();
  return 0;
}
