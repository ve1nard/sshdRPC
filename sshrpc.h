/*
 * Please do not edit this file.
 * It was generated using rpcgen.
 */

#ifndef _SSHRPC_H_RPCGEN
#define _SSHRPC_H_RPCGEN

#include <rpc/rpc.h>


#ifdef __cplusplus
extern "C" {
#endif


#define SSHRPC_PROG 0x20000000
#define SSHRPC_VERS 1

#if defined(__STDC__) || defined(__cplusplus)
#define sshrpc 1
extern  int * sshrpc_1(char **, CLIENT *);
extern  int * sshrpc_1_svc(char **, struct svc_req *);
extern int sshrpc_prog_1_freeresult (SVCXPRT *, xdrproc_t, caddr_t);

#else /* K&R C */
#define sshrpc 1
extern  int * sshrpc_1();
extern  int * sshrpc_1_svc();
extern int sshrpc_prog_1_freeresult ();
#endif /* K&R C */

#ifdef __cplusplus
}
#endif

#endif /* !_SSHRPC_H_RPCGEN */