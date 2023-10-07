#include <stdio.h>

int main(int argc, char *argv[])
{
    if (argc <= 1) {
        fprintf(stderr, "No arguments passed.\n");
        return -1;
    }

    fprintf(stdout, "Arguments:\n");

    for (int i = 1; i < argc; i++)
    {
        fprintf(stdout, "\t%s\n", argv[i]);
    }

    fprintf(stdout, "Done.\n");

    return 0;
}
