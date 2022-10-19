#include <cs50.h>
#include <stdio.h>
int main(void)
{
      int height;
  do
  {
      height = get_int("height: ");
  }
  while (height < 1 || height > 8);

for(int i = 0; i<height; i++)
{
    for(int x=0; x<height; x++)
    {
 if (i+x < height-1)
 printf(" ");
 else
 printf("#");
    }
    printf("\n");
}
}
