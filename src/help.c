/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   help.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niduches <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/13 14:52:10 by niduches          #+#    #+#             */
/*   Updated: 2021/09/13 16:18:08 by niduches         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "malcolm.h"

void    fv__help(void)
    {
    ft_printf("usage: ft_malcolm [OPTIONS] SRC_IP SRC_MAC TARGET_IP TARGET_MAC\n");
    ft_printf("\nOPTIONS:\n");
    ft_printf("    -b       send bi-directional spoof\n");
    ft_printf("    -t sec   timeout seconds to wait for reply\n");
    }
