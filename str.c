/**
	AUTHOR : PRAGYA PRAKASH
	LAB 1 of Refresher Module
*/

#include <ctype.h>
#include <xlocale.h>
#include "str.h"

/* implementation of my functions here */

char* strcopy(char *dest, const char *src)
{
	char *copied=dest;
	while(*src)
	{
		*dest=*src;
		dest++;
		src++;
	}
	*dest='\0';
	return copied;
}

char *len_strcopy(char *dest, const char *src, int count)
{
	char *copied=dest;
	int ctr=1;
	while(*src && ctr<=count)
	{
		*dest=*src;
		dest++;
		src++;
		ctr++;
	}
	
	if(ctr<=count && *dest)
	{
		*dest='\0';
		dest++;
		ctr++;
	}
	return copied;
}

char *strcat(char *dest, const char *src)
{
	char *new=dest;
	while(*dest) {dest++;}
	while(*src)
	{
		*dest=*src;
		dest++;
		src++;
	}
	*dest=0;
	return new;
}

char *len_strcat(char *dest, const char *src, int count)
{
	char *new=dest;
	int ctr=1;
	while(*dest) {dest++;}
	while(*src && ctr<=count)
	{
		*dest=*src;
		dest++;
		src++;
		ctr++;
	}
	*dest=0;
	return new;
	
}

int strcmp(const char *cs, const char *ct)
{
	unsigned char c1, c2;

	do {
		c1 = *cs++;
		c2 = *ct++;
		if (!c1 || !c2)
			break;
		if (c1 == c2)
			continue;
		if (c1 != c2)
			break;
	} while (*cs && *ct);
	return (int)c1 - (int)c2;
}

int len_strcmp(const char *cs, const char *ct, int count)
{
	unsigned char c1, c2;

	if (!count)
		return 0;

	do {
		c1 = *cs++;
		c2 = *ct++;
		if (!c1 || !c2)
			break;
		if (c1 == c2)
			continue;
		if (c1 != c2)
			break;
	} while (--count);
	return (int)c1 - (int)c2;
}

char *strfindchr(const char *s, int c)
{
	char *ans;
	while(*s)
	{
		if(*s==c)
		{
			ans=s;
			break;
		}
		else
		{
			s++;
		}
	}
	return ans;	
}

char *strChrNull(const char *s, int c)
{
	while(*s)
	{
		if(*s==c)
		{
			break;
		}
		s++;
	}
	return s;
}

char *strchrRev(const char *s, int c)
{
    	char *ans;
	while(*s)
	{
		if(*s==c)
		{ans=s;}
		s++;
	}
	return ans;
}

char *strNchr(const char *s, int count, int c)
{
	int ctr=1;
	char* ans;
	while(*s && ctr++ <= count)
	{
		if(*s==c)
		{ans=s; break;}
		s++;
	}
	return ans;
}

char *ltrim(const char *str)
{
	unsigned char c=' ';
	char *new=str;
	while(*str)
	{
		if(*str==c) {str++; new=str; }
		else {break;}
	}
	return (char*)new;

}

char *str_trim(char *str)
{
	char* ans = ltrim(str);
	unsigned char c=' ';
	
	char* endptr = str + my_strlen(str);  //to reach the end of the string and then check for trailing whitespaces
    	while(*--endptr == c);
    	*(endptr + 1) = '\0';
	return ans;
}


int my_strlen(const char *s) {

	int len=0;
	while(*s)
	{
		len++;
		s++;
	}
	return len;
}

int strNlen(const char *s, int count) {
	int len=0;
	int ctr=1;
	while(*s && ctr<=count)
	{
		len++;
		s++;
		ctr++;
	}
	return len;
}

void *my_memset(void *s, int c, int count)
{
	int ctr=1;
	unsigned char* mem=s;
	while(ctr<=count)
	{
		ctr++;
		*mem=c;
		mem++;
	}
	return s;
}

/*Already given implemented*/
int strcmp_caseins(const char *s1, const char *s2, int len)
{
	unsigned char c1, c2;

	if (!len)
		return 0;

	do {
		c1 = *s1++;
		c2 = *s2++;
		if (!c1 || !c2)
			break;
		if (c1 == c2)
			continue;
		c1 = tolower(c1);
		c2 = tolower(c2);
		if (c1 != c2)
			break;
	} while (--len);
	return (int)c1 - (int)c2;
}
