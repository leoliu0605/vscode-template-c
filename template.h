#ifndef __${TM_FILENAME_BASE/(.*)/${1:/upcase}/}_H
#define __${TM_FILENAME_BASE/(.*)/${1:/upcase}/}_H

#ifdef __cplusplus
extern "C" {
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

$1

#ifdef __cplusplus
}
#endif

#endif  // __${TM_FILENAME_BASE/(.*)/${1:/upcase}/}_H
