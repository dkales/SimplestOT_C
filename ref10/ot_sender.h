#ifndef OT_SENDER_H
#define OT_SENDER_H

#include <stdio.h>

#include "ge.h"
#include "sc.h"
#include "ot_config.h"

struct ot_sender
{
	unsigned char S_pack[ PACKBYTES ];
	unsigned char y [32];
	ge_p3 yS;
};

typedef struct ot_sender SENDER;

void sender_genS(SENDER *, unsigned char *);
void sender_keygen(SENDER *, unsigned char *, unsigned char (*)[HASHBYTES]);

#endif //ifndef OT_SENDER_H

