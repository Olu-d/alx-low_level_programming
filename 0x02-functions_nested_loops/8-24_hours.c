#include<stdio.h>
#include"main.h"

/**
 * 
 *
 */

int main(void)
{
	int hr;
	int min;
	int ten_hr;
	int unit_hr;
	int ten_min;
	int unit_min;

	for(hr = 0; hr <=24; hr++)
	{
		for(min = 0; min <= 24; min++)
			printf("%02d:%02d\n", hr, min);

	}

	return (0);



}

