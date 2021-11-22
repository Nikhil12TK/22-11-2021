#include"header.h"
 void copystr(char *dest,char *src) 
{ 
while(*src!='\0') 
*dest++=*src++; 
 *dest='\0';
}
