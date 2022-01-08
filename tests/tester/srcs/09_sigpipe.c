/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   09_sigpipe.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmariot <cmariot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/08 17:48:55 by cmariot           #+#    #+#             */
/*   Updated: 2022/01/08 22:53:36 by cmariot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tests.h"

int	sigpipe(void)
{
	if (raise(SIGPIPE))
		return (0);
	else
		return (-1);
}
