#include <stdio.h>
#include <string.h>
#include <stdlib.h>

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
    char* string;
    char * token = strtok(inputString, " ");
    int r;
    r = 0;
    //printf("Input String is:%s", inputString);
    while (token != NULL) {
        if( r == 0 ) {
            string = token;
            char check[] = "quit";
            if (strcmp( string, check ) == 10) {
                exit(0);
            }
            else if (strcmp( string, "Display" ) == 10) {
                int p = 0;
                for (p; p < 10; p++) {
                    if ( taxies[p].id > 0 ) {
                        printf("%d\t%.1f\n", taxies[p].id, taxies[p].miles);
                    }
                }
            }
        }
        else if( r == 1 ) {
            int num;
            num = atoi(token);
            if ( taxies[num - 1].id == 0 && strcmp(string, "AddCar") == 0){
                taxies[num - 1].id = num;
            }
            else if ( taxies[num - 1].id > 0 && strcmp(string, "AddCar") == 0){
                printf("Error! Car with ID %d already exists in the database\n", num);
                return;
            }
            else if ( taxies[num - 1].id == 0 && strcmp(string, "AddCar") != 0){
                printf("Error! Car with ID %d doesn't exist in the database\n", num);
                return;
            }
            else if ( taxies[num - 1].id > 0 && strcmp(string, "Reset") == 10){
                taxies[num - 1].miles = 0.0;
            }
        }
        else {
            int nums;
            length = atoi(token);
        }
        r += 1;
        token = strtok(NULL, " ");
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
        int i = 0;
        parseInput(str, taxies);
    }
    return 0;
}
