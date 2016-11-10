/*
** my_put_nbr.c for bistromatique in /home/raphael.goulmot/rendu/bistromatique/src/util
** 
** Made by Raphaël Goulmot
** Login   <raphael.goulmot@epitech.net>
** 
** Started on  Thu Nov  3 14:21:18 2016 Raphaël Goulmot
** Last update Thu Nov 10 20:15:17 2016 Raphaël Goulmot
*/

#include "utils.h"

void	my_put_nbr(int nbr)
{
  int	power;

  power = 1;
  if (nbr == 0)
    {
      my_putchar('0');
      return;
    }
  if (nbr < 0)
    {
      my_putchar('-');
      nbr *= -1;
    }
  while (power <= nbr)
    power *= 10;
  power /= 10;
  while (power > 0)
    {
      my_putchar(48 + (nbr / power % 10));
      power /= 10;
    }
}
