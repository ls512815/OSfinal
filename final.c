#include <sys/types.h>
#include <unistd.h>
#include <stdio.h>

void main()
{
    int i, pid;

    for (i = 0; i < 2; i++)
    {
        pid = fork();

        if (pid > 0)
        {
            break;
        }
        else
        {
            pid == fork();
        }
    }
    printf("%d ", pid);
}
