#include<stdio.h>
#include <stdlib.h>
#include<iostream>


int n,v[1000],j,i,x,aux, dir,esq;



       void part(int v[],int esq,int dir)
       {
       int i=1, j=1,x, aux;
       
   i=dir;
   j=esq;
   x=v[(i+j)/2];
   do{
                while(x>=v[i]) (i)++ ;
                while(x<=v[j]) (j)++;
                if(i<=j){
                aux=v[i];
                v[i]=v[j];
                v[j]=aux;
                (i)++;
                (j)--;
                }
                }while(i<=j);


  
   
   if(esq<j)
   {part(v,esq,j);}
   if(i<dir)
   {part(v,i,dir);}
   
  
}
 
   int main(){
       
          printf("insira o numero de elementos\n");
   scanf("%d", &n);
   
   printf("Enter em %d integrantes de vetores\n", n);
       for(i=0;i<n;i++)
                        scanf("%d",&v[i]);
       printf("Em ordem crecente:\n");
   for (i = 0; i <= n -1; i++) {
        part(v,1,n);
   printf("%d\n", v[i]);
                
                }  
    system("pause") ;  
    return 0;    
}

