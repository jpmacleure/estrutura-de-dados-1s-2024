#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[]){

    int n = atoi(argv[1]);

    if(n <= 1){
        printf("false");
        exit(0);
    }

    if( (n != 2) && (n % 2 == 0) ){
        printf("false");
        exit(0);
    }

    for(int i = 3; i < n; i += 2){
        if(n % i == 0){
            printf("false");
            exit(0);
        }
    }

    printf("true");

    exit(0);
}