#include <stdio.h>
#include <zlib.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  const char *version = zlibVersion();

  version = zlibVersion();

  printf("%s\n", version);

  *(int*) 0 = 0;

  return 0;
}
