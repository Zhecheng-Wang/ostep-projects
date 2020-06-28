//
// Created by Zhecheng Wang on 6/27/2020.
//

#include "wcat.h"

int main(int argc, char *argv[]) {
    for(int i = 0; i < argc; i++) {
        FILE *fp = fopen(argv[i], "r");
        if (!fp) {
            printf("cannot open file\n");
            exit(1);
        }

        char ch;
        while ((ch = (char)fgetc(fp)) != EOF) {
            printf("%c", ch)
        }

        fclose(fp);
    }
    return 0;
}