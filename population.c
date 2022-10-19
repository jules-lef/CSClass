#include <cs50.h>
#include <stdio.h>

int main(void)
{
      int start,end,years,BR,DR;
  do
  {
      start = get_int("Number over 9: ");
  }
  while (start < 9);
do
{
    end = get_int("End size: ");
    }
    while (end < start);

    for (years = 0; start < end; years++)
    {
        BR = start/3;
        DR = start/4;
    start = start + BR - DR;
    }

    {
        printf("years: %i\n", years);
    }


}
