#include <stdio.h>
#include <stdlib.h>

#define MAX_LEN 1024

void print_image(FILE *fptr);
void change_foreground_blue();
void change_foreground_red();
void change_foreground_yellow();
void change_foreground_green();
void reset();

int main(){
    char *filename = "logo.txt";
    FILE *fptr = NULL;
    change_foreground_green();
    printf("=====================================================================\n");
    if((fptr = fopen(filename,"r")) == NULL)
    {
        fprintf(stderr,"error opening %s\n",filename);
        return 1;
    }
    print_image(fptr);
    fclose(fptr);
    printf("=====================================================================\n");
    return 0;
}

void change_foreground_blue(){
     printf("\033[0;34m");
}

void change_foreground_yellow(){
     printf("\033[0;33m");
}

void change_foreground_red(){
     printf("\033[0;31m");
}

void change_foreground_green(){
     printf("\033[0;32m");
}

void reset(){
    printf("\033[0m");
}

void print_image(FILE *fptr) {
    char read_string[MAX_LEN];
    while(fgets(read_string, sizeof(read_string), fptr) != NULL) {
        printf("%s", read_string);
    }
     printf("\n");
}