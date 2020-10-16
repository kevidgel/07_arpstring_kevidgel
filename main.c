#include <stdio.h>
#include <string.h>

double average(int* arr, int size)
{
  int sum = 0;
  int i;
  for(i = 0; i < size; i++)
  {
    sum += *(arr + i);
  }
  double average = (double) sum / size;
  return average;
}

void copy(int* arr1, int* arr2, int size)
{
  int i;
  for(i = 0; i < size; i++)
  {
    *(arr2 + i) = *(arr1 + i);
  }
}

int length(int* str)
{
  int i = 0;
  while(*(str + i))
  {
    i++;
  }
  return i - 1;
}

int main() {
  int arr[5] = {1,2,3,4,5};
  int arrr[5] = {7,8,9,10,11};

  printf("average of arr is %lf\n", average(arr, 5));

  copy(arr, arrr, 5);
  printf("arr: ");
  int i;
  for(i = 0; i < 5; i++)
  {
    printf("%d ", *(arr+i));
  }
  printf("\narrr: ");
  for(i = 0; i < 5; i++)
  {
    printf("%d ", *(arrr+i));
  }
  printf("\n");

  printf("length of arr is: %d\n", length(arr));

  char s1[] = "this";
  char s2[256];
  strcpy(s2, s1);
  printf("s1: %s\ns2: %s\n", s1, s2);
  strcat(s2, s1);
  printf("s1: %s\ns2: %s\n", s1, s2);
  printf("strcmp(s1,s2): %d\n", strcmp(s1,s2));
  char c = 's';
  char *j;
  j  = strchr(s2, c);
  printf("%s\n", j );




  return 0;
}
