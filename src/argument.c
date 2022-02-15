/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   argument.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niduches <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/13 14:52:10 by niduches          #+#    #+#             */
/*   Updated: 2021/09/13 16:18:08 by niduches         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "malcolm.h"

const   uint8_t *malcolm_simple_options[MALCOLM_SIMPLE_OPTION_NUMBER] =
    {
    (uint8_t *) "-h",
    (uint8_t *) "-v",
    (uint8_t *) "-c",
    };

const   uint8_t *malcolm_argument_options[MALCOLM_ARGUMENT_OPTION_NUMBER] =
    {
    (uint8_t *) "-t",
    (uint8_t *) "-b",
    (uint8_t *) "-n",
    };

uint8_t Fu8__structure_argument_init(struct sstc_argument *ptr_sstc_pssd_argument)
    {
    /**
    * Assertion of argument
    */

    /**
    * Check if the structure argument is correctly pointing passed as an argument of the function
    */
    if( ptr_sstc_pssd_argument == NULL)
        {
        /**
        * Treat the case when the structure argument is not correctly pointing passed as an argument of the function
        */

        #ifdef DEVELOPEMENT
        ft_fprintf(STDERR_FILENO, "\033[1;31mERROR\033[0m: in file \033[1m%s\033[0m in function \033[1m%s\033[0m at line \033[1m%d\033[0m\n    the structure argument is not correctly pointing passed as an argument of the function\n", __FILE__, __func__, __LINE__);
        #endif

        #ifdef DEMO
        ft_fprintf(STDERR_FILENO, "\033[1;31mERROR\033[0m: in file \033[1m%s\033[0m at line \033[1m%s\033[0m\n", __FILE__, __LINE__);
        #endif

        #ifdef PRODUCTION
        ft_fprintf(STDERR_FILENO, "\033[1;31mERROR\033[0m\n");
        #endif

        /**
        * Return failure to indicate the structure argument is not correctly pointing passed as an argument of the function
        */
        return (RETURN_FAILURE);
        }
    else
        {
        /**
        * Treat the case when the structure argument is correctly pointing passed as an argument of the function
        */
        }

    /**
    * Check if the structure argument passed in argument of the function is already initialized
    */
    if((ptr_sstc_pssd_argument->u8_global_status_ & FIRST_BIT) != FALSE)
        {
        /**
        * Treat the case when the structure argument passed in argument of the function is already initialized
        */

        #ifdef DEVELOPEMENT
        ft_fprintf(STDERR_FILENO, "\033[1;31mERROR\033[0m: in file \033[1m%s\033[0m in function \033[1m%s\033[0m at line \033[1m%d\033[0m\n    the structure argument passed in argument of the function is already initialized\n", __FILE__, __func__, __LINE__);
        #endif

        #ifdef DEMO
        ft_fprintf(STDERR_FILENO, "\033[1;31mERROR\033[0m: in file \033[1m%s\033[0m at line \033[1m%s\033[0m\n", __FILE__, __LINE__);
        #endif

        #ifdef PRODUCTION
        ft_fprintf(STDERR_FILENO, "\033[1;31mERROR\033[0m\n");
        #endif

        /**
        * Return failure to indicate the structure argument passed in argument of the function is already initialized
        */
        return (RETURN_FAILURE);
        }
    else
        {
        /**
        * Treat the case when  the structure argument passed in argument of the function is not already initialized as expected
        */
        }

    /**
    * Creation of local variable
    */
    uint8_t u8_lcl_cnt;

    /**
    * Initialization of local variable
    */
    u8_lcl_cnt = 0;

    /**
    * Setting all the value of the global status of the structure to false
    */
    ptr_sstc_pssd_argument->u8_global_status_ = 0;
    ptr_sstc_pssd_argument->u8_global_status_ &= NOT_FIRST_BIT;
    ptr_sstc_pssd_argument->u8_global_status_ &= NOT_SECOND_BIT;
    ptr_sstc_pssd_argument->u8_global_status_ &= NOT_THIRD_BIT;
    ptr_sstc_pssd_argument->u8_global_status_ &= NOT_FOURTH_BIT;
    ptr_sstc_pssd_argument->u8_global_status_ &= NOT_FIFTH_BIT;
    ptr_sstc_pssd_argument->u8_global_status_ &= NOT_SIXTH_BIT;
    ptr_sstc_pssd_argument->u8_global_status_ &= NOT_SEVENTH_BIT;
    ptr_sstc_pssd_argument->u8_global_status_ &= NOT_EIGHTH_BIT;

    /**
    * Setting to false all the simple option of the structure argument
    */
    u8_lcl_cnt = 0;
    while(u8_lcl_cnt < MALCOLM_SIMPLE_OPTION_NUMBER)
        {
        ptr_sstc_pssd_argument->u8_simple_options_[u8_lcl_cnt] = FALSE;

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
    * Setting to false all the argument option of the argument
    */
    u8_lcl_cnt = 0;
    while(u8_lcl_cnt < MALCOLM_ARGUMENT_OPTION_NUMBER)
        {
        ptr_sstc_pssd_argument->u8_argument_options_[u8_lcl_cnt] = FALSE;

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
    * Setting to null all the argument option value of the structure argument
    */
    u8_lcl_cnt = 0;
    while(u8_lcl_cnt < MALCOLM_ARGUMENT_OPTION_NUMBER)
        {
        /**
        * Allocating the actual argument option value
        */
        ptr_sstc_pssd_argument->ptr_u8_argument_option_value_str_[u8_lcl_cnt] = NULL;
        ptr_sstc_pssd_argument->ptr_u8_argument_option_value_str_[u8_lcl_cnt] = (uint8_t *) malloc(sizeof(uint8_t) * 1);

        /**
        * Check if the allocation of the actual argument option value failed
        */
        if(ptr_sstc_pssd_argument->ptr_u8_argument_option_value_str_[u8_lcl_cnt] == NULL)
            {
            /**
            * Treat the case when the allocation of the actual argument option value failed
            */

            #ifdef DEVELOPEMENT
            ft_fprintf(STDERR_FILENO, "\033[1;31mERROR\033[0m: in file \033[1m%s\033[0m in function \033[1m%s\033[0m at line \033[1m%d\033[0m\n    The allocation of the actual argument option value failed\n", __FILE__, __func__, __LINE__);
            #endif

            #ifdef DEMO
            ft_fprintf(STDERR_FILENO, "\033[1;31mERROR\033[0m: in file \033[1m%s\033[0m at line \033[1m%s\033[0m\n", __FILE__, __LINE__);
            #endif

            #ifdef PRODUCTION
            ft_fprintf(STDERR_FILENO, "\033[1;31mERROR\033[0m\n");
            #endif

            /**
            * Return failure to indicate the allocation of the actual argument option value failed
            */
            return (RETURN_FAILURE);
            }
        else
            {
            /**
            * Treat the case when the allocation of the actual argument option value succeeded
            */

            ptr_sstc_pssd_argument->ptr_u8_argument_option_value_str_[u8_lcl_cnt][0] = NIL;
            }

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
    * Allocating the dynamique array of ip or mac address in the structure argument passed in argument of the function
    */
    ptr_sstc_pssd_argument->dbl_ptr_u8_ip_or_mac_address_str_ = NULL;
    ptr_sstc_pssd_argument->dbl_ptr_u8_ip_or_mac_address_str_ = (uint8_t **) malloc(sizeof(uint8_t *) * 1);

    /**
    * Check if the allocation of the the dynamique array of ip or mac address in the structure argument passed in argument of the function failed
    */
    if(ptr_sstc_pssd_argument->dbl_ptr_u8_ip_or_mac_address_str_ == NULL)
        {
        /**
        * Treat the case when the allocation of the the dynamique array of ip or mac address in the structure argument passed in argument of the function failed
        */

        #ifdef DEVELOPEMENT
        ft_fprintf(STDERR_FILENO, "\033[1;31mERROR\033[0m: in file \033[1m%s\033[0m in function \033[1m%s\033[0m at line \033[1m%d\033[0m\n    the allocation of the the dynamique array of ip or mac address in the structure argument passed in argument of the function failed\n", __FILE__, __func__, __LINE__);
        #endif

        #ifdef DEMO
        ft_fprintf(STDERR_FILENO, "\033[1;31mERROR\033[0m: in file \033[1m%s\033[0m at line \033[1m%s\033[0m\n", __FILE__, __LINE__);
        #endif

        #ifdef PRODUCTION
        ft_fprintf(STDERR_FILENO, "\033[1;31mERROR\033[0m\n");
        #endif

        /**
        * Return failure to indicate the allocation of the the dynamique array of ip or mac address in the structure argument passed in argument of the function failed
        */
        return (RETURN_FAILURE);
        }
    else
        {
        /**
        * Treat the case when the allocation of the the dynamique array of ip or mac address in the structure argument passed in argument of the function succeeded
        */

        /**
        * Setting the first path of the dynamique array of ip or mac address in the structure argument passed in argument of the function to nil
        */
        ptr_sstc_pssd_argument->dbl_ptr_u8_ip_or_mac_address_str_[0]         = NULL;
        ptr_sstc_pssd_argument->u64_number_of_ip_or_mac_address_in_argument_ = 0;
        }

    /**
    * Setting the structure argument to initialized
    */
    ptr_sstc_pssd_argument->u8_global_status_ |= FIRST_BIT;

    return (RETURN_SUCCESS);
    }

uint8_t Fu8__structure_argument_close(struct sstc_argument *ptr_sstc_pssd_argument)
    {
    /**
    * Assertion of argument
    */

    /**
    * Check if the structure argument is correctly pointing passed as an argument of the function
    */
    if(ptr_sstc_pssd_argument == NULL)
        {
        /**
        * Treat the case when the structure argument is not correctly pointing passed as an argument of the function
        */

        #ifdef DEVELOPEMENT
        ft_fprintf(STDERR_FILENO, "\033[1;31mERROR\033[0m: in file \033[1m%s\033[0m in function \033[1m%s\033[0m at line \033[1m%d\033[0m\n    the structure argument is not correctly pointing passed as an argument of the function\n", __FILE__, __func__, __LINE__);
        #endif

        #ifdef DEMO
        ft_fprintf(STDERR_FILENO, "\033[1;31mERROR\033[0m: in file \033[1m%s\033[0m at line \033[1m%s\033[0m\n", __FILE__, __LINE__);
        #endif

        #ifdef PRODUCTION
        ft_fprintf(STDERR_FILENO, "\033[1;31mERROR\033[0m\n");
        #endif

        /**
        * Return failure to indicate the structure argument is not correctly pointing passed as an argument of the function
        */
        return (RETURN_FAILURE);
        }
    else
        {
        /**
        * Treat the case when the structure argument is correctly pointing passed as an argument of the function
        */
        }

    /**
    * Check if the structure argument passed in argument of the function is not already initialized
    */
    if((ptr_sstc_pssd_argument->u8_global_status_ & FIRST_BIT) == FALSE)
        {
        /**
        * Treat the case when the structure argument passed in argument of the function is not already initialized
        */

        #ifdef DEVELOPEMENT
        ft_fprintf(STDERR_FILENO, "\033[1;31mERROR\033[0m: in file \033[1m%s\033[0m in function \033[1m%s\033[0m at line \033[1m%d\033[0m\n    the structure argument passed in argument of the function is not already initialized\n", __FILE__, __func__, __LINE__);
        #endif

        #ifdef DEMO
        ft_fprintf(STDERR_FILENO, "\033[1;31mERROR\033[0m: in file \033[1m%s\033[0m at line \033[1m%s\033[0m\n", __FILE__, __LINE__);
        #endif

        #ifdef PRODUCTION
        ft_fprintf(STDERR_FILENO, "\033[1;31mERROR\033[0m\n");
        #endif

        /**
        * Return failure to indicate the structure argument passed in argument of the function is not already initialized
        */
        return (RETURN_FAILURE);
        }
    else
        {
        /**
        * Treat the case when  the structure argument passed in argument of the function is already initialized as expected
        */
        }

    /**
    * Creation of local variable
    */
    uint64_t u64_lcl_cnt;
    uint64_t u64_lcl_cnt_file;
    uint8_t  u8_lcl_cnt;

    /**
    * Initialization of local variable
    */
    u64_lcl_cnt      = 0;
    u64_lcl_cnt_file = 0;
    u8_lcl_cnt       = 0;

    /**
    * Setting to false all the simple option of the argument
    */
    u8_lcl_cnt = 0;
    while(u8_lcl_cnt < MALCOLM_SIMPLE_OPTION_NUMBER)
        {
        ptr_sstc_pssd_argument->u8_simple_options_[u8_lcl_cnt] = FALSE;

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
    * Setting to false all the argument option of the argument
    */
    u8_lcl_cnt = 0;
    while(u8_lcl_cnt < MALCOLM_ARGUMENT_OPTION_NUMBER)
        {
        ptr_sstc_pssd_argument->u8_argument_options_[u8_lcl_cnt] = FALSE;

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
    * Setting to null all the argument option value of the argument
    */
    u8_lcl_cnt = 0;
    while(u8_lcl_cnt < MALCOLM_ARGUMENT_OPTION_NUMBER)
        {
        /**
        * Filling the actual argument option value string with nil character
        */
        u64_lcl_cnt = 0;
        while(ptr_sstc_pssd_argument->ptr_u8_argument_option_value_str_[u8_lcl_cnt][u64_lcl_cnt] != NIL)
            {
            ptr_sstc_pssd_argument->ptr_u8_argument_option_value_str_[u8_lcl_cnt][u64_lcl_cnt] = NIL;

            /**
            * Checking for overflow
            */
            if(u64_lcl_cnt < UINT64_MAX)
                {
                u64_lcl_cnt++;
                }
            else
                {
                #ifdef DEVELOPEMENT
                ft_fprintf(STDERR_FILENO, "\033[1;31mERROR\033[0m: in file \033[1m%s\033[0m in function \033[1m%s\033[0m at line \033[1m%d\033[0m\n    The unsigned 64 integer counter variable is going to overflow\n", __FILE__, __func__, __LINE__);
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

        (void) free(ptr_sstc_pssd_argument->ptr_u8_argument_option_value_str_[u8_lcl_cnt]);
        ptr_sstc_pssd_argument->ptr_u8_argument_option_value_str_[u8_lcl_cnt] = NULL;

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
    * Check if the dynamique array of ip or mac address in the structure argument passed in argument of the function is correctly pointing
    */
    if(ptr_sstc_pssd_argument->dbl_ptr_u8_ip_or_mac_address_str_ != NULL)
        {
        /**
        * Treat the case when the dynamique array of ip or mac address in the structure argument passed in argument of the function is correctly pointing
        */

        /**
        * Freeing and setting to null all the ip or mac address in the dynamique array of ip or mac address in the structure argument passed in argument of the function
        */
        u64_lcl_cnt_file = 0;
        while((u64_lcl_cnt_file < ptr_sstc_pssd_argument->u64_number_of_ip_or_mac_address_in_argument_) && (ptr_sstc_pssd_argument->dbl_ptr_u8_ip_or_mac_address_str_[u64_lcl_cnt_file] != NULL))
            {
            /**
            * Filling the actual ip or mac address string with nil character
            */
            u64_lcl_cnt = 0;
            while(ptr_sstc_pssd_argument->dbl_ptr_u8_ip_or_mac_address_str_[u64_lcl_cnt_file][u64_lcl_cnt] != NIL)
                {
                ptr_sstc_pssd_argument->dbl_ptr_u8_ip_or_mac_address_str_[u64_lcl_cnt_file][u64_lcl_cnt] = NIL;

                /**
                * Checking for overflow
                */
                if(u64_lcl_cnt < UINT64_MAX)
                    {
                    u64_lcl_cnt++;
                    }
                else
                    {
                    #ifdef DEVELOPEMENT
                    ft_fprintf(STDERR_FILENO, "\033[1;31mERROR\033[0m: in file \033[1m%s\033[0m in function \033[1m%s\033[0m at line \033[1m%d\033[0m\n    The unsigned 64 integer counter variable is going to overflow\n", __FILE__, __func__, __LINE__);
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

            (void) free(ptr_sstc_pssd_argument->dbl_ptr_u8_ip_or_mac_address_str_[u64_lcl_cnt_file]);
            ptr_sstc_pssd_argument->dbl_ptr_u8_ip_or_mac_address_str_[u64_lcl_cnt_file] = NULL;

            /**
            * Checking for overflow
            */
            if(u64_lcl_cnt_file < UINT64_MAX)
                {
                u64_lcl_cnt_file++;
                }
            else
                {
                #ifdef DEVELOPEMENT
                ft_fprintf(STDERR_FILENO, "\033[1;31mERROR\033[0m: in file \033[1m%s\033[0m in function \033[1m%s\033[0m at line \033[1m%d\033[0m\n    The unsigned 64 integer counter variable is going to overflow\n", __FILE__, __func__, __LINE__);
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
        * Freeing and setting to null the dynamique array of ip or mac address in the structure argument passed in argument of the function
        */
        (void) free(ptr_sstc_pssd_argument->dbl_ptr_u8_ip_or_mac_address_str_);
        ptr_sstc_pssd_argument->dbl_ptr_u8_ip_or_mac_address_str_       = NULL;
        ptr_sstc_pssd_argument->u64_number_of_ip_or_mac_address_in_argument_ = 0;
        }
    else
        {
        /**
        * Treat the case when the dynamique array of ip or mac address in the structure argument passed in argument of the function is not correctly pointing
        */

        ptr_sstc_pssd_argument->dbl_ptr_u8_ip_or_mac_address_str_       = NULL;
        ptr_sstc_pssd_argument->u64_number_of_ip_or_mac_address_in_argument_ = 0;
        }

    /**
    * Setting all the value of the global status of the structure to false
    */
    ptr_sstc_pssd_argument->u8_global_status_ = 0;
    ptr_sstc_pssd_argument->u8_global_status_ &= NOT_FIRST_BIT;
    ptr_sstc_pssd_argument->u8_global_status_ &= NOT_SECOND_BIT;
    ptr_sstc_pssd_argument->u8_global_status_ &= NOT_THIRD_BIT;
    ptr_sstc_pssd_argument->u8_global_status_ &= NOT_FOURTH_BIT;
    ptr_sstc_pssd_argument->u8_global_status_ &= NOT_FIFTH_BIT;
    ptr_sstc_pssd_argument->u8_global_status_ &= NOT_SIXTH_BIT;
    ptr_sstc_pssd_argument->u8_global_status_ &= NOT_SEVENTH_BIT;
    ptr_sstc_pssd_argument->u8_global_status_ &= NOT_EIGHTH_BIT;

    return (RETURN_SUCCESS);
    }

uint8_t Fu8__structure_argument_reset(struct sstc_argument *ptr_sstc_pssd_argument)
    {
    /**
    * Assertion of argument
    */

    /**
    * Check if the structure argument is correctly pointing passed as an argument of the function
    */
    if(ptr_sstc_pssd_argument == NULL)
        {
        /**
        * Treat the case when the structure argument is not correctly pointing passed as an argument of the function
        */

        #ifdef DEVELOPEMENT
        ft_fprintf(STDERR_FILENO, "\033[1;31mERROR\033[0m: in file \033[1m%s\033[0m in function \033[1m%s\033[0m at line \033[1m%d\033[0m\n    the structure argument is not correctly pointing passed as an argument of the function\n", __FILE__, __func__, __LINE__);
        #endif

        #ifdef DEMO
        ft_fprintf(STDERR_FILENO, "\033[1;31mERROR\033[0m: in file \033[1m%s\033[0m at line \033[1m%s\033[0m\n", __FILE__, __LINE__);
        #endif

        #ifdef PRODUCTION
        ft_fprintf(STDERR_FILENO, "\033[1;31mERROR\033[0m\n");
        #endif

        /**
        * Return failure to indicate the structure argument is not correctly pointing passed as an argument of the function
        */
        return (RETURN_FAILURE);
        }
    else
        {
        /**
        * Treat the case when the structure argument is correctly pointing passed as an argument of the function
        */
        }

    /**
    * Check if the structure argument passed in argument of the function is not already initialized
    */
    if((ptr_sstc_pssd_argument->u8_global_status_ & FIRST_BIT) == FALSE)
        {
        /**
        * Treat the case when the structure argument passed in argument of the function is not already initialized
        */

        #ifdef DEVELOPEMENT
        ft_fprintf(STDERR_FILENO, "\033[1;31mERROR\033[0m: in file \033[1m%s\033[0m in function \033[1m%s\033[0m at line \033[1m%d\033[0m\n    the structure argument passed in argument of the function is not already initialized\n", __FILE__, __func__, __LINE__);
        #endif

        #ifdef DEMO
        ft_fprintf(STDERR_FILENO, "\033[1;31mERROR\033[0m: in file \033[1m%s\033[0m at line \033[1m%s\033[0m\n", __FILE__, __LINE__);
        #endif

        #ifdef PRODUCTION
        ft_fprintf(STDERR_FILENO, "\033[1;31mERROR\033[0m\n");
        #endif

        /**
        * Return failure to indicate the structure argument passed in argument of the function is not already initialized
        */
        return (RETURN_FAILURE);
        }
    else
        {
        /**
        * Treat the case when  the structure argument passed in argument of the function is already initialized as expected
        */
        }

    /**
    * Creation of local variable
    */
    uint64_t u64_lcl_cnt;
    uint8_t  u8_lcl_cnt;

    /**
    * Initialization of local variable
    */
    u64_lcl_cnt = 0;
    u8_lcl_cnt  = 0;

    /**
    * Setting to false all the simple option of the argument
    */
    u8_lcl_cnt = 0;
    while(u8_lcl_cnt < MALCOLM_SIMPLE_OPTION_NUMBER)
        {
        ptr_sstc_pssd_argument->u8_simple_options_[u8_lcl_cnt] = FALSE;

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
    * Setting to false all the argument option of the argument
    */
    u8_lcl_cnt = 0;
    while(u8_lcl_cnt < MALCOLM_ARGUMENT_OPTION_NUMBER)
        {
        ptr_sstc_pssd_argument->u8_argument_options_[u8_lcl_cnt] = FALSE;

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
    * Setting to null all the argument option value of the argument
    */
    u8_lcl_cnt = 0;
    while(u8_lcl_cnt < MALCOLM_ARGUMENT_OPTION_NUMBER)
        {
        /**
        * Filling the actual argument option value string with nil character
        */
        u64_lcl_cnt = 0;
        while(ptr_sstc_pssd_argument->ptr_u8_argument_option_value_str_[u8_lcl_cnt][u64_lcl_cnt] != NIL)
            {
            ptr_sstc_pssd_argument->ptr_u8_argument_option_value_str_[u8_lcl_cnt][u64_lcl_cnt] = NIL;

            /**
            * Checking for overflow
            */
            if(u64_lcl_cnt < UINT64_MAX)
                {
                u64_lcl_cnt++;
                }
            else
                {
                #ifdef DEVELOPEMENT
                ft_fprintf(STDERR_FILENO, "\033[1;31mERROR\033[0m: in file \033[1m%s\033[0m in function \033[1m%s\033[0m at line \033[1m%d\033[0m\n    The unsigned 64 integer counter variable is going to overflow\n", __FILE__, __func__, __LINE__);
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
        * Reallocating the actual argument option value string
        */
        ptr_sstc_pssd_argument->ptr_u8_argument_option_value_str_[u8_lcl_cnt] = (uint8_t *) realloc(ptr_sstc_pssd_argument->ptr_u8_argument_option_value_str_[u8_lcl_cnt], sizeof(uint8_t) * 1);

        /**
        * Check if the reallocation of the actual argument option value string failed
        */
        if(ptr_sstc_pssd_argument->ptr_u8_argument_option_value_str_[u8_lcl_cnt] == NULL)
            {
            /**
            * Treat the case when the reallocation of the actual argument option value string failed
            */

            #ifdef DEVELOPEMENT
            ft_fprintf(STDERR_FILENO, "\033[1;31mERROR\033[0m: in file \033[1m%s\033[0m in function \033[1m%s\033[0m at line \033[1m%d\033[0m\n    The reallocation of the actual argument option value string failed\n", __FILE__, __func__, __LINE__);
            #endif

            #ifdef DEMO
            ft_fprintf(STDERR_FILENO, "\033[1;31mERROR\033[0m: in file \033[1m%s\033[0m at line \033[1m%s\033[0m\n", __FILE__, __LINE__);
            #endif

            #ifdef PRODUCTION
            ft_fprintf(STDERR_FILENO, "\033[1;31mERROR\033[0m\n");
            #endif

            /**
            * Return failure to indicate the reallocation of the actual argument option value string failed
            */
            return (RETURN_FAILURE);
            }
        else
            {
            /**
            * Treat the case when the reallocation of the actual argument option value string succeeded
            */

            ptr_sstc_pssd_argument->ptr_u8_argument_option_value_str_[u8_lcl_cnt][0] = NIL;
            }

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
    * Check if the dynamic array of ip or mac address of the structure argument passed in argument of the function is correctly pointing
    */
    if(ptr_sstc_pssd_argument->dbl_ptr_u8_ip_or_mac_address_str_ != NULL)
        {
        /**
        * Treat the case when the dynamic array of ip or mac address of the structure argument passed in argument of the function is correctly pointing
        */

        /**
        * Freeing and setting to null all the ip or mac address in the dynamique array in the structure argument passed in argument of the function
        */
        u64_lcl_cnt = 0;
        while(u64_lcl_cnt < ptr_sstc_pssd_argument->u64_number_of_ip_or_mac_address_in_argument_ && ptr_sstc_pssd_argument->dbl_ptr_u8_ip_or_mac_address_str_[u64_lcl_cnt] != NULL)
            {
            (void) free(ptr_sstc_pssd_argument->dbl_ptr_u8_ip_or_mac_address_str_[u64_lcl_cnt]);
            ptr_sstc_pssd_argument->dbl_ptr_u8_ip_or_mac_address_str_[u64_lcl_cnt] = NULL;

            /**
            * Checking for overflow
            */
            if(u64_lcl_cnt < UINT64_MAX)
                {
                u64_lcl_cnt++;
                }
            else
                {
                #ifdef DEVELOPEMENT
                ft_fprintf(STDERR_FILENO, "\033[1;31mERROR\033[0m: in file \033[1m%s\033[0m in function \033[1m%s\033[0m at line \033[1m%d\033[0m\n    The unsigned 64 integer counter variable is going to overflow\n", __FILE__, __func__, __LINE__);
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
        * Reallocating the dynamique array of ip or mac address in the structure argument passed in argument of the function
        */
        ptr_sstc_pssd_argument->dbl_ptr_u8_ip_or_mac_address_str_ = (uint8_t **) realloc(ptr_sstc_pssd_argument->dbl_ptr_u8_ip_or_mac_address_str_, sizeof(uint8_t *) * 1);

        /**
        * Check if the reallocation of the dynamique array of ip or mac address in the structure argument passed in argument of the function failed
        */
        if(ptr_sstc_pssd_argument->dbl_ptr_u8_ip_or_mac_address_str_ == NULL)
            {
            /**
            * Treat the case when the reallocation of the dynamique array of ip or mac address in the structure argument passed in argument of the function failed
            */

            #ifdef DEVELOPEMENT
            ft_fprintf(STDERR_FILENO, "\033[1;31mERROR\033[0m: in file \033[1m%s\033[0m in function \033[1m%s\033[0m at line \033[1m%d\033[0m\n    The reallocation of the dynamique array of ip or mac address in the structure argument passed in argument of the function failed\n", __FILE__, __func__, __LINE__);
            #endif

            #ifdef DEMO
            ft_fprintf(STDERR_FILENO, "\033[1;31mERROR\033[0m: in file \033[1m%s\033[0m at line \033[1m%s\033[0m\n", __FILE__, __LINE__);
            #endif

            #ifdef PRODUCTION
            ft_fprintf(STDERR_FILENO, "\033[1;31mERROR\033[0m\n");
            #endif

            /**
            * Return failure to indicate the reallocation of the dynamique array of ip or mac address in the structure argument passed in argument of the function failed
            */
            return (RETURN_FAILURE);
            }
        else
            {
            /**
            * Treat the case when the reallocation of the dynamique array of ip or mac address in the structure argument passed in argument of the function succeeded
            */

            ptr_sstc_pssd_argument->dbl_ptr_u8_ip_or_mac_address_str_[0] = NULL;
            ptr_sstc_pssd_argument->u64_number_of_ip_or_mac_address_in_argument_ = 0;
            }
        }
    else
        {
        /**
        * Treat the case when the dynamic array of ip or mac address of the structure argument passed in argument of the function is not correctly pointing
        */

        /**
        * Allocating the dynamique array of ip or mac address in the structure argument passed in argument of the function
        */
        ptr_sstc_pssd_argument->dbl_ptr_u8_ip_or_mac_address_str_ = NULL;
        ptr_sstc_pssd_argument->dbl_ptr_u8_ip_or_mac_address_str_ = (uint8_t **) malloc(sizeof(uint8_t *) *  1);

        /**
        * Check if the allocation of the the dynamique array of ip or mac address in the structure argument passed in argument of the function failed
        */
        if(ptr_sstc_pssd_argument->dbl_ptr_u8_ip_or_mac_address_str_ == NULL)
            {
            /**
            * Treat the case when the allocation of the the dynamique array of ip or mac address in the structure argument passed in argument of the function failed
            */

            #ifdef DEVELOPEMENT
            ft_fprintf(STDERR_FILENO, "\033[1;31mERROR\033[0m: in file \033[1m%s\033[0m in function \033[1m%s\033[0m at line \033[1m%d\033[0m\n    the allocation of the the dynamique array of ip or mac address in the structure argument passed in argument of the function failed\n", __FILE__, __func__, __LINE__);
            #endif

            #ifdef DEMO
            ft_fprintf(STDERR_FILENO, "\033[1;31mERROR\033[0m: in file \033[1m%s\033[0m at line \033[1m%s\033[0m\n", __FILE__, __LINE__);
            #endif

            #ifdef PRODUCTION
            ft_fprintf(STDERR_FILENO, "\033[1;31mERROR\033[0m\n");
            #endif

            /**
            * Return failure to indicate the allocation of the the dynamique array of ip or mac address in the structure argument passed in argument of the function failed
            */
            return (RETURN_FAILURE);
            }
        else
            {
            /**
            * Treat the case when the allocation of the the dynamique array of ip or mac address in the structure argument passed in argument of the function succeeded
            */

            /**
            * Setting the first path of the dynamique array of ip or mac address in the structure argument passed in argument of the function to nil
            */
            ptr_sstc_pssd_argument->dbl_ptr_u8_ip_or_mac_address_str_[0]    = NULL;
            ptr_sstc_pssd_argument->u64_number_of_ip_or_mac_address_in_argument_ = 0;
            }
        }

    /**
    * Setting the structure argument to initialized
    */
    ptr_sstc_pssd_argument->u8_global_status_ |= FIRST_BIT;

    return (RETURN_SUCCESS);
    }

void Fv__structure_argument_display(struct sstc_argument *ptr_sstc_pssd_argument)
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
    * Check if the structure argument is correctly pointing passed as an argument of the function
    */
    if(ptr_sstc_pssd_argument == NULL)
        {
        /**
        * Treat the case when the structure argument is not correctly pointing passed as an argument of the function
        */

        #ifdef DEVELOPEMENT
        ft_fprintf(STDERR_FILENO, "\033[1;31mERROR\033[0m: in file \033[1m%s\033[0m in function \033[1m%s\033[0m at line \033[1m%d\033[0m\n    the structure argument is not correctly pointing passed as an argument of the function\n", __FILE__, __func__, __LINE__);
        #endif

        #ifdef DEMO
        ft_fprintf(STDERR_FILENO, "\033[1;31mERROR\033[0m: in file \033[1m%s\033[0m at line \033[1m%s\033[0m\n", __FILE__, __LINE__);
        #endif

        #ifdef PRODUCTION
        ft_fprintf(STDERR_FILENO, "\033[1;31mERROR\033[0m\n");
        #endif

        /**
        * Return to indicate the structure argument is not correctly pointing passed as an argument of the function
        */
        return ;
        }
    else
        {
        /**
        * Treat the case when the structure argument is correctly pointing passed as an argument of the function
        */
        }

    /**
    * Check if the structure argument passed in argument of the function is not already initialized
    */
    if((ptr_sstc_pssd_argument->u8_global_status_ & FIRST_BIT) == FALSE)
        {
        /**
        * Treat the case when the structure argument passed in argument of the function is not already initialized
        */

        #ifdef DEVELOPEMENT
        ft_fprintf(STDERR_FILENO, "\033[1;31mERROR\033[0m: in file \033[1m%s\033[0m in function \033[1m%s\033[0m at line \033[1m%d\033[0m\n    the structure argument passed in argument of the function is not already initialized\n", __FILE__, __func__, __LINE__);
        #endif

        #ifdef DEMO
        ft_fprintf(STDERR_FILENO, "\033[1;31mERROR\033[0m: in file \033[1m%s\033[0m at line \033[1m%s\033[0m\n", __FILE__, __LINE__);
        #endif

        #ifdef PRODUCTION
        ft_fprintf(STDERR_FILENO, "\033[1;31mERROR\033[0m\n");
        #endif

        /**
        * Return to indicate the structure argument passed in argument of the function is not already initialized
        */
        return ;
        }
    else
        {
        /**
        * Treat the case when  the structure argument passed in argument of the function is already initialized as expected
        */
        }

    /**
    * Creation of local variable
    */
    uint64_t u64_lcl_cnt;
    uint8_t  u8_lcl_cnt;

    /**
    * Initialization of local variable
    */
    u64_lcl_cnt = 0;
    u8_lcl_cnt  = 0;

    ft_printf("    ***********************************************\n");
    ft_printf("    *              STRUCTURE ARGUMENT             *\n");
    ft_printf("    ***********************************************\n\n");

    /**
    * Display all the value of the global status of the structure argument passed in argument of the function
    */
    ft_printf("GLOBAL STATUS:\n");
    if((ptr_sstc_pssd_argument->u8_global_status_ & FIRST_BIT) != FALSE)
        {
        ft_printf("    FIRST BIT:     \033[1;93;40mset\033[0m structure initialized\n");
        }
    else
        {
        ft_printf("    FIRST BIT:     structure \033[1;95;40mNOT\033[0m initialized\n");
        }
    if((ptr_sstc_pssd_argument->u8_global_status_ & SECOND_BIT) != FALSE)
        {
        ft_printf("    SECOND BIT:    \033[1;93;40mset error occure\033[0m\n");
        }
    else
        {
        ft_printf("    SECOND BIT:    \033[1;95;40mNOT\033[0m set no error occure\n");
        }
    if((ptr_sstc_pssd_argument->u8_global_status_ & THIRD_BIT) != FALSE)
        {
        ft_printf("    THIRD BIT:     \033[1;93;40mset\033[0m\n");
        }
    else
        {
        ft_printf("    THIRD BIT:     \033[1;95;40mNOT\033[0m set\n");
        }
    if((ptr_sstc_pssd_argument->u8_global_status_ & FOURTH_BIT) != FALSE)
        {
        ft_printf("    FOURTH BIT:    \033[1;93;40mset\033[0m\n");
        }
    else
        {
        ft_printf("    FOURTH BIT:    \033[1;95;40mNOT\033[0m set\n");
        }
    if((ptr_sstc_pssd_argument->u8_global_status_ & FIFTH_BIT) != FALSE)
        {
        ft_printf("    FIFTH BIT:     \033[1;93;40mset\033[0m\n");
        }
    else
        {
        ft_printf("    FIFTH BIT:     \033[1;95;40mNOT\033[0m set\n");
        }
    if((ptr_sstc_pssd_argument->u8_global_status_ & SIXTH_BIT) != FALSE)
        {
        ft_printf("    SIXTH BIT:     \033[1;93;40mset\033[0m\n");
        }
    else
        {
        ft_printf("    SIXTH BIT:     \033[1;95;40mNOT\033[0m set\n");
        }
    if((ptr_sstc_pssd_argument->u8_global_status_ & SEVENTH_BIT) != FALSE)
        {
        ft_printf("    SEVENTH BIT:   \033[1;93;40mset\033[0m\n");
        }
    else
        {
        ft_printf("    SEVENTH BIT:   \033[1;95;40mNOT\033[0m set\n");
        }
    if((ptr_sstc_pssd_argument->u8_global_status_ & EIGHTH_BIT) != FALSE)
        {
        ft_printf("    EIGHTH BIT:    \033[1;93;40mset\033[0m\n");
        }
    else
        {
        ft_printf("    EIGHTH BIT:    \033[1;95;40mNOT\033[0m set\n");
        }

    ft_printf("\n");

    /**
    * Display all the options set in the structure argument passed in argument of the function
    */
    ft_printf("OPTIONS:\n");

    u8_lcl_cnt = 0;
    while(u8_lcl_cnt < MALCOLM_SIMPLE_OPTION_NUMBER)
        {
        /**
        * Check if the actual option in the structure argument passed in argument of the function is set
        */
        if(ptr_sstc_pssd_argument->u8_simple_options_[u8_lcl_cnt] != FALSE)
            {
            /**
            * Treat the case when the actual option in the structure argument passed in argument of the function is set
            */

            ft_printf("    The option [%s] is \033[1;93;40mset\033[0m\n", malcolm_simple_options[u8_lcl_cnt]);
            }
        else
            {
            /**
            * Treat the case when the actual option in the structure argument passed in argument of the function is not set
            */

            ft_printf("    The option [%s] is \033[1;95;40mNOT\033[0m set\n", malcolm_simple_options[u8_lcl_cnt]);
            }

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

            return ;
            }
        }

    ft_printf("\n");

    /**
    * Display all the argument options set in the structure argument passed in argument of the function
    */
    ft_printf("ARGUMENT OPTIONS:\n");

        u8_lcl_cnt = 0;
        while(u8_lcl_cnt < MALCOLM_ARGUMENT_OPTION_NUMBER)
            {
            /**
            * Check if the actual argument option in the structure argument passed in argument of the function is set
            */
            if(ptr_sstc_pssd_argument->u8_argument_options_[u8_lcl_cnt] != FALSE)
                {
                /**
                * Treat the case when the actual argument option in the structure argument passed in argument of the function is set
                */

                ft_printf("    The argument option [%s] is \033[1;93;40mset\033[0m\n", malcolm_argument_options[u8_lcl_cnt]);
                }
            else
                {
                /**
                * Treat the case when the actual argument option in the structure argument passed in argument of the function is not set
                */

                ft_printf("    The argument option [%s] is \033[1;95;40mNOT\033[0m set\n", malcolm_argument_options[u8_lcl_cnt]);
                }

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

                return ;
                }
            }

    ft_printf("\n");

    /**
    * Display all the argument string of the static array of string in the structure argument passed in argument of the function
    */
    ft_printf("ARGUMENT OPTIONS VALUE:\n");

    u8_lcl_cnt = 0;
    while(u8_lcl_cnt < MALCOLM_ARGUMENT_OPTION_NUMBER)
        {
        /**
        * Display the actual argument string of the static array of string in the structure argument passed in argument of the function
        */

        /**
        * Check if the actual argument string of the static array of string in the structure argument passed in argument of the function is null
        */
        if(ptr_sstc_pssd_argument->ptr_u8_argument_option_value_str_[u8_lcl_cnt] == NULL)
            {
            /**
            * Treat the case when the actual argument string of the static array of string in the structure argument passed in argument of the function is null
            */

            ft_printf("    [%s] VALUE STR: \033[1;93;40m(null)\033[0m\n", malcolm_argument_options[u8_lcl_cnt]);
            }
        else
            {
            /**
            * Treat the case when the actual argument string of the static array of string in the structure argument passed in argument of the function is not null
            */

            ft_printf("    [%s] VALUE STR: \033[1;95;40m[\033[0m%s\033[1;95;40m]\033[0m\n", malcolm_argument_options[u8_lcl_cnt], ptr_sstc_pssd_argument->ptr_u8_argument_option_value_str_[u8_lcl_cnt]);
            }

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
            * Return to indicate the counter variable overflow
            */
            return ;
            }
        }

    ft_printf("\n");

    /**
    * Check if the dynamique array of ip or mac address in the structure argument passed in argument of the function is null
    */
    if(ptr_sstc_pssd_argument->dbl_ptr_u8_ip_or_mac_address_str_ == NULL)
        {
        /**
        * Treat the case when the dynamique array of ip or mac address in the structure argument passed in argument of the function is null
        */

        ft_printf("IP OR MAC ADDRESS ARRAY:     \033[1;95;40mNULL\033[0m\n");
        }
    else
        {
        /**
        * Treat the case when the dynamique array of ip or mac address in the structure argument passed in argument of the function is not null
        */

        ft_printf("IP OR MAC ADDRESS ARRAY:\n");

        /**
        * Display all the ip or mac address of the dynamique array of ip or mac address in the structure argument passed in argument of the function
        */
        u64_lcl_cnt = 0;
        while(u64_lcl_cnt < ptr_sstc_pssd_argument->u64_number_of_ip_or_mac_address_in_argument_ && ptr_sstc_pssd_argument->dbl_ptr_u8_ip_or_mac_address_str_[u64_lcl_cnt] != NULL)
            {
            ft_printf("    IP OR MAC ADDRESS STR [%lu]: \033[1;95;40m[\033[0m%s\033[1;95;40m]\033[0m\n", u64_lcl_cnt, ptr_sstc_pssd_argument->dbl_ptr_u8_ip_or_mac_address_str_[u64_lcl_cnt]);

            /**
            * Checking for overflow
            */
            if(u64_lcl_cnt < UINT64_MAX)
                {
                u64_lcl_cnt++;
                }
            else
                {
                #ifdef DEVELOPEMENT
                ft_fprintf(STDERR_FILENO, "\033[1;31mERROR\033[0m: in file \033[1m%s\033[0m in function \033[1m%s\033[0m at line \033[1m%d\033[0m\n    The unsigned 64 integer counter variable is going to overflow\n", __FILE__, __func__, __LINE__);
                #endif

                #ifdef DEMO
                ft_fprintf(STDERR_FILENO, "\033[1;31mERROR\033[0m: in file \033[1m%s\033[0m at line \033[1m%s\033[0m\n", __FILE__, __LINE__);
                #endif

                #ifdef PRODUCTION
                ft_fprintf(STDERR_FILENO, "\033[1;31mERROR\033[0m\n");
                #endif

                /**
                * Return to indicate the counter variable overflow
                */
                return ;
                }
            }
        }

    ft_printf("\n");

    ft_printf("IP OR MAC ADDRESS ARRAY LENGTH: [\033[1;95;40m%lu\033[0m]\n", ptr_sstc_pssd_argument->u64_number_of_ip_or_mac_address_in_argument_);

    ft_printf("\n");

    ft_printf("\n    ***********************************************\n");
    ft_printf("    *            END STRUCTURE ARGUMENT           *\n");
    ft_printf("    ***********************************************\n");
    }

/**
* The program argument array is not composed of the first argument (the name of the program)
* argv = (argv + 1) et
* argc = (argc - 1)
*/
uint8_t Fu8__load_data_from_argument(struct sstc_argument *ptr_sstc_pssd_argument, int32_t s32_pssd_program_argument_number, uint8_t **dbl_ptr_u8_pssd_program_arguments)
    {
    /**
    * Assertion of argument
    */

    /**
    * Check if the structure argument is correctly pointing passed as an argument of the function
    */
    if(ptr_sstc_pssd_argument == NULL)
        {
        /**
        * Treat the case when the structure argument is not correctly pointing passed as an argument of the function
        */

        #ifdef DEVELOPEMENT
        ft_fprintf(STDERR_FILENO, "\033[1;31mERROR\033[0m: in file \033[1m%s\033[0m in function \033[1m%s\033[0m at line \033[1m%d\033[0m\n    the structure argument is not correctly pointing passed as an argument of the function\n", __FILE__, __func__, __LINE__);
        #endif

        #ifdef DEMO
        ft_fprintf(STDERR_FILENO, "\033[1;31mERROR\033[0m: in file \033[1m%s\033[0m at line \033[1m%s\033[0m\n", __FILE__, __LINE__);
        #endif

        #ifdef PRODUCTION
        ft_fprintf(STDERR_FILENO, "\033[1;31mERROR\033[0m\n");
        #endif

        /**
        * Return failure to indicate the structure argument is not correctly pointing passed as an argument of the function
        */
        return (RETURN_FAILURE);
        }
    else
        {
        /**
        * Treat the case when the structure argument is correctly pointing passed as an argument of the function
        */
        }

    /**
    * Check if the structure argument passed in argument of the function is not already initialized
    */
    if((ptr_sstc_pssd_argument->u8_global_status_ & FIRST_BIT) == FALSE)
        {
        /**
        * Treat the case when the structure argument passed in argument of the function is not already initialized
        */

        #ifdef DEVELOPEMENT
        ft_fprintf(STDERR_FILENO, "\033[1;31mERROR\033[0m: in file \033[1m%s\033[0m in function \033[1m%s\033[0m at line \033[1m%d\033[0m\n    the structure argument passed in argument of the function is not already initialized\n", __FILE__, __func__, __LINE__);
        #endif

        #ifdef DEMO
        ft_fprintf(STDERR_FILENO, "\033[1;31mERROR\033[0m: in file \033[1m%s\033[0m at line \033[1m%s\033[0m\n", __FILE__, __LINE__);
        #endif

        #ifdef PRODUCTION
        ft_fprintf(STDERR_FILENO, "\033[1;31mERROR\033[0m\n");
        #endif

        /**
        * Return failure to indicate the structure argument passed in argument of the function is not already initialized
        */
        return (RETURN_FAILURE);
        }
    else
        {
        /**
        * Treat the case when  the structure argument passed in argument of the function is already initialized as expected
        */
        }

    /**
    * Check if the array of argument of the program passed in argument of the function is correctly pointing passed as an argument of the function
    */
    if(dbl_ptr_u8_pssd_program_arguments == NULL)
        {
        /**
        * Treat the case when the array of argument of the program passed in argument of the function is not correctly pointing passed as an argument of the function
        */

        #ifdef DEVELOPEMENT
        ft_fprintf(STDERR_FILENO, "\033[1;31mERROR\033[0m: in file \033[1m%s\033[0m in function \033[1m%s\033[0m at line \033[1m%d\033[0m\n    the array of argument of the program passed in argument of the function is not correctly pointing passed as an argument of the function\n", __FILE__, __func__, __LINE__);
        #endif

        #ifdef DEMO
        ft_fprintf(STDERR_FILENO, "\033[1;31mERROR\033[0m: in file \033[1m%s\033[0m at line \033[1m%s\033[0m\n", __FILE__, __LINE__);
        #endif

        #ifdef PRODUCTION
        ft_fprintf(STDERR_FILENO, "\033[1;31mERROR\033[0m\n");
        #endif

        /**
        * Return failure to indicate the array of argument of the program passed in argument of the function is not correctly pointing passed as an argument of the function
        */
        return (RETURN_FAILURE);
        }
    else
        {
        /**
        * Treat the case when the array of argument of the program passed in argument of the function is correctly pointing passed as an argument of the function
        */
        }

    /**
    * Check if the dynamic array of ip or mac address in the structure argument passed in argument of the function is not correctly pointing
    */
    if(ptr_sstc_pssd_argument->dbl_ptr_u8_ip_or_mac_address_str_ == NULL)
        {
        /**
        * Treat the case when the dynamic array of ip or mac address in the structure argument passed in argument of the function is not correctly pointing
        */

        #ifdef DEVELOPEMENT
        ft_fprintf(STDERR_FILENO, "\033[1;31mERROR\033[0m: in file \033[1m%s\033[0m in function \033[1m%s\033[0m at line \033[1m%d\033[0m\n    the dynamic array of ip or mac address in the structure argument passed in argument of the function is not correctly pointing\n", __FILE__, __func__, __LINE__);
        #endif

        #ifdef DEMO
        ft_fprintf(STDERR_FILENO, "\033[1;31mERROR\033[0m: in file \033[1m%s\033[0m at line \033[1m%s\033[0m\n", __FILE__, __LINE__);
        #endif

        #ifdef PRODUCTION
        ft_fprintf(STDERR_FILENO, "\033[1;31mERROR\033[0m\n");
        #endif

        /**
        * Return failure to indicate the dynamic array of ip or mac address in the structure argument passed in argument of the function is not correctly pointing
        */
        return (RETURN_FAILURE);
        }
    else
        {
        /**
        * Treat the case when the dynamic array of ip or mac address in the structure argument passed in argument of the function is correctly pointing
        */
        } 

    /**
    * Creation of local variable
    */
    int32_t s32_lcl_argument_loop_cnt;
    int32_t s32_lcl_return_from_comparaison;
    uint8_t u8_lcl_cnt;
    uint8_t u8_lcl_option;
    uint8_t u8_lcl_return_from_function;

    /**
    * Initialization of local variable
    */
    s32_lcl_argument_loop_cnt       = 0;
    s32_lcl_return_from_comparaison = 0;
    u8_lcl_cnt                      = 0;
    u8_lcl_option                   = NOT_AN_OPTION;
    u8_lcl_return_from_function     = RETURN_FAILURE;

    s32_lcl_argument_loop_cnt = 0;
    while(s32_lcl_argument_loop_cnt < s32_pssd_program_argument_number)
        {
        u8_lcl_option = NOT_AN_OPTION;
        u8_lcl_cnt    = 0;
        while(u8_lcl_cnt < MALCOLM_SIMPLE_OPTION_NUMBER)
            {
            /**
            * Find the option from the argument
            */
            s32_lcl_return_from_comparaison = 1;
            s32_lcl_return_from_comparaison = ft_strcmp((char *) dbl_ptr_u8_pssd_program_arguments[s32_lcl_argument_loop_cnt], (char *) malcolm_simple_options[u8_lcl_cnt]);

            /**
            * Check if the actual argument of the program is equals to the actual option
            */
            if(s32_lcl_return_from_comparaison == 0)
                {
                /**
                * Treat the case when the actual argument of the program is equals to the actual option
                */

                /**
                * Saving the option type of the actual option and exit the loop
                */
                u8_lcl_option = u8_lcl_cnt;
                break;
                }
            else
                {
                /**
                * Treat the case when the actual argument of the program is not equals to the actual option
                */
                }

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
        * Check if the actual argument of the program is an option
        */
        if((u8_lcl_option != NOT_AN_OPTION) && (u8_lcl_option < MALCOLM_SIMPLE_OPTION_NUMBER))
            {
            /**
            * Treat the case when the actual argument of the program is an simple option
            */

            /**
            * Setting the found option to the structure argument passed in argument of the function
            */
            ptr_sstc_pssd_argument->u8_simple_options_[u8_lcl_option] = TRUE;

            /**
            * Checking for overflow
            */
            if(s32_lcl_argument_loop_cnt < INT32_MAX)
                {
                s32_lcl_argument_loop_cnt++;
                }
            else
                {
                #ifdef DEVELOPEMENT
                ft_fprintf(STDERR_FILENO, "\033[1;31mERROR\033[0m: in file \033[1m%s\033[0m in function \033[1m%s\033[0m at line \033[1m%d\033[0m\n    The signed 32 integer counter variable is going to overflow\n", __FILE__, __func__, __LINE__);
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

            continue;
            }
        else
            {
            /**
            * Treat the case when the actual argument of the program is not an simple option
            */
            }

        u8_lcl_option = NOT_AN_OPTION;
        u8_lcl_cnt    = 0;
        while(u8_lcl_cnt < MALCOLM_ARGUMENT_OPTION_NUMBER)
            {
            /**
            * Find the option from the argument
            */
            s32_lcl_return_from_comparaison = 1;
            s32_lcl_return_from_comparaison = ft_strcmp((char *) dbl_ptr_u8_pssd_program_arguments[s32_lcl_argument_loop_cnt], (char *) malcolm_argument_options[u8_lcl_cnt]);

            /**
            * Check if the actual argument of the program is equals to the actual option
            */
            if(s32_lcl_return_from_comparaison == 0)
                {
                /**
                * Treat the case when the actual argument of the program is equals to the actual option
                */

                /**
                * Saving the option type of the actual option and exit the loop
                */
                u8_lcl_option = u8_lcl_cnt;
                break;
                }
            else
                {
                /**
                * Treat the case when the actual argument of the program is not equals to the actual option
                */
                }

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
        * Check if the actual argument of the program is an argument option
        */
        if((u8_lcl_option != NOT_AN_OPTION) && (u8_lcl_option < MALCOLM_ARGUMENT_OPTION_NUMBER))
            {
            /**
            * Check if their are an argument to the actual argument option
            */
            if(s32_lcl_argument_loop_cnt + 1 >= s32_pssd_program_argument_number)
                {
                /**
                * Treat the case when their are an argument to the actual argument option
                */

                /**
                * Display option error and command option help
                */
                ft_fprintf(STDERR_FILENO, "ft_malcolm: Error: '%s' missing argument.\n\n", dbl_ptr_u8_pssd_program_arguments[s32_lcl_argument_loop_cnt]);

                (void) fv__help();

                /**
                * Setting argument error
                */
                ptr_sstc_pssd_argument->u8_global_status_ |= SECOND_BIT;

                return (RETURN_SUCCESS);
                }
            else
                {
                /**
                * Treat the case when their is not an argument to the actual argument option
                */
                }

            /**
            * Setting the found option to the structure argument passed in argument of the function
            */
            ptr_sstc_pssd_argument->u8_argument_options_[u8_lcl_option] = TRUE;

            /**
            * Checking for overflow
            */
            if(s32_lcl_argument_loop_cnt < INT32_MAX)
                {
                s32_lcl_argument_loop_cnt++;
                }
            else
                {
                #ifdef DEVELOPEMENT
                ft_fprintf(STDERR_FILENO, "\033[1;31mERROR\033[0m: in file \033[1m%s\033[0m in function \033[1m%s\033[0m at line \033[1m%d\033[0m\n    The signed 32 integer counter variable is going to overflow\n", __FILE__, __func__, __LINE__);
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

            /**
            * Copying the actual option argument to the actual argument option string in the structure argument passed in argument of the function
            */
            u8_lcl_return_from_function = RETURN_FAILURE;
            u8_lcl_return_from_function = Fu8__copying_string_to_allocated_string(dbl_ptr_u8_pssd_program_arguments[s32_lcl_argument_loop_cnt], &(ptr_sstc_pssd_argument->ptr_u8_argument_option_value_str_[u8_lcl_option]));

            /**
            * Check if function to copy the actual option argument to the actual argument option string in the structure argument passed in argument of the function succeeded
            */
            if(u8_lcl_return_from_function != RETURN_SUCCESS)
                {
                /**
                * Treat the case when the function to copy the actual option argument to the actual argument option string in the structure argument passed in argument of the function failed
                */

                #ifdef DEVELOPEMENT
                ft_fprintf(STDERR_FILENO, "\033[1;31mERROR\033[0m: in file \033[1m%s\033[0m in function \033[1m%s\033[0m at line \033[1m%d\033[0m\n    The function to copy the actual option argument to the actual argument option string in the structure argument passed in argument of the function failed\n", __FILE__, __func__, __LINE__);
                #endif

                #ifdef DEMO
                ft_fprintf(STDERR_FILENO, "\033[1;31mERROR\033[0m: in file \033[1m%s\033[0m at line \033[1m%s\033[0m\n", __FILE__, __LINE__);
                #endif

                #ifdef PRODUCTION
                ft_fprintf(STDERR_FILENO, "\033[1;31mERROR\033[0m\n");
                #endif

                /**
                * Return failure to indicate the function to copy the actual option argument to the actual argument option string in the structure argument passed in argument of the function failed
                */
                return (RETURN_FAILURE);
                }
            else
                {
                /**
                * Treat the case when function to copy the actual option argument to the actual argument option string in the structure argument passed in argument of the function suucceeded
                */
                }

            /**
            * Checking for overflow
            */
            if(s32_lcl_argument_loop_cnt < INT32_MAX)
                {
                s32_lcl_argument_loop_cnt++;
                }
            else
                {
                #ifdef DEVELOPEMENT
                ft_fprintf(STDERR_FILENO, "\033[1;31mERROR\033[0m: in file \033[1m%s\033[0m in function \033[1m%s\033[0m at line \033[1m%d\033[0m\n    The signed 32 integer counter variable is going to overflow\n", __FILE__, __func__, __LINE__);
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

            continue;
            }
        else
            {
            /**
            * Display option error and command option help
            */
            }

        /**
        * Check if the dynamique array of ip or mac address in the structure argument passed in argument of the function is correctly allocated
        */
        if(ptr_sstc_pssd_argument->dbl_ptr_u8_ip_or_mac_address_str_ != NULL)
            {
            /**
            * Treat the case when the dynamique array of ip or mac address in the structure argument passed in argument of the function is correctly allocated
            */

            /**
            * Check if the number of file in argument is at the maximum value
            */
            if(ptr_sstc_pssd_argument->u64_number_of_ip_or_mac_address_in_argument_ == UINT64_MAX)
                {
                /**
                * Treat the case when the number of file in argument is at the maximum value
                */

                #ifdef DEVELOPEMENT
                ft_fprintf(STDERR_FILENO, "\033[1;31mERROR\033[0m: in file \033[1m%s\033[0m in function \033[1m%s\033[0m at line \033[1m%d\033[0m\n    the number of file in argument is at the maximum value\n", __FILE__, __func__, __LINE__);
                #endif

                #ifdef DEMO
                ft_fprintf(STDERR_FILENO, "\033[1;31mERROR\033[0m: in file \033[1m%s\033[0m at line \033[1m%s\033[0m\n", __FILE__, __LINE__);
                #endif

                #ifdef PRODUCTION
                ft_fprintf(STDERR_FILENO, "\033[1;31mERROR\033[0m\n");
                #endif

                /**
                * Return failure to indicate the number of file in argument is at the maximum value
                */
                return (RETURN_FAILURE);
                }
            else
                {
                /**
                * Treat the case when the number of file in argument is not at the maximum value
                */
                }

            /**
            * Reallocate the dynamique array of ip or mac address in the structure argument passed in argument of the function to add a new ip or mac address
            */
            ptr_sstc_pssd_argument->dbl_ptr_u8_ip_or_mac_address_str_ = (uint8_t **) realloc(ptr_sstc_pssd_argument->dbl_ptr_u8_ip_or_mac_address_str_, sizeof(uint8_t *) * (ptr_sstc_pssd_argument->u64_number_of_ip_or_mac_address_in_argument_ + 1));

            /**
            * Check if the reallocation of the dynamique array of ip or mac address in the structure argument passed in argument of the function failed
            */
            if(ptr_sstc_pssd_argument->dbl_ptr_u8_ip_or_mac_address_str_ == NULL)
                {
                /**
                * Treat the case when the reallocation of the dynamique array of ip or mac address in the structure argument passed in argument of the function failed
                */

                #ifdef DEVELOPEMENT
                ft_fprintf(STDERR_FILENO, "\033[1;31mERROR\033[0m: in file \033[1m%s\033[0m in function \033[1m%s\033[0m at line \033[1m%d\033[0m\n    the reallocation of the dynamique array of ip or mac address in the structure argument passed in argument of the function failed\n", __FILE__, __func__, __LINE__);
                #endif

                #ifdef DEMO
                ft_fprintf(STDERR_FILENO, "\033[1;31mERROR\033[0m: in file \033[1m%s\033[0m at line \033[1m%s\033[0m\n", __FILE__, __LINE__);
                #endif

                #ifdef PRODUCTION
                ft_fprintf(STDERR_FILENO, "\033[1;31mERROR\033[0m\n");
                #endif

                /**
                * Return failure to indicate the reallocation of the dynamique array of ip or mac address in the structure argument passed in argument of the function failed
                */
                return (RETURN_FAILURE);
                }
            else
                {
                /**
                * Treat the case when the reallocation of the dynamique array of ip or mac address in the structure argument passed in argument of the function succeeded
                */

                ptr_sstc_pssd_argument->dbl_ptr_u8_ip_or_mac_address_str_[ptr_sstc_pssd_argument->u64_number_of_ip_or_mac_address_in_argument_] = NULL;
                }

            /**
            * Copying the content of the actual argument of the program passed in argument of the function to the new ip or mac address in the dynamique array of ip or mac address in the structure argument passed in argument of the function
            */
            u8_lcl_return_from_function = RETURN_FAILURE;
            u8_lcl_return_from_function = Fu8__copying_string_to_allocated_string(dbl_ptr_u8_pssd_program_arguments[s32_lcl_argument_loop_cnt], &(ptr_sstc_pssd_argument->dbl_ptr_u8_ip_or_mac_address_str_[ptr_sstc_pssd_argument->u64_number_of_ip_or_mac_address_in_argument_]));

            /**
            * Check if function to copy the content of the actual argument of the program passed in argument of the function to the new ip or mac address in the dynamique array of ip or mac address in the structure argument passed in argument of the function succeeded
            */
            if(u8_lcl_return_from_function != RETURN_SUCCESS)
                {
                /**
                * Treat the case when the function to copy the content of the actual argument of the program passed in argument of the function to the new ip or mac address in the dynamique array of ip or mac address in the structure argument passed in argument of the function failed
                */

                #ifdef DEVELOPEMENT
                ft_fprintf(STDERR_FILENO, "\033[1;31mERROR\033[0m: in file \033[1m%s\033[0m in function \033[1m%s\033[0m at line \033[1m%d\033[0m\n    The function to copy the content of the actual argument of the program passed in argument of the function to the new ip or mac address in the dynamique array of ip or mac address in the structure argument passed in argument of the function failed\n", __FILE__, __func__, __LINE__);
                #endif

                #ifdef DEMO
                ft_fprintf(STDERR_FILENO, "\033[1;31mERROR\033[0m: in file \033[1m%s\033[0m at line \033[1m%s\033[0m\n", __FILE__, __LINE__);
                #endif

                #ifdef PRODUCTION
                ft_fprintf(STDERR_FILENO, "\033[1;31mERROR\033[0m\n");
                #endif

                /**
                * Return failure to indicate the function to copy the content of the actual argument of the program passed in argument of the function to the new ip or mac address in the dynamique array of ip or mac address in the structure argument passed in argument of the function failed
                */
                return (RETURN_FAILURE);
                }
            else
                {
                /**
                * Treat the case when function to copy the content of the actual argument of the program passed in argument of the function to the new ip or mac address in the dynamique array of ip or mac address in the structure argument passed in argument of the function suucceeded
                */
                }

            /**
            * Checking for overflow
            */
            if(ptr_sstc_pssd_argument->u64_number_of_ip_or_mac_address_in_argument_ < UINT64_MAX)
                {
                ptr_sstc_pssd_argument->u64_number_of_ip_or_mac_address_in_argument_++;
                }
            else
                {
                #ifdef DEVELOPEMENT
                ft_fprintf(STDERR_FILENO, "\033[1;31mERROR\033[0m: in file \033[1m%s\033[0m in function \033[1m%s\033[0m at line \033[1m%d\033[0m\n    The unsigned 64 integer counter variable is going to overflow\n", __FILE__, __func__, __LINE__);
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

            /**
            * Checking for overflow
            */
            if(s32_lcl_argument_loop_cnt < INT32_MAX)
                {
                s32_lcl_argument_loop_cnt++;
                }
            else
                {
                #ifdef DEVELOPEMENT
                ft_fprintf(STDERR_FILENO, "\033[1;31mERROR\033[0m: in file \033[1m%s\033[0m in function \033[1m%s\033[0m at line \033[1m%d\033[0m\n    The signed 32 integer counter variable is going to overflow\n", __FILE__, __func__, __LINE__);
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
        else
            {
            /**
            * Treat the case when the dynamic array of ip or mac address in the structure argument passed in argument of the function is not correctly pointing
            */

            #ifdef DEVELOPEMENT
            ft_fprintf(STDERR_FILENO, "\033[1;31mERROR\033[0m: in file \033[1m%s\033[0m in function \033[1m%s\033[0m at line \033[1m%d\033[0m\n    the dynamic array of ip or mac address in the structure argument passed in argument of the function is not correctly pointing\n", __FILE__, __func__, __LINE__);
            #endif

            #ifdef DEMO
            ft_fprintf(STDERR_FILENO, "\033[1;31mERROR\033[0m: in file \033[1m%s\033[0m at line \033[1m%s\033[0m\n", __FILE__, __LINE__);
            #endif

            #ifdef PRODUCTION
            ft_fprintf(STDERR_FILENO, "\033[1;31mERROR\033[0m\n");
            #endif

            /**
            * Return failure to indicate the dynamic array of ip or mac address in the structure argument passed in argument of the function is not correctly pointing
            */
            return (RETURN_FAILURE);
            }
        }

    /**
    * Check if the number of ip or mac address is not four
    */
    if((ptr_sstc_pssd_argument->u8_simple_options_[MALCOLM_HELP] == FALSE) && (ptr_sstc_pssd_argument->u64_number_of_ip_or_mac_address_in_argument_ != 4))
        {
        /**
        * Treat the case when the number of ip or mac address is not four
        */

        /**
        * Display option error and command option help
        */
        ft_fprintf(STDERR_FILENO, "ft_malcolm: Error: the number of ip or mac address is not four.\n\n");

        (void) fv__help();

        /**
        * Setting argument error
        */
        ptr_sstc_pssd_argument->u8_global_status_ |= SECOND_BIT;

        return (RETURN_SUCCESS);
        }
    else
        {
        /**
        * Treat the case when the number of ip or mac address is not four as expected
        */
        }

    return (RETURN_SUCCESS);
    }
