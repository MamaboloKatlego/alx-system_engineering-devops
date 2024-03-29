#include <sys/types.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * infinite_while - A loop
 *
 * Description: A loop
 *
 * Return: It returns 0.
 */
int infinite_while(void)
{
	while (1)
	{
		sleep(1);
	}
	return (0);
}

/**
 * main - It writes a C program that creates 5 zombie processes.
 *
 * Description: for every zombie process created, it displays
 *              Zombie process created, PID: ZOMBIE_PID
 *
 * Return: It returns 0.
 */
int main(void)
{
	pid_t zombie_pid;
	int zombie;

	for (zombie = 0; zombie < 5; zombie++)
	{
		zombie_pid = fork();
		if (zombie_pid > 0)
			printf("Zombie process created, PID: %d\n", zombie_pid);
		else
			exit(0);
	}

	infinite_while();

	return (0);
}
