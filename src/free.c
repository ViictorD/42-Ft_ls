/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdarmaya <vdarmaya@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/08 23:52:20 by vdarmaya          #+#    #+#             */
/*   Updated: 2017/01/09 02:08:58 by vdarmaya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_ls.h"

void	free_elem(t_elem **elem)
{
	t_elem	*tmp2;

	while (*elem)
	{
		tmp2 = (*elem)->next;
		free((*elem)->name);
		free((*elem)->path);
		free(*elem);
		*elem = tmp2;
	}
}

void	free_list(t_list **elem)
{
	t_list	*tmp2;

	while (*elem)
	{
		tmp2 = (*elem)->next;
		free((*elem)->content);
		free(*elem);
		*elem = tmp2;
	}
}

void	free_argv(char ***argv)
{
	char	**del;
	int		i;

	del = *argv;
	i = -1;
	while (del[++i])
		free(del[i]);
}