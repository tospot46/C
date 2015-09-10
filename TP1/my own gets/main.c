#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

char ftput_char(char c)
{
    write(1, &c, 1);
    return(c);
}
int main()
{
    int i;
    char c = ["hello"];

    i = 0;
    while (c[i] != \0)
    {
        ftput_char(c);
        i++;
    }
    return 0;
}
