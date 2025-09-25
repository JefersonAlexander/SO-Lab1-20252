#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define BUFSIZE 4096

int search_in_file(const char *searchterm, FILE *fp) {
    char buffer[BUFSIZE];

    while (fgets(buffer, sizeof buffer, fp) != NULL) {
        if (strstr(buffer, searchterm) != NULL) {
            printf("%s", buffer);
        }
    }

    return 0;
}

int main(int argc, char *argv[]) {
    if (argc < 2) {
        printf("wgrep: searchterm [file ...]\n");
        exit(1);
    }

    char *searchterm = argv[1];

    // cuando no se pasa archivo 
    if (argc == 2) {
        search_in_file(searchterm, stdin);
        return 0;
    }

    // cuando se pasa archivo
    for (int i = 2; i < argc; i++) {
        FILE *fp = fopen(argv[i], "r");
        if (fp == NULL) {
            printf("wgrep: cannot open file\n");
            exit(1);
        }
        search_in_file(searchterm, fp);
        fclose(fp);
    }

    return 0;
}
