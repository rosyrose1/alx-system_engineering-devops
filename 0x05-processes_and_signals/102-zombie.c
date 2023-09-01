#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * infinite_while - produces an infinite loop
 * rosy
 * Return: Always 0
**/

int infinite_while(void)
{
	while (1)
	{
		sleep(1);
	}
	return (0);
}

/**
 * main - produces 5 zombie processes
 * rosy
 * Return: Always 0
**/

int main(void)
{
	int b;
	pid_t zombie;

	for (b = 0; b < 5; b++)
	{
		zombie = fork();
		if (!zombie)
			return (0);
		printf("Zombie process created, PID: %d\n", zombie);
	}

	infinite_while();
	return (0);
}
