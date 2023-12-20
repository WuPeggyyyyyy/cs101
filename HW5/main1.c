/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main() {
    int n = 7;
    for (int i=1 ; i<=n ; i++){ //數字
        for (int j=1 ; j<=n ; j++ ){ 
            if(j<=n-i){
                printf(" ");
            }
            else {
                printf("%d ",i); //空格印6次後(6=7-1),打印i=1
            }
        }
    printf("\n");
    }
    return 0;
}
