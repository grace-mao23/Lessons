#include <stdio.h>
#include <stdlib.h>
#include "lesson17Heads.h"

int main() {
  struct student foo = example();
  printf("\n---EXAMPLE OF STRUCT STUDENT (FOO)---\n");
  //printf("struct student { char name[10]; int id; }\n");
  printf("Name of Student: %s\n", foo.name);
  printf("Student ID: %d\n\n", foo.stuID);

  types();

  printf("---MODIFYING FOO---\n");
  printf("modify(foo) ran\n");
  struct student *f = &foo;
  modify(f);
  printf("New Name of Student: %s\n", foo.name);
  printf("Student ID: %d\n\n", foo.stuID);


}
