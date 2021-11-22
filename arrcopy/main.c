#include"header.h"
		     int main(){
			        int arr1[max_size], arr2[max_size];
			         int size, i;
			          int *ptr1 = arr1;
				   int *ptr2 = arr2;
				    int *last_arr = arr1+9;
				     printf("Enter size of array: ");
				      scanf("%d", &size);
				       printf("Please input arr1 elements: ");
				        for(i = 0; i <= size; i++)
					         scanf("%d", ptr1 + i);
				        printf("\narr2 elements before coping: ");
				          display_arr(arr2, size);
					  while(ptr1 <= last_arr)
						   {
							       *ptr2 = *ptr1;
							         ptr1++;
							          ptr2++;
							        }
					   printf("\narr2 elements after coping: ");
					     display_arr(arr2, size);
					     }
