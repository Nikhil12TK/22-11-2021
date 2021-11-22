#include"header.h"
void swap(int *a,int n)
	  {
		   int tmp;
		   for(int i=0;i<n;i++)
			       {
				         for(int j=i+1;j<n;j++)
					         {
						               if( *(a+i) > *(a+j))//ascending order (for descending if(*(a+i)<*(a+j))  )
							               {
									        tmp = *(a+i);
									        *(a+i) = *(a+j);
									          *(a+j) = tmp;
									            }
						             }
				       }
		    }
