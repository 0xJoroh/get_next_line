#include "get_next_line.h"

int        main(void)
{
    int fd1, fd2, fd3, fd4;
    char *line;
    int i;

    i = 0;
    fd1 = open("../files/file1.txt", O_RDONLY);
    fd2 = open("../files/fil2.txt", O_RDONLY);
    fd3 = open("../files/file3.txt", O_RDONLY);
    fd4 = open("../files/file4.txt", O_RDONLY);
    while (i < 3)
    {
        i++;
        get_next_line(fd1, &line);
        printf("[%s]\n",line);
    }
    i = 0;
    while (i < 3)
    {
        i++;
        get_next_line(fd2, &line);
        printf("[%s]\n",line);
    }
    i = 0;
    while (i < 3)
    {
        i++;
        get_next_line(fd3, &line);
        printf("[%s]\n",line);
    }
    i = 0;
    while (i < 3)
    {
        i++;
        get_next_line(fd4, &line);
        printf("[%s]\n",line);
    }
    i = 0;
    return (0);
}