/*
1.	Write a program to construct the Pascal triangle with the given integer n.
Ex:
______________________________________
| Input: 3                           |
| Output:                            |
| 1                                  |
| 1 1                                |
| 1 2 1                              |
| 1 3 3 1                            |
|____________________________________|
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void Ex1(int n)
{
	int arr[n][n];

	// Iterate through every line and
	for (int line = 0; line < n + 1; line++)
	{
		for (int i = 0; i <= line; i++)
		{
			if (line == i || i == 0)
				arr[line][i] = 1;
			else
				arr[line][i] = arr[line - 1][i - 1] +
							   arr[line - 1][i];
			printf("%d", arr[line][i]);
		}
		printf("\n");
	}
}

int main(int argc, char *argv[])
{
	//testing variable, applying it to your algorithm for auto-evaluating
	int testcase = atoi(argv[1]);

	Ex1(testcase);
	return 0;
}
