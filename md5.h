/*
    md5.h

    Copyright (c) All Rights Reserved. See details at the end of the file.
 */
/******************************************************************************/

#ifndef _h_MD5
#define _h_MD5 1

#if !BIT_PACK_SSL
//  MOB - But this is only the case if MatrixSSL

#ifndef ulong32
typedef unsigned int ulong32;
#endif

typedef struct {
    ulong32 lengthHi;
    ulong32 lengthLo;
    ulong32 state[4], curlen;
    uchar buf[64];
} psDigestContext_t;

typedef psDigestContext_t   psMd5Context_t;
extern void psMd5Init(psMd5Context_t *md);
extern void psMd5Update(psMd5Context_t *md, uchar *buf, uint len);
extern int  psMd5Final(psMd5Context_t *md, uchar *hash);

#endif /* BIT_PACK_SSL */
#endif /* _h_MD5 */

/*
    @copy   default

    Copyright (c) Embedthis Software LLC, 2003-2012. All Rights Reserved.

    This software is distributed under commercial and open source licenses.
    You may use the Embedthis GoAhead open source license or you may acquire 
    a commercial license from Embedthis Software. You agree to be fully bound
    by the terms of either license. Consult the LICENSE.md distributed with
    this software for full details and other copyrights.

    Local variables:
    tab-width: 4
    c-basic-offset: 4
    End:
    vim: sw=4 ts=4 expandtab

    @end
 */
