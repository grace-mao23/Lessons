#include <stdio.h>
#include <stdlib.h>

int main() {
  unsigned int i = 2151686160;
  int *ip = &i;
  char *cp = &i;

  printf("%%d: %d\n", i);
  printf("%%u: %u\n", i);
  printf("%%o: %o\n", i);
  printf("%%x: %x\n", i);
  printf("%%hhx: %hhx\n", i);
  printf("%%hhu: %hhu\n", i);

  printf("ip: %p\n", ip);
  printf("cp: %p\n", cp);
  printf("*ip: %hhu\n", *ip);
  //printf("!!!!!!!!!!!!!!!!%p\n", *ip);
  printf("*cp: %hhu\n", *cp);
  //printf("!!!!!!!!!!!!!!!!%p\n", *cp);

  ip++;
  cp++;
  printf("*ip++: %hhu\n", *ip);
  printf("*cp++: %hhu\n", *cp);

  *ip = *ip + 1;
  *cp = *cp + 1;
  printf("*ip++: %hhu\n", *ip);
  printf("*cp++: %hhu\n", *cp);

  return 0;
  /*char c = 'c';
  int i = 10;
  long l = 1000;
  printf("char: %p\nint: %p\nlong: %p\n", &c, &i, &l);
  printf("char: %lu\nint: %lu\nlong: %lu\n", &c, &i, &l);
  printf("\n");


  char *ch = &c;
  int *in = &i;
  long *lo = &l;
  printf("ch: %c\nin: %d\nlo: %ld\n", *ch, *in, *lo);
  printf("ch: %p\nin: %p\nlo: %p\n", ch, in, lo);
  printf("ch: %p\nin: %p\nlo: %p\n", &ch, &in, &lo);
  printf("\n");

  *ch = 'E';
  printf("ch: %c\n", *ch);
  printf("ch address: %p\n", ch);
  printf("\n");

  char *cha = in;
  printf("cha: %d\n", *cha);
  printf("cha: %p\n", cha);

  *cha = 20;
  printf("original int: %d\n", i);
  printf("pointer int: %d\n", *in);
  printf("\n");

  *in = 65;
  printf("original int: %d\npointer int: %d\nlast int: %c\n",i,*in,*cha);*/
}
