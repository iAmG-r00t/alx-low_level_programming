#include <stdio.h>
#include <unistd.h>

/**
 * main - Parent PID
 *
 * Return: Always 0
*/
int main(void)
{
	pid_t my_pid;
	pid_t ppid;

	my_pid = getpid();
	printf("Process ID: %u\n", my_pid);
	ppid = getppid();
	printf("Parent PID: %u\n", ppid);
	return (0);
}
