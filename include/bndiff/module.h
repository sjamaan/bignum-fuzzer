#ifndef BNDIFF_MODULE_H
#define BNDIFF_MODULE_H

#include <bndiff/bignum.h>
#include <bndiff/operation.h>
#include <stdint.h>

typedef struct {
    int (*initialize) (void);
    int (*bignum_from_string) (const char* input, void** output);
    int (*string_from_bignum) (void* input, char** output);
    void (*destroy_bignum) (void* bignum);
    int (*operation) (bignum_cluster_t* bignum_cluster,
            operation_t operation, uint8_t op);
    void (*shutdown) (void);
    const char* name;
} module_t;

#endif
