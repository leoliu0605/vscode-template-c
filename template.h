/**
 * @file template.h
 * @author leoli (jafee201153@gmail.com)
 * @brief
 * @version 0.1
 * @date 2023-11-06
 *
 * @copyright Copyright (c) 2023
 *
 */

#ifndef __${TM_FILENAME_BASE / (.*) / ${1 : / upcase } / } _H
#define __$ {TM_FILENAME_BASE / (.*) / ${1 : / upcase} / } _H

#ifdef __cplusplus
extern "C" {
#endif

/*  */
#pragma region includes

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#pragma endregion includes

/*  */
#pragma region typedef

#pragma endregion typedef

/*  */
#pragma region defines

#pragma endregion defines

/*  */
#pragma region Exported Functions

#pragma endregion Exported Functions

#ifdef __cplusplus
}
#endif

#endif  // __${TM_FILENAME_BASE/(.*)/${1:/upcase}/}_H
