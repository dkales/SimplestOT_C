# SimplestOT_C
A pure C version of the SimplestOT protocol

## Code Structure

The x86_64 directory contains the original SimplestOT implementation by Tung Chou and Claudio Orlandi, downloadable at [their Homepage](http://users-cs.au.dk/orlandi/simpleOT/).
The ref10 directory contains the modified implementation of the simplestOT protocol in pure C (except the cycle count function, this is just for benchmarking purposes).

The pure c version has a performance decrease of 2-2.5x compared to the optimized asm version using avx2 vector instructions, but might be useful for portability.
You may need to change the definitions in crypto_int_XX.h on your target system.

All code is in the public domain.
