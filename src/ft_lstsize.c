/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anguinau <anguinau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/19 18:37:43 by anguinau          #+#    #+#             */
/*   Updated: 2020/11/21 20:07:21 by anguinau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

int ft_lstsize(t_list *lst)
{
        int i;

        i = 0;
        if (!lst)
                return (0x0);
        while (lst)
        {
                lst = lst->next;
                i++;
        }
        return (i);
}
