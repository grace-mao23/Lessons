#include <stdio.h>
#include <stdlib.h>
#include "lesson17Heads.h"

int main() {
  struct student foo = example();
  printf("%s\n", foo.name);
  printf("%d\n", foo.id);
}
