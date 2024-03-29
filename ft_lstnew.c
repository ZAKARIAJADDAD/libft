/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zjaddad <zjaddad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 20:39:07 by zjaddad           #+#    #+#             */
/*   Updated: 2023/01/18 23:29:52 by zjaddad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_bonus.h"

t_list *ft_lstnew(void *content)
{
	t_list	*p = NULL;
	
	p = malloc(sizeof(t_list));
	if (p == NULL)
		return (NULL);
	p->content = content;
	p->next = NULL;
	return (p);
}