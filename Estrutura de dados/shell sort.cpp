
#include<stdio.h>
#include<iostream> 
int main()
{
   int j,k,A[1000],n,b,h=1;
   printf("insira o numero de elementos\n");
   scanf("%d", &n);
   
   printf("Enter em %d integrantes de vetores\n", n);
       for(k=0;k<n;k++)
                        scanf("%d",&A[k]);
       
       do{
                        h=h*3+1;
                        }while(h<n); 
       do{
             h=(h-1)/3;
             for(k=h;k<=n;k++){
                              b=A[k];
                              j=k;
                              
                              while(j>=0 && A[j-h]>b){
                              A[j]=A[j-h];
                              j-=h;
                              
                              if(j<h) break;
             }
             A[j]=b;
             }
   }while(h!=1); 
   printf("Em ordem crecente:\n");
   for (k = 0; k <= n -1; k++) {
   printf("%d\n", A[k]);
  }
 system("pause");
 return 0;                                                                                                                                                                      
}
