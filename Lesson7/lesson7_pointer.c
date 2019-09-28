int main() {
  unsigned int i = 261;
  int *p = &i;
  char *c = &i;

  printf("p: %p points to: %d\n", p, *p);
  printf("c: %p points to: %d\n\n", c, *c);

  printf("i decimal: %u, i hex: %x\n\n", i, i);

  printf("i: %p\n\n", c);
  printf("i in bytes: %hhu, i in bytes hex: %hhx\n\n", *c, *c);
  c++;
  printf("i in bytes: %hhu, i in bytes hex: %hhx\n\n", *c, *c);
  c++;
  printf("i in bytes: %hhu, i in bytes hex: %hhx\n\n", *c, *c);
  c++;
  printf("i in bytes: %hhu, i in bytes hex: %hhx\n\n", *c, *c);

  c++;
  *c = &i;
  printf("i in bytes: %hhu, i in bytes hex: %hhx\n\n", *c, *c);

}
