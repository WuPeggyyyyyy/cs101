/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main(){
    double PI=0.0f;
    int i=1;
    while((int)(PI*100000)!=314159){
        if(i%2==1){
            //PI=PI+4/i
            PI+=4.0/(2*i-1); //+= 相加後賦值
        }
        else{
            PI-=4.0/(2*i-1); //-= 相減後賦值
        }
        i++;
    }
    //printf("%d\n",i);
    printf("%f",PI);
    return 0;
}
