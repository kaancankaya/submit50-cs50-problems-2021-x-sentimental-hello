#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int startsize; 
    int years = 0;
  do
{
   startsize = get_int("Enter your start size.");
}
  while (startsize < 9);
  
do
   endsize = get_int("Enter your end size.");
}
  while (endsize < startsize);
  while (startsize > endsize);
  
  startsize = startsize + (startsize /3) - (startsize /4);
  years++;
  
  printf("Years: %i\n", years)
}
