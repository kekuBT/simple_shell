#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char **argv)
{

	int maxValue = 10;

	srand(time(NULL));
	int random = rand() % maxValue + 1;

	printf("Welcome, this is a guessing game from 1 - 10.\n");

	int val = printf("Your first guess is - ");

	scanf("%d", &val);

	if (val == random)
	{
	printf("Wow you got it on your first try.\n");
	}
	else
	{
	printf("Wrong, you failed. ");
	}
	return (0);
}
