/**
 * @file        assert.h
 * @author      Javnson
 * @email       javnson@zju.edu.cn
 * @date        2022.03.07(Create:2022.03.07)
 * @version     1.0.0:0000
 * @licence     Apache License, Version 2.0
 *
 * @brief
 *
 * Change history :
 *   <Date>   | <version>  | <author> | <Description> |
 * 2022.03.07 | 1.0.0:0000 | Javnson  | Create File   |
 * 2022.03.10 | 1.0.0:0001 | Javnson  | Add assert, print_dbg, log function. | 
 *
 */

#include <stdio.h>
#include <stdint.h>

// control suite assert error.
/**
	* @brief control suite assert error. Programmer must ensure the condition in the assert function is true.
	*
	* @param condition the condition to be judge.
	*
	* @retval None
	*
	*/
#ifndef cs_assert_error
#if defined _DEBUG
#define cs_assert_error(condition, msg, ...) \
	if(!(condition)) \
	{ \
	printf("> [%s, %d, in function %s, Assert]:\n"msg,__FILE__,__LINE__,__func__,##__VA_ARGS__) \
	}
#else
#define cs_assert_error(condition)
#endif
#endif

/**
	* @brief control suite debug print. Programmer should generate some debug information for debugging.
	*
	* @param just like what printf function do.
	*
	* @retval None
	*
	*/
#ifndef cs_print_dbg
#if defined _DEBUG
#define cs_print_dbg(msg, ...) \
	printf("> [%s, %d, in function %s, Dbg INFO]:\n"msg,__FILE__,__LINE__,__func__,##__VA_ARGS__)
#else
#define cs_print_dbg(msg, ...) 
#endif
#endif

/**
	* @brief control suite debug print. Programmer should generate some debug information for debugging.
	*
	* @param just like what printf function do.
	*
	* @retval None
	*
	*/
#ifndef cs_log
#define cs_log(msg, ...) \
	printf("> [%s, %d, in function %s, INFO]:\n"msg,__FILE__,__LINE__,__func__,##__VA_ARGS__)
#endif

	/**
	 * @brief Weak function identifier.
	 */
#ifndef WEAKFUNCTION
#define WEAKFUNCTION __weak__
#endif