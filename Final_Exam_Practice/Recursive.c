// C program Recursive 
#include <stdio.h>
int rec(int n,int m){
    for (int i=0;i<=n;i++){
        if (m!=0){
            return(n + rec(m,n-1));
        }
        else {
            return m;
        }
    }
}
int main() {
    int n , m;
    // Write C code here
    printf("\nWe are going to learn Recursive function:\n");
    printf("\nplease enter how many times you want to do function :");
    scanf("%d",&n);
    printf("\nPlease enter the integer value:");
    scanf("%d",&m);
    printf("The desired output is %d",rec(n,m));

    return 0;
}
