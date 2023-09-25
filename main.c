#include <stdio.h>
#include <string.h>

int main(int argc, char **argv)
{
    char first[255], last[255];

<e57458567456
    gets(last); /* buffer overflow? what's that? */

    printf("Hello %s %s!\n", first, last);
    return 0;
}
