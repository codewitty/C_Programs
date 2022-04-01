#include <stdio.h>
#include <string.h>

struct Node {
   char  string[256];
   int   start;
   int   length;
};

void parseInput(char* inputString, struct Node input){
    char delim = ",";
    int i = 0;
    char**array[3];
    //char array[3][256];
    int lengthInput = strlen(inputString);
    int j;
    char * token = strtok(inputString, ",");
    while (token = strtok(0, ",")) {
          puts(token);
    }
    /*
    while(token != NULL){
        printf( " %s\n", token );
        token = strtok(NULL, ",");
    }
    */
}

void printString(const char* inputString, int start, int length){
    int i = 0;
    int lengthInput = strlen(inputString);
    for(i; i < lengthInput; i++){
        printf("%c", inputString[i]);
    }
}

int main() {
    char str[256];
    struct Node input;
    printf("Please Enter a String and the starting index and length.\n> ");
    fgets(str, 256, stdin);
    parseInput(str, input);
    printString(str, input.start, input.length);
    printf("\n");
    return 0;
}
