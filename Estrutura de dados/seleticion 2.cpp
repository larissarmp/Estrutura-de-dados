#include <stdio.h>
 #include<iostream>
int main()
{
   int array[100], n, i, d, pos, aux;
 
   printf("Enter number of elements\n");
   scanf("%d", &n);
 
   printf("Enter em %d integrantes\n", n);
 
   for ( i = 0 ; i < n ; i++ )
      scanf("%d", &array[i]);
 
   for ( i = 0 ; i < ( n - 1 ) ; i++ )
   {
      pos = i;
 
      for ( d = i + 1 ; d < n ; d++ )
      {
         if ( array[pos] > array[d] )
            pos = d;
      }
      if ( pos != i )
      {
         aux = array[i];
         array[i] = array[pos];
         array[pos] = aux;
      }
   }
 
   printf("Em ordem:\n");
 
   for ( i = 0 ; i < n ; i++ )
      printf("%d\n", array[i]);
 system("pause");
   return 0;
}
