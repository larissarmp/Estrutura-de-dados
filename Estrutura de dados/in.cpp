#include <stdio.h>
#include <iostream>

int main()
{
    int i,j,aux,n,A[n];
    for(i=0;i<n;i++){
                     printf("Insira um numero");
                     scanf("%d", "n");
                     
aux=A[i];
j=i-1;
while(j<=1 &&(A[j]>aux)){
A[j+1]=A[j];
j--;
}
A[j+1]=aux;
                     
                     }
                     system("pause");
}

