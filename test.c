#include <stdio.h>

extern unsigned int add(unsigned int lhs, unsigned int rhs);

int main() {
  printf("add(40,2) = %u\n", add(40,2));

  return 0;
}

