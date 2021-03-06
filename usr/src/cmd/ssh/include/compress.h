/*	$OpenBSD: compress.h,v 1.11 2002/03/04 17:27:39 stevesk Exp $	*/

#ifndef	_COMPRESS_H
#define	_COMPRESS_H

#pragma ident	"%Z%%M%	%I%	%E% SMI"

#ifdef __cplusplus
extern "C" {
#endif


/*
 * Author: Tatu Ylonen <ylo@cs.hut.fi>
 * Copyright (c) 1995 Tatu Ylonen <ylo@cs.hut.fi>, Espoo, Finland
 *                    All rights reserved
 * Interface to packet compression for ssh.
 *
 * As far as I am concerned, the code I have written for this software
 * can be used freely for any purpose.  Any derived versions of this
 * software must be clearly marked as such, and if the derived work is
 * incompatible with the protocol description in the RFC file, it must be
 * called by a name other than "ssh" or "Secure Shell".
 */

void	 buffer_compress_init_send(int);
void	 buffer_compress_init_recv(void);
void     buffer_compress_uninit(void);
void     buffer_compress(Buffer *, Buffer *);
void     buffer_uncompress(Buffer *, Buffer *);

#ifdef __cplusplus
}
#endif

#endif /* _COMPRESS_H */
