/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main(){
    int i=54321;
    int j=i/1000%10; //4.321
    int k=i%10; //1
    printf("%d",i+(k-j)*1000+j-k);
    return 0;
}
