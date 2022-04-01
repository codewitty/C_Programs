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
    while (token != NULL) {
        if( r == 0 ) {
            string = token;
            int k = 0;
        }
        else if( r == 1 ) {
            int num;
            start = atoi(token);
        }
        else {
            int nums;
            length = atoi(token);
        }
        r += 1;
        token = strtok(NULL, ",");
    }
    int len;
    len = strlen(string);
    //printf("String Length is: %d", len);
    if( start + length > len){
        start -= 1;
        for(start; start < len; start++){
            printf("%c", string[start]);
        }
        printf("\n");
    }
    else {
        start -= 1;
        for(start; start < length; start++){
            printf("%c", string[start]);
        }
        printf("\n");
    }
}

int main() {
    char str[256];
    struct Node input;
    printf("Please Enter a String and the starting index and length.\n> ");
    fgets(str, 256, stdin);
    parseInput(str);
    return 0;
}
