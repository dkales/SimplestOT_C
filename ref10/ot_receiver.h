#ifndef OT_RECEIVER_H
#define OT_RECEIVER_H

#include <stdio.h>

#include "sc.h"
#include "ge.h"
#include "ot_config.h"

struct ot_receiver
{
	unsigned char S_pack[ PACKBYTES ];
	ge_p3 S;

	// temporary

	ge_p3 xB;
	unsigned char x[32];
};

typedef struct ot_receiver RECEIVER;

void receiver_procS(RECEIVER *);
void receiver_rsgen(RECEIVER *, unsigned char *, unsigned char);
void receiver_keygen(RECEIVER *, unsigned char [HASHBYTES]);

#endif //ifndef OT_RECEIVER_H

