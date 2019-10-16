#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

char students[26][10] = { "Amy", "Bernard", "Claire", "David",
                      "Ethan", "Fred", "George", "Hedy", "Isabelle",
                      "Jackie", "Katie", "Lia", "Mia", "Nathan",
                      "Oswald", "Peihua", "Quinn", "Ralph", "Sara",
                      "Tina", "Uma", "Vera", "Wendy", "Xander",
                      "Yifan", "Zack" };

struct student { char name[10]; int stuID; };

struct student example() {
  srand( time(NULL) );

  int x = rand();
  char string[10];
  strcpy(string, students[rand() % 26]);
  string[sizeof(string) - 1] = '\0';

  struct student s;
  strcpy(s.name, string);
  s.stuID = x;

  return s;
}

void types() {
  printf("My struct student takes:\n");
  printf("name: string (char name[10])\n");
  printf("stuID: int (int stuID)\n\n");
}

void modify(struct student *old) {
  strcpy((*old).name, students[rand() % 26]);
  (*old).stuID = rand();
}
