#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int search_in_file(const char *searchterm, FILE *fp) {
    char *line = NULL;
    size_t len = 0;
    ssize_t nread;

    while ((nread = getline(&line, &len, fp)) != -1) {
        if (strstr(line, searchterm) != NULL) {
            printf("%s", line);
        }
    }

    free(line);
    return 0;
}

int main(int argc, char *argv[]) {
    if (argc < 2) {
        printf("wgrep: searchterm [file ...]\n");
        exit(1);
    }

    char *searchterm = argv[1];

    // Caso: sin archivos, leer de stdin
    if (argc == 2) {
        search_in_file(searchterm, stdin);
        return 0;
    }

    // Caso: con archivos
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
