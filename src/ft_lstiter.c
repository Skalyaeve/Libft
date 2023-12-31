/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anguinau <anguinau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/20 00:18:07 by anguinau          #+#    #+#             */
/*   Updated: 2020/11/21 20:07:07 by anguinau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

void ft_lstiter(t_list *lst, void (*f)(void *))
{
        while (lst && f)
        {
                f(lst->content);
                lst = lst->next;
        }
}
