/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main(){
    int i=1;
    int j=1;
    for (j=1;i*j<=81;j++ ){
        
        printf("%d*%d=%d\t",i,j,i*j);
        if (j*i==81){
            break;
        }
        if (j==9){
            printf("\n");
            i++;
            j=0;
        }
        
    }
    return 0;
}
