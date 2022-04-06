/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   malloc.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niduches <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/13 15:21:55 by niduches          #+#    #+#             */
/*   Updated: 2021/09/13 16:06:23 by niduches         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_MALCOLM_H
# define FT_MALCOLM_H

# include <inttypes.h>
# include <limits.h>
# include <stdint.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <fcntl.h>
# include <signal.h>
# include <sys/socket.h>
# include <linux/if_packet.h>
# include <net/ethernet.h>
# include <arpa/inet.h>
# include <sys/types.h>
# include <ifaddrs.h>
# include <netinet/if_ether.h>
# include <net/if.h>
# include <netdb.h>
# include <time.h>

# include "../libft/libft.h"

# define DEVELOPEMENT
# define RETURN_FAILURE          (0)
# define RETURN_SUCCESS          (1)
# define RETURN_INVALID_ARGUMENT (2)
# define ARGUMENT_CONTINUE       (0)
# define ARGUMENT_ERROR          (1)
# define ARGUMENT_NO_CONTINUE    (2)
# define FALSE                   (0)
# define TRUE                    (1)
# define NIL                     ('\0')

# define FIRST_BIT      (0x01)
# define SECOND_BIT     (0x02)
# define THIRD_BIT      (0x04)
# define FOURTH_BIT     (0x08)
# define FIFTH_BIT      (0x10)
# define SIXTH_BIT      (0x20)
# define SEVENTH_BIT    (0x40)
# define EIGHTH_BIT     (0x80)

# define NOT_FIRST_BIT      (0xFE)
# define NOT_SECOND_BIT     (0xFD)
# define NOT_THIRD_BIT      (0xFB)
# define NOT_FOURTH_BIT     (0xF7)
# define NOT_FIFTH_BIT      (0xEF)
# define NOT_SIXTH_BIT      (0xDF)
# define NOT_SEVENTH_BIT    (0xBF)
# define NOT_EIGHTH_BIT     (0x7F)

/**
* ARGUMENT
*/
# define NOT_AN_OPTION (UINT8_MAX)

enum e_malcolm_simple_option_list
{
    MALCOLM_HELP = 0,
    MALCOLM_VERBOSE,
    MALCOLM_COLOR,
    MALCOLM_SIMPLE_OPTION_NUMBER,
    NO_MALCOLM_SIMPLE_OPTION                                                   // range UINT8_MAX
};

enum e_malcolm_argument_option_list
{
    MALCOLM_TIMEOUT,
    MALCOLM_BIDIRECTIONAL,
    MALCOLM_NETWORK_NAME,
    MALCOLM_ARGUMENT_OPTION_NUMBER,
    NO_MALCOLM_ARGUMENT_OPTION
};

struct  sstc_argument
{
    uint8_t   u8_global_status_;
    // FIRST_BIT     Structure initialized      1 = Y / 0 = N
    // SECOND_BIT    Error                      1 = Y / 0 = N

    uint8_t    u8_simple_options_[MALCOLM_SIMPLE_OPTION_NUMBER];
    uint8_t    u8_argument_options_[MALCOLM_ARGUMENT_OPTION_NUMBER];
    uint8_t   *ptr_u8_argument_option_value_str_[MALCOLM_ARGUMENT_OPTION_NUMBER];
    uint8_t  **dbl_ptr_u8_ip_or_mac_address_str_;
    uint64_t   u64_number_of_ip_or_mac_address_in_argument_;
};

const   uint8_t *malcolm_simple_options[MALCOLM_SIMPLE_OPTION_NUMBER];

const   uint8_t *malcolm_argument_options[MALCOLM_ARGUMENT_OPTION_NUMBER];

# define MAC_ADDRESS_BYTE_LEN    (6)
# define IP_ADDRESS_BYTE_LEN     (4)
# define MAX_INTERFACE_NAME_LEN  (20)
# define PACKET_MAX_LEN          (1000)

struct  cstc_malcolm_data
{
    uint8_t   u8_global_status_;
    // FIRST_BIT     Structure initialized      1 = Y / 0 = N
    // SECOND_BIT    Error                      1 = Y / 0 = N

    struct sstc_argument sstc_program_argument_;
    uint8_t              u8_source_ip_addr_[IP_ADDRESS_BYTE_LEN];
    uint8_t              u8_source_mac_addr_[MAC_ADDRESS_BYTE_LEN];
    uint8_t              u8_target_ip_addr_[IP_ADDRESS_BYTE_LEN];
    uint8_t              u8_target_mac_addr_[MAC_ADDRESS_BYTE_LEN];
    uint8_t              u8_interface_mac_addr_[MAC_ADDRESS_BYTE_LEN];
    uint8_t              u8_interface_name_str_[MAX_INTERFACE_NAME_LEN];
    int                  s32_socket_;
};

struct cstc_malcolm_data *ptr_cstc_gbl_malcolm_data;

/**
* ARGUMENT FUNCTION
*/
uint8_t Fu8__structure_argument_init(struct sstc_argument *ptr_sstc_pssd_argument);
uint8_t Fu8__structure_argument_close(struct sstc_argument *ptr_sstc_pssd_argument);
uint8_t Fu8__structure_argument_reset(struct sstc_argument *ptr_sstc_pssd_argument);
void    Fv__structure_argument_display(struct sstc_argument *ptr_sstc_pssd_argument);
uint8_t Fu8__load_data_from_argument(struct sstc_argument *ptr_sstc_pssd_argument, int32_t s32_pssd_program_argument_number, uint8_t **dbl_ptr_u8_pssd_program_arguments);

/**
* HELP
*/
void    fv__help(void);

/**
* UTILS
*/
uint8_t Fu8__copying_string_to_allocated_string(uint8_t *ptr_u8_pssd_source_str, uint8_t **dbl_ptr_u8_pssd_destination_str);

#endif /* FT_MALCOLM_H */
