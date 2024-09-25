#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
    if (argc < 2){
        printf("No variable inputted for allocation. Exiting.\n");
        return 1;
    }
    int bytes = atoi(argv[1]);
    int megabytes = bytes * 1024 * 1024;
    int *new_arr = malloc(megabytes);

    int num_ints = megabytes / sizeof(int);
    while (1){
        for (int i=0; i<num_ints; i++){
            new_arr[i] = i;    
        }
    }
    return 0;
}