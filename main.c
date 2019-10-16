#include <stdio.h>
#include <stdlib.h>
#include "lesson17Heads.h"

int main() {
  struct student foo1 = example();
  struct student foo2 = example();
  struct student foo3 = example();
  printf("\n---EXAMPLE OF STRUCT STUDENT (FOO1)---\n");
  //printf("struct student { char name[10]; int id; }\n");
  printf("Name of Student: %s\n", foo1.name);
  printf("Student ID: %d\n\n", foo1.stuID);

  types();

  printf("---MODIFYING FOO---\n");
  printf("modify(foo1, Grace, 1) ran\n");
  struct student *f = &foo1;
  modify(f, "Grace", 1);
  printf("New Name of Student: %s\n", foo1.name);
  printf("Student ID: %d\n\n", foo1.stuID);


}
