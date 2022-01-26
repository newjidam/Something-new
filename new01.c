#include <unistd.h>
#include <stdio.h>

void ft_swap(int *a, int *b)
{
  int temp;
  
  temp = *a;
  *a = *b;
  *b = temp;
}

int main()
{
  int kk = 12;
  int hh = 24;
  int *c = &kk;
  int *d = &hh;

  printf("c: %d, d: %d\n", *c , *d);
  ft_swap(c, d);
  printf("c: %d, d: %d\n", *c , *d);
}
