/*
 * This is sample code generated by rpcgen.
 * These are only templates and you can use them
 * as a guideline for developing your own functions.
 */

#include "sshrpc.h"
#include <systemd/sd-daemon.h>
#include <string.h>

int *
sshrpc_1_svc(char **argp, struct svc_req *rqstp)
{
	static int  result;

	if (!strcmp(*argp, "READY")){
		sd_notify(0, "READY=1");
		result = 0;
	} else {
		result = 1;
	}

	return &result;
}
