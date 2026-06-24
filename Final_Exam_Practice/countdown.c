// C program Recursive 
#include <stdio.h>
int countdown(int a){
    if(a>=0){
        printf("\n%d\n",a);
        countdown(a-1);
    }
}
int main (){
    printf("This is the countdown:");
    countdown(5);
    return 0;
}
