/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anguinau <anguinau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/19 02:11:09 by anguinau          #+#    #+#             */
/*   Updated: 2020/11/21 20:07:53 by anguinau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

void ft_putendl_fd(char *s, int fd)
{
        char end;

        if (s)
        {
                end = '\n';
                while (*s++)
                        write(fd, (s - 1), 1);
                write(fd, &end, 1);
        }
}
