#ifndef COMMON_H
#define COMMON_H
#include<stdio.h>
#include<string.h>
#define MAGIC_STRING "#*"  /* Magic string to identify whether stegged or not */
/* Status will be used in fn. return type */
typedef enum
{
    failure,
    success
} Status;

typedef enum
{
    unsupported,
    encode,
    decode
} Opr_type;

#endif