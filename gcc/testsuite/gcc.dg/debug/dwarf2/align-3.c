// { dg-do compile }
// { dg-options "-O -g -dA" }
// { dg-final { scan-assembler-times " DW_AT_alignment" 1 { xfail { powerpc-ibm-aix* } } } }

typedef int int_t;
typedef int_t __attribute__((__aligned__(64))) i_t;
i_t i;