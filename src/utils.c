/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niduches <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/13 14:52:10 by niduches          #+#    #+#             */
/*   Updated: 2021/09/13 16:18:08 by niduches         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "malcolm.h"

uint8_t Fu8__copying_string_to_allocated_string(uint8_t *ptr_u8_pssd_source_str, uint8_t **dbl_ptr_u8_pssd_destination_str)
    {
    /**
    * Assertion of argument
    */

    /**
    * Check if the source string is correctly pointing passed as an argument of the function
    */
    if(ptr_u8_pssd_source_str == NULL)
        {
        /**
        * Treat the case when the source string is not correctly pointing passed as an argument of the function
        */

        #ifdef DEVELOPEMENT
        ft_fprintf(STDERR_FILENO, "\033[1;31mERROR\033[0m: in file \033[1m%s\033[0m in function \033[1m%s\033[0m at line \033[1m%d\033[0m\n    the source string is not correctly pointing passed as an argument of the function\n", __FILE__, __func__, __LINE__);
        #endif

        #ifdef DEMO
        ft_fprintf(STDERR_FILENO, "\033[1;31mERROR\033[0m: in file \033[1m%s\033[0m at line \033[1m%s\033[0m\n", __FILE__, __LINE__);
        #endif

        #ifdef PRODUCTION
        ft_fprintf(STDERR_FILENO, "\033[1;31mERROR\033[0m\n");
        #endif

        /**
        * Return failure to indicate the source string is not correctly pointing passed as an argument of the function
        */
        return (RETURN_FAILURE);
        }
    else
        {
        /**
        * Treat the case when the source string is correctly pointing passed as an argument of the function
        */
        } 

    /**
    * Check if the pointer of the destination string is correctly pointing passed as an argument of the function
    */
    if(dbl_ptr_u8_pssd_destination_str == NULL)
        {
        /**
        * Treat the case when the pointer of the destination string is not correctly pointing passed as an argument of the function
        */

        #ifdef DEVELOPEMENT
        ft_fprintf(STDERR_FILENO, "\033[1;31mERROR\033[0m: in file \033[1m%s\033[0m in function \033[1m%s\033[0m at line \033[1m%d\033[0m\n    the pointer of the destination string is not correctly pointing passed as an argument of the function\n", __FILE__, __func__, __LINE__);
        #endif

        #ifdef DEMO
        ft_fprintf(STDERR_FILENO, "\033[1;31mERROR\033[0m: in file \033[1m%s\033[0m at line \033[1m%s\033[0m\n", __FILE__, __LINE__);
        #endif

        #ifdef PRODUCTION
        ft_fprintf(STDERR_FILENO, "\033[1;31mERROR\033[0m\n");
        #endif

        /**
        * Return failure to indicate the pointer of the destination string is not correctly pointing passed as an argument of the function
        */
        return (RETURN_FAILURE);
        }
    else
        {
        /**
        * Treat the case when the pointer of the destination string is correctly pointing passed as an argument of the function
        */
        } 

    /**
    * Creation of local variable
    */
    uint64_t u64_lcl_cnt;
    uint64_t u64_lcl_length;

    /**
    * Initialization of local variable
    */
    u64_lcl_cnt    = 0;
    u64_lcl_length = 0;

    /**
    * Get the length of the source string passed in argument of the function
    */ 
    u64_lcl_length = 0;
    while(ptr_u8_pssd_source_str[u64_lcl_length] != NIL)
        {
        /**
        * Checking for overflow
        */
        if(u64_lcl_length < UINT64_MAX)
            {
            u64_lcl_length++;
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
    * Check if the length of the source string passed in argument of the function is to big to allocate the destination string
    */
    if(u64_lcl_length == UINT64_MAX)
        {
        /**
        * Treat the case when the length of the source string passed in argument of the function is to big to allocate the destination string
        */

        #ifdef DEVELOPEMENT
        ft_fprintf(STDERR_FILENO, "\033[1;31mERROR\033[0m: in file \033[1m%s\033[0m in function \033[1m%s\033[0m at line \033[1m%d\033[0m\n    the length of the source string passed in argument of the function is to big to allocate the destination string\n", __FILE__, __func__, __LINE__);
        #endif

        #ifdef DEMO
        ft_fprintf(STDERR_FILENO, "\033[1;31mERROR\033[0m: in file \033[1m%s\033[0m at line \033[1m%s\033[0m\n", __FILE__, __LINE__);
        #endif

        #ifdef PRODUCTION
        ft_fprintf(STDERR_FILENO, "\033[1;31mERROR\033[0m\n");
        #endif

        /**
        * Return failure to indicate the length of the source string passed in argument of the function is to big to allocate the destination string
        */
        return (RETURN_FAILURE);
        }
    else
        {
        /**
        * Treat the case when the length of the source string passed in argument of the function is not to big to allocate the destination string
        */
        } 

    /**
    * Check if the destination string is correctly pointing passed as an argument of the function
    */
    if((*dbl_ptr_u8_pssd_destination_str) == NULL)
        {
        /**
        * Treat the case when the destination string is not correctly pointing passed as an argument of the function
        */

        /**
        * Allocating the the destination string passed in argument of the function
        */
        (*dbl_ptr_u8_pssd_destination_str) = NULL;
        (*dbl_ptr_u8_pssd_destination_str) = (uint8_t *) malloc(sizeof(uint8_t) * u64_lcl_length + 1);

        /**
        * Check if the allocation of the the destination string passed in argument of the function failed
        */
        if((*dbl_ptr_u8_pssd_destination_str) == NULL)
            {
            /**
            * Treat the case when the allocation of the the destination string passed in argument of the function failed
            */

            #ifdef DEVELOPEMENT
            ft_fprintf(STDERR_FILENO, "\033[1;31mERROR\033[0m: in file \033[1m%s\033[0m in function \033[1m%s\033[0m at line \033[1m%d\033[0m\n    the allocation of the the destination string passed in argument of the function failed\n", __FILE__, __func__, __LINE__);
            #endif

            #ifdef DEMO
            ft_fprintf(STDERR_FILENO, "\033[1;31mERROR\033[0m: in file \033[1m%s\033[0m at line \033[1m%s\033[0m\n", __FILE__, __LINE__);
            #endif

            #ifdef PRODUCTION
            ft_fprintf(STDERR_FILENO, "\033[1;31mERROR\033[0m\n");
            #endif

            /**
            * Return failure to indicate the allocation of the the destination string passed in argument of the function failed
            */
            return (RETURN_FAILURE);
            }
        else
            {
            /**
            * Treat the case when the allocation of the the destination string passed in argument of the function succeeded
            */

            /**
            * Setting all the character of the the destination string passed in argument of the function to nil
            */
            u64_lcl_cnt = 0;
            while(u64_lcl_cnt < u64_lcl_length)
                {
                (*dbl_ptr_u8_pssd_destination_str)[u64_lcl_cnt] = NIL;

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
            * Setting the last character of the the destination string passed in argument of the function to nil
            */
            (*dbl_ptr_u8_pssd_destination_str)[u64_lcl_length] = NIL;
            }
        }
    else
        {
        /**
        * Treat the case when the destination string is correctly pointing passed as an argument of the function
        */

        /**
        * Reallocating the the destination string passed in argument of the function
        */
        (*dbl_ptr_u8_pssd_destination_str) = (uint8_t *) realloc((*dbl_ptr_u8_pssd_destination_str), sizeof(uint8_t) *  u64_lcl_length + 1);

        /**
        * Check if the reallocation of the the destination string passed in argument of the function failed
        */
        if((*dbl_ptr_u8_pssd_destination_str) == NULL)
            {
            /**
            * Treat the case when the reallocation of the the destination string passed in argument of the function failed
            */

            #ifdef DEVELOPEMENT
            ft_fprintf(STDERR_FILENO, "\033[1;31mERROR\033[0m: in file \033[1m%s\033[0m in function \033[1m%s\033[0m at line \033[1m%d\033[0m\n    the reallocation of the the destination string passed in argument of the function failed\n", __FILE__, __func__, __LINE__);
            #endif

            #ifdef DEMO
            ft_fprintf(STDERR_FILENO, "\033[1;31mERROR\033[0m: in file \033[1m%s\033[0m at line \033[1m%s\033[0m\n", __FILE__, __LINE__);
            #endif

            #ifdef PRODUCTION
            ft_fprintf(STDERR_FILENO, "\033[1;31mERROR\033[0m\n");
            #endif

            /**
            * Return failure to indicate the reallocation of the the destination string passed in argument of the function failed
            */
            return (RETURN_FAILURE);
            }
        else
            {
            /**
            * Treat the case when the reallocation of the the destination string passed in argument of the function succeeded
            */

            /**
            * Setting all the character of the the destination string passed in argument of the function to nil
            */
            u64_lcl_cnt = 0;
            while(u64_lcl_cnt < u64_lcl_length)
                {
                (*dbl_ptr_u8_pssd_destination_str)[u64_lcl_cnt] = NIL;

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
            * Setting the last character of the the destination string passed in argument of the function to nil
            */
            (*dbl_ptr_u8_pssd_destination_str)[u64_lcl_length] = NIL;
            }
        }

    /**
    * Copying the content of the source string passed in argument of the function to the destination string passed in argument of the function
    */
    u64_lcl_cnt = 0;
    while((u64_lcl_cnt < u64_lcl_length) && (ptr_u8_pssd_source_str[u64_lcl_cnt] != NIL))
        {
        (*dbl_ptr_u8_pssd_destination_str)[u64_lcl_cnt] = ptr_u8_pssd_source_str[u64_lcl_cnt];

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

    return (RETURN_SUCCESS);
    }
