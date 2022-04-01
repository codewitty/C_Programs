#include <stdio.h>
#include <string.h>

struct Taxi {
    int id;
    float miles;
};

void printtaxi(struct Taxi this) {
    printf("%d\t%f", this.id, this.miles);
}

void parseInput(char* inputString, struct Taxi taxies[10]){
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
    struct Taxi taxies[10] = {{0, 0.0}, {0, 0.0}, {0, 0.0}, 
                                {0, 0.0}, {0, 0.0}, {0, 0.0}, 
                                {0, 0.0}, {0, 0.0}, {0, 0.0}, {0, 0.0}};
    int flag = 1;
    while(flag == 1){
        printf("> ");
        fgets(str, 256, stdin);
        parseInput(str, taxies);
    }
    return 0;
}
