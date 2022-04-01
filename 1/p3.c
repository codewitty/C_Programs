#include <stdio.h>
#include <string.h>

struct Node {
   char* string;
   int   start;
   int   length;
};

void printNode(struct Node this) {
    printf("string: %s, start: %d, end: %d", this.string, this.start, this.length);
}

void parseInput(char* inputString){
    int start, length;
    int i = 0;
    char * string;
    char * token = strtok(inputString, ",");
    int r;
    r = 0;
    while (token = strtok(0, ",")) {
        if( r == 0 ) {
            string = token;
            int k = 0;
            printf("String token: %s", token);
        }
        else if( r == 1 ) {
            int num;
            start = atoi(token);
            printf("Start token: %d", start);
            //input.start = num;
        }
        else {
            int nums;
            length = atoi(token);
            //input.length = nums;
        }
        r += 1;
    }
    printf("String Length is:%d", strlen(string));
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
    parseInput(str);
    printNode(input);
    //printString(str, input.start, input.length);
    //printf("\n");
    return 0;
}
