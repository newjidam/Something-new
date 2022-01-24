#include <unistd.h>

void new(void)
{
  write(1,"new",3);
}

int main()
{
  new();
}

