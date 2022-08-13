#include <stdio.h>
#include <string.h>

int getEmptyLines(const char *fileName)
{
    char line[300];
    int emptyLine = 0;
    FILE *fp = fopen("suman.txt", "r");
    if (fp == NULL) {
        printf("Error: Could not open specified file!\n");
        return -1;
    }
    else {
        while(fgets(line, 300, fp)) {
            int i = 0;
            int len = strlen(line);
            emptyLine++;
            for (i = 0; i < len; i++) {
                if (line[i] != '\n' && line[i] != '\t' && line[i] != ' ') {
                    emptyLine--;
                    break;
                }
            }
        }
        return emptyLine;
    }
}

int main(void)
{
    const char fileName[] = "text.txt";
    int emptyLines = getEmptyLines(fileName);
    if (emptyLines >= 0) {
        printf("The number of empty lines is %d", emptyLines);
    }
    return 0;
}
