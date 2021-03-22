#include <stdio.h>
#include <rpc/rpc.h>
#include "rpcsquare.h"

int *func_1_svc(int *a, struct svc_req *x)
{
	int *b = malloc(sizeof(int));
	*b = (*a) * (*a);
	return (b);
}
