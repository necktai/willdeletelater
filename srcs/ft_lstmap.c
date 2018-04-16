/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntai <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/07 22:28:46 by ntai              #+#    #+#             */
/*   Updated: 2018/04/07 22:32:10 by ntai             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** we only malloc the
** head node and then
** we can append the rest of
** what we get after using the
** function.
*/

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list *head;
	t_list *dummy;

	head = NULL;
	if (lst == NULL)
		return (NULL);
	head = (t_list *)malloc(sizeof(t_list));
	if (head == NULL)
		return (NULL);
	head = f(lst);
	lst = lst->next;
	dummy = head;
	while (lst)
	{
		dummy->next = f(lst);
		dummy = dummy->next;
		lst = lst->next;
	}
	return (head);
}
