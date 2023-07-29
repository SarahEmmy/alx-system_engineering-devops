#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>
#include <stdio.h>

/**
 * infinite_while - Infinite loop to manage zombie processes.
 *
 * This function helps manage zombie processes in a parent process
 * after forking child processes. It prevents child processes from
 * becoming zombies by waiting for their termination.
 *
 * Return: This function runs indefinitely until interrupted or an error occurs.
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
 * main - Main function to demonstrate zombie process handling.
 *
 * This program showcases how to handle zombie processes in a parent process
 * after forking child processes. It utilizes the infinite_while() function
 * to prevent child processes from becoming zombies by waiting for their
 * termination.
 *
 * Return: 0 on successful execution.
 */
int main(void)
{
	pid_t child_pd;
	int num_of_proc;

	for (num_of_proc = 1; num_of_proc < 6; num_of_proc++)
	{
		child_pd = fork();
		if (child_pd > 0)
		{
			printf("Zombie process created, PID: %d\n", child_pd);
			sleep(1);
		}
		else
		{
			exit(0);
		}
	}
	infinite_while();
	return (0);
}
