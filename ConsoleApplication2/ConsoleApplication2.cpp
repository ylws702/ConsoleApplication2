// ConsoleApplication2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"


int main()
{
	int count = 0, temp, i;
	for (i = 1;; i++)
	{
		temp = i;
		while (temp)
		{
			if (temp % 10 == 1)
				count++;
			temp /= 10;
		}
		if (i == count)
			printf("%d\n", i, count);
	}
	return 0;
}

