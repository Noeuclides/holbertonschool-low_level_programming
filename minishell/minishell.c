#include<stdio.h>
#include<unistd.h>
#include<sys/wait.h>
#include<string.h>

int main(void)
{
	char *buffer[] = {NULL};//buffer inicial, inicializado en NULL(getline redimensiona)
	char **ptobuf;//puntero al buffer inicial(primer parámetro de getline
	size_t size = 0;//tamaño del buffer(getline redimensiona)
	char *execline;//puntero al path con el comando a ejecutar
	char delimiters[] = " \t\r\n\v\f";//delimitadores a remover del ptobuf
	int cmp;//variable para verificar si execline es igual a ptobuf
	char *arguments[] = {"", NULL};//array de punteros(segundo argumento de execve)
	int i = 1;//variable para mantener el shell on
	int hijo;//variable para verificar si es madre o hijo
	int sw = 1;//interruptor para matar hijos

	ptobuf = buffer;
	while (i)
	{
		printf("$ ");
		getline(ptobuf, &size, stdin);
		printf("%s", *ptobuf);
		execline = strtok(*ptobuf, delimiters);
		printf("%s ", execline);
		cmp = strcmp(execline, *ptobuf);
		printf("%u\n", cmp);
		while (sw == 1)
		{
			hijo = fork();
			if (hijo == 0)
			{
				execve(execline, arguments, NULL);
			}
			else
				wait(NULL);
			sw = 0;
		}
	}
	return (0);


}
