#include <stdio.h>
int main(){
  int input[100], n, i;
  scanf("%d", &n);
  for(i=0; i<n; i++){
    scanf("%d", &input[i]);
  }
  int *ptr = &input[0]; // ini first elemen ya

  int sum = 0;
  for(int i=0; i<n; i++){
    sum += *(ptr+i); 
    }
  float avg;
  avg = sum/n;
  
  int max;
  int idx=0;
  for(int i=0; i<sum; i++){
    max = *(ptr+i);
    idx = idx + i;
  }
  printf("SUM %d\n", &sum);
  printf("AVG %.2f\n", &avg);
  printf("MAX %d\n", &max);
  printf("IDX %d\n", &idx);

  return 0;
}



