#include <stdio.h>
#include <stdlib.h>

void merge(int vec[], int vecSize) {
  int mid;
  int i, j, k;
  int* tmp;
 
  tmp = (int*) malloc(vecSize * sizeof(int));
  if (tmp == NULL) {
    exit(1);
  }
 
  mid = vecSize / 2;
 
  i = 0;
  j = mid;
  k = 0;
  while (i < mid && j < vecSize) {
    if (vec[i] <= vec[j]) {
      tmp[k] = vec[i++];
    }
    else {
      tmp[k] = vec[j++];
    }
    ++k;
  }
 
  if (i == mid) {
    while (j < vecSize) {
      tmp[k++] = vec[j++];
    }
  }
  else {
    while (i < mid) {
      tmp[k++] = vec[i++];
 
    }
  }
 
  for (i = 0; i < vecSize; ++i) {
    vec[i] = tmp[i];
  }
 
  free(tmp);
}
 
void mergeSort(int vec[], int vecSize) {
  int mid;
 
  if (vecSize > 1) {
    mid = vecSize / 2;
    mergeSort(vec, mid);
    mergeSort(vec + mid, vecSize - mid);
    merge(vec, vecSize);
  }

}
int main(){
    int vec[10]={9,4,1,10,7,8,11,2,3,5};
    mergeSort(vec,10);
    printf("Em ordem crecente:\n");
    int a;
    for(a=0 ; a<10 ; a++){
        printf("%d ",vec[a]);
        }
        system("pause");
        return 0;
}
