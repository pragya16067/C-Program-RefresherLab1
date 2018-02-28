/**
	AUTHOR : PRAGYA PRAKASH
	LAB 1 of Refresher Module
*/

#include <stdio.h>
#include "str.h"

int main( )
{
        char source[ ] = "catty eyes" ;
   	char target[]= "coolyo i love you" ;
  	printf( "\nsource string = %s", source ) ;
  	printf( "\ntarget string = %s", target ) ;

   	char *new=strcopy(target,source) ;
  	printf( "\ntarget string after strcpy( ) = %s", new ) ;

   	char *new2=len_strcat(target,source,6) ;
  	printf( "\ntarget string after strncat( ) = %s", new2 ) ;

	int comp = len_strcmp(source,target,5);
	printf("\n%d\n",comp);

	char ch='t';
	char *foundstring = strNchr(source,6,ch);
	printf("\nReturned this : %s", foundstring);
	if(*foundstring =='\0')
	{
		printf("\nCould not find char %c in source string\n",ch);
	}
	else
	{
		printf("\nFound char %c in source string\n",ch);
	}
	 

	char strUntrim[] ="    pragya  prakash    ";
	printf("\nLength of untrimmed string %d\n",my_strlen(strUntrim));

	char *skipstr= ltrim(strUntrim);
	printf("\nLeading spaces trimmed, new string is %s of length %d", skipstr, my_strlen(skipstr) );
	char* realstr= str_trim(strUntrim);
	printf("\nLeading and Trailing spaces trimmed, new string is %s of length %d", realstr, my_strlen(realstr) );
	
	int l=my_strlen(source);
	printf("\nlength of source is %d\n",l);
	int l2=strNlen(source,5);
	printf("\nlength of source with length restriction of 5 is %d\n",l2);

	char data[] = "I look forward to coding my very own Operating System";
    	printf("\nBefore memset(): %s\n", data);
    	// Fill 18 characters starting from data[18] with '.'
   	my_memset(data + 18, '.', 18*sizeof(char));
    	printf("After memset():  %s\n", data);
    	

   return 0;
}
