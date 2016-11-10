/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsabbah <nsabbah@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/05 18:09:56 by nsabbah           #+#    #+#             */
/*   Updated: 2016/11/09 18:24:10 by nsabbah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memccpy(void *dst, const void *src, int c, size_t n)
{
  size_t i;
  unsigned char *src1;
  unsigned char *dst1;

  src1 = (unsigned char*)src;
  dst1 = (unsigned char*)dst;
  i = 0;
  while (i < n)
  {
    dst1[i] = src1[i];
    if(src1[i] == (unsigned char)c)
      return (dst + i + 2);
    i++;
  }
  return NULL;
}