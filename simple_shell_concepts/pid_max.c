#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * main - PID_MAX
 *
 * Return: Always 0
*/
int main(void)
{
	FILE *fd = 0;
	char buf[256];

	fd = fopen("/proc/sys/kernel/pid_max", "r");
	fread(buf, sizeof(buf), 1, fd);
	fclose(fd);
	printf("kernel.pid_max = %d\n", atoi(buf));
}
