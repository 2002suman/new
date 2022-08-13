#include <stdio.h>
#include <stdlib.h> 
  
int main()
{
    FILE *fptr;
  
    char filename[100], c;
  
    printf("Enter the filename to open \n");
    scanf("%s", filename);
  
     fptr = fopen(filename, "r");
    c = fgetc(fptr);
    while (c != EOF)
    {
        printf ("%c", c);
        c = fgetc(fptr);
    }
  
    fclose(fptr);
    return 0;
}
