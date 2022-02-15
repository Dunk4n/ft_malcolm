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
    ft_printf("usage: ft_malcolm [OPTIONS]   SRC_IP|SRC_NAME   SRC_MAC   TARGET_IP|TARGET_NAME   TARGET_MAC\n");
    ft_printf("\nOPTIONS:\n");
    ft_printf("    -h                            display this help\n");
    ft_printf("    -v                            display additional ARP packet information\n");
    ft_printf("    -c                            display color in message\n");
    ft_printf("    -b [source true mac address]  send another arp reply to the source\n");
    ft_printf("    -n [network interface name]   send the arp on an specific network interface\n");
    ft_printf("    -t [sec]                      timeout seconds to wait for reply\n");
    }
