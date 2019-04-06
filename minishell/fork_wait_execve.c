#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>

int main(void)
{
	char *path_to_exec = "/bin/ls";
	char *flags[] = {"-l", "/tmp"};
	int hijo;
	int i = 0, sw = 1;

	while (i < 5 && sw == 1)
	{
		hijo = fork();
		if (hijo == 0)
		{
			printf("primogénito\n");
			execve(path_to_exec, flags, NULL);
			sw = 0;
		}
		else
		{
			wait(NULL);
			printf("padre\n");
		}
		i++;
	}

	return (0);
}
