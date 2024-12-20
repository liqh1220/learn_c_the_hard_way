#include <stdio.h>

#include <stdlib.h>
#include <math.h>

int hello();
int main (int argc, char *argv[])
{

int arr[4] = {1, 2, 3, 4};

for (int i = 0; i < 4; i++)
{

printf("%d\n", arr[i]);

}

hello();
return 0;
}


int hello()
{
printf("Hello world\n");

return 0;
}
