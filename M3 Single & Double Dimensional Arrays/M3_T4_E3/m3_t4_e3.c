// Online C compiler to run C program online
#include <stdio.h>

int main() {
    // Initilizing custom array
    int a[][3]={
        {30,50,70},
        {50,80,90},
        {60,10,20}
    };
    
    // calling transpose function
    transposeMatrix(a);
}

int transposeMatrix(int a[3][3]){
    
    // Declaring new array to store transpose array
    int b[3][3];
    
    // Transposeing array of a and storing it in array b
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            b[i][j]=a[j][i];
        }
    }
    
    // Printing array transposion array b
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            printf("%d\t",b[i][j]);
        }
        printf("\n");
    }
}
