// { dg-do compile }
// { dg-options "-O -g -dA" }
// { dg-final { scan-assembler-times " DW_AT_alignment" 2 { xfail { powerpc-ibm-aix* } } } }

struct tt {
  int __attribute__((__aligned__(64))) i;
} t;