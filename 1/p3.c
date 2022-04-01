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
    for(i; i < 3; i++){
        char out[256] = "";
        j = 0;
        char check = (char) inputString[j];
        for(j; inputString[j] != delim; j++){
            if (inputString[j] == " "){
                continue;
            }
            else{
                out[j] = inputString[j];
            }
        printf("Out Check %d\n", i);
        int x = 0;
        int ll = strlen(out);
        for(x; x < ll; x++){
            printf("%c", out[x]);
        }
        printf("\n");

        array[i] = out;
        }
    }
    int l = 0;
    for(l; l < 3; l++){
        printf("%s\n", array[l]);
    }
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
