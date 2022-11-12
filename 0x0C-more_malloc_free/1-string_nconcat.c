#include<stdio.h>
#include<string.h>
#include<stdlib.h>

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *concat;


	/*allocate space for concatenation*/
	concat = malloc((strlen(s1) + strlen(s2)) * sizeof *concat + 1);

	/*if function fails, return NULL*/
	if (concat == NULL)
		return (NULL);

	/*confirm input*/
	/*concatenate strings*/
	concat = strcpy(concat, s1);
	concat = strncat(concat, s2, n);

	return (concat);



}
