#include <stdio.h>
#include <string.h>

// Find maximum in arr[] of size n
int largest(int arr[], int n)
{
    int i;
    int max = arr[0];

    for (i = 1; i < n; i++)
        if (arr[i] > max)
            max = arr[i];
    return max;
}

const char* printString(char* inputString){
    int alpha[26] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    int i = 0;
    int len = strlen(inputString);
    for(i; i < len; i++){
        int ascii = (int) inputString[i];
        if (ascii > 64 && ascii < 91){
            ascii = ascii - 65;
            alpha[ascii] += 1;
        }
        else if(ascii > 96 && ascii < 123){
            ascii = ascii - 97;
            alpha[ascii] += 1;
        }
        else{
            continue;
        }
    }

    // Print array
    int k = 1;
    int large = largest(alpha, 26);
    for (k; k < large + 1; k++){
        int j = 0;
        for (j; j < 26; j++){
            if (alpha[j] == k){
                int character = j + 97;
                printf("%c: %d\n", character, k);
            }
        }
    }

    // Convert Array to lowercase
    //char outString[len] = {} 
    i = 0;
    for (i; i < len; i++){
        inputString[i] = tolower((unsigned char) inputString[i]);
    }

    // Sort Array
    char * outString = inputString;
    char temp;
    i = 0;
    int n = len;
    for (i; i < n-1; i++) {
        int j = i + 1;
        for (j; j < n; j++) {
            if (outString[i] > outString[j]) {
                    temp = outString[i];
                    outString[i] = outString[j];
                    outString[j] = temp;
            }
        }
    }
    return outString;
    
}

void printSorted(const char* inputString){
    int i = 0;
    int lengthInput = strlen(inputString);
    for(i; i < lengthInput; i++){
        int ascii = (int) inputString[i];
        if (ascii > 64 && ascii < 91 || ascii > 96 && ascii < 123){
            printf("%c", inputString[i]);
        }
    }
}

int main() {
    char str[256];
    printf("Please Enter a String not greater than 255 characters.\n> ");
    fgets(str, 256, stdin);
    const char* string = printString(str);
    printSorted(string);
    printf("\n");
    return 0;
}
