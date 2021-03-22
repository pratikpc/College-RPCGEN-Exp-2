// client.c
#include <stdio.h>
#include <rpc/rpc.h>
#include "rpcsquare.h"

int main()
{
	CLIENT *c1 = clnt_create("127.0.0.1", PROGRAM, VERSION, "udp");
	int n;
	printf("enter no:\t");
	scanf("%d", &n);
	int* result = func_1(&n, c1);
	printf("result is : %d", *result);
}
