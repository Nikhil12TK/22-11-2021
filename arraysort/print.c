#include"header.h"
void print(int *a,int n)
	  {
		     printf("\n The elements in the array after sorting : \n");
		      for(int i=0;i<n;i++)
			          {
				                printf(" element - %d : %d \n",i+1,*(a+i));
				                 }
		     printf("\n");
		     }
