#include <stdio.h>


int fmix32 (int h )
{
  h ^= h >> 16;
  h *= 0x85ebca6b;
  h ^= h >> 13;
  h *= 0xc2b2ae35;
  h ^= h >> 16;

  return h;
}

int main(int argv, char * argc[])
{
	int h1 = 1000000;
	h1 = fmix32(h1);
	printf("%d\n", h1);
	return 2;
}