#include <stdio.h>
int p(int n); // function Declearation 

int main(){
    int n,s;
    printf("Enter no. of matrices:");
    scanf("%d",&n);
    s=p(n);
    printf("no. of ways of matrice multiplication is %d",s);
    return 0;
}

int p(int n){
    int j,k=0,a,b;
    if (n==1||n==2){
        k=1;
    }
    else{
    for(j=1;j<=n-1;j++){
        a=p(j);
        b=p(n-j);
        k=k+(a*b);
    }
}
    return k;
}