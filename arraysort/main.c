#include"header.h"
void main()
	  {
		       int *a,n;
		              printf("\n\n Pointer : Sort an array using pointer :\n");
		                printf("--------------------------------------------\n");
			  
				       printf(" Input the number of elements to store in the array : ");
			       scanf("%d",&n);
			    
				         printf(" Input %d number of elements in the array : \n",n);
			        for(i=0;i<n;i++)
				             {
					                  printf(" element - %d : ",i+1);
					                   scanf("%d",a+i);
						           }
			          swap(a,n);
			        print(a,n);
			         }
