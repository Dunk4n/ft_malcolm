/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ls.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niduches <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/13 15:21:55 by niduches          #+#    #+#             */
/*   Updated: 2021/09/13 16:06:23 by niduches         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_SSL_H
# define FT_SSL_H

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

typedef struct  blob_s
{
    uint8_t   u8_global_status_;
    // FIRST_BIT     Structure initialized      1 = Y/ 0 = N
    // SECOND_BIT    data set                   1 = Y/ 0 = N

    uint8_t  *ptr_u8_data_blob_;
    uint64_t  u64_length_data_blob_;
}               blob_t;

/**
* ARGUMENT
*/
# define NOT_AN_OPTION (UINT8_MAX)

enum e_malcolm_simple_option_list
{
    MALCOLM_HELP = 0,
    MALCOLM_BIDIRECTIONAL,
    MALCOLM_SIMPLE_OPTION_NUMBER,
    NO_MALCOLM_SIMPLE_OPTION                                                   // range UINT8_MAX
};

enum e_malcolm_argument_option_list
{
    MALCOLM_TIMEOUT,
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

# define MAC_ADDRESS_BYTE_LEN (6)
# define IP_ADDRESS_BYTE_LEN  (4)
# define PACKET_MAX_LEN       (1000)

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

/**
* FAKE
*/
# include <sys/socket.h>
# include <sys/types.h>
# include <ifaddrs.h>
# include <netinet/if_ether.h>
//struct sockaddr_ll
//{
//           unsigned short sll_family;   /* Always AF_PACKET */
//           unsigned short sll_protocol; /* Physical-layer protocol */
//           int        sll_ifindex;  /* Interface number */
//           unsigned short sll_hatype;   /* ARP hardware type */
//           unsigned char  sll_pkttype;  /* Packet type */
//           unsigned char  sll_halen;    /* Length of address */
//           unsigned char  sll_addr[8];  /* Physical-layer address */
//       };
//
//struct ifaddrs
//{
//           struct ifaddrs  *ifa_next;    /* Next item in list */
//           char        *ifa_name;    /* Name of interface */
//           unsigned int ifa_flags;   /* Flags from SIOCGIFFLAGS */
//           struct sockaddr *ifa_addr;    /* Address of interface */
//           struct sockaddr *ifa_netmask; /* Netmask of interface */
//           union {
//           struct sockaddr *ifu_broadaddr;
//                    /* Broadcast address of interface */
//           struct sockaddr *ifu_dstaddr;
//                    /* Point-to-point destination address */
//           } ifa_ifu;
//       #define      ifa_broadaddr ifa_ifu.ifu_broadaddr
//       #define      ifa_dstaddr   ifa_ifu.ifu_dstaddr
//           void        *ifa_data;    /* Address-specific data */
//       };
//
//
//struct	ether_header {
//	u_char	ether_dhost[6]; // destinator IP
//	u_char	ether_shost[6]; // sender IP
//	u_short	ether_type;     // packet type ID field
//};
//
//struct	ether_arp
//{
//	struct	arphdr ea_hdr;	/* fixed-size header */
//	u_char	arp_sha[6];	/* sender hardware address */
//	u_char	arp_spa[4];	/* sender protocol address */
//	u_char	arp_tha[6];	/* target hardware address */
//	u_char	arp_tpa[4];	/* target protocol address */
//};

#endif /* FT_SSL_H */
