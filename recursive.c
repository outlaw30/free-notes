
#include<stdio.h>


int arraySortedCheck(int arr[], int n);
int recursiveBinarySearch(int array[], int start_index, int end_index, int element){
   if (end_index >= start_index)
   {
      int middle = start_index + (end_index - start_index )/2;
      if (array[middle] == element)
         return middle;
      if (array[middle] > element)
         return recursiveBinarySearch(array, start_index, middle-1, element);
      return recursiveBinarySearch(array, middle+1, end_index, element);
   }
   return -1;
}
int main(void)
{
   int i, j, a, n, array[30];
        printf("Enter the number of elements \n");
        scanf("%d", &n);
 
        printf("Enter the numbers in array\n");
        for (i = 0; i < n; ++i)
            scanf("%d", &array[i]);

            if(arraySortedCheck(array, n)){
      printf("Array is in sorted order!!!!\n");
   }
   else
     printf("The array is not in sorted order \n");

        for (i = 0; i < n; ++i) 
        {
            for (j = i + 1; j < n; ++j)
            {
                if (array[i] > array[j]) 
                {
                    a =  array[i];
                    array[i] = array[j];
                    array[j] = a;
                }
            }
        }
    printf("Enter the element to be searched in array : ");
    int element;
    scanf("%d",&element);
   int found_index = recursiveBinarySearch(array, 0, n-1, element);
   if(found_index == -1 ) {
      printf("Element not found in the array ");
   }
   else {
      printf("Element %d found at index : %d\n",element,found_index);
   }

   return 0;
}

int arraySortedCheck(int arr[], int n){

   if (n == 1 || n == 0)
      return 1;
   
   if(arr[n-1] < arr[n-2])
      return 0;
   return arraySortedCheck(arr, n-1);
}
printf("helllllooooo");
