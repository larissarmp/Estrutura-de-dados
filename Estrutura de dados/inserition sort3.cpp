#include <stdio.h>
#include<iostream> 
int main()
{
  int n, array[1000], i, j, aux,x;
 
  printf("insira o mumero de elementos\n");
  scanf("%d", &n);
 
  printf("Enter em %d integrantes de vetores\n", n);
 
  for (i = 0; i < n; i++) {
    scanf("%d", &array[i]);
  }
 
  for (i = 1 ; i <= n ; i++) {
      
      j=i;
    
     
    while ( j >0 && (array[j] < array[j-1])) {
          aux=array[j]; 
          array[j]   = array[j-1];
          array[j-1]=aux;
          j--;
    }
   
  
  }
 
  printf("Em ordem crecente:\n");
 
  for (i = 0; i < n - 1; i++) {
   printf("%d\n", array[i]);
  }
 system("pause");
  return 0;
  
}
