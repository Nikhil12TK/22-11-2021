#include"header.h"
void main() 
{ 
	 char*str1="I am nikhil"; 
  	 char str2[30];
	 int c;    
	 copystr(str2,str1);
	 printf("\n %s",str2); 
      for(i=0;*(str2+i)!="\0";i++)
	 c++;
     printf("the length of second string is :%d\n",c);
} 						              }
