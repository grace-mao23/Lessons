#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct student { char name[5]; int id; };

struct student example() {
  srand( time(NULL) );

  int x = rand();
  char string[5];
  int count = 0;
  for (count = 0; count < sizeof(string)-1; count++) {
    string[count] = rand();
  }
  string[sizeof(string) - 1] = '\0';

  struct student s;

  strcpy(s.name, string);
  s.id = x;

  return s;

}
