/*
MAINA WANGUI
CT101/G/23707/24
*/

#include <stdio.h>
// An array is an ordered collection of finite elements of the same data type and stored atadjacent memory locations.

int main() {
    int i,j;

    int scores[2][4] = {{65,92,84,72}, {36,70,59,67}};

        for(i=0; i<2; i++){
        for(j=0; j<4; j++){
            printf("Scores [%d][%d] = %d \n", i,j, scores[i][j]);
        }
    }

    return 0;
}