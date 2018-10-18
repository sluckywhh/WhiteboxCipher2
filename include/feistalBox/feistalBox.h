#ifndef HEADER_FEISTALBOX_H
#define HEADER_FEISTALBOX_H

#include<wbc2/wbc2.h>
#include<AisinoSSL/openssl/modes.h>
#include<stdio.h>
#include<stdlib.h>
#define FEISTALBOX_ENC 1
#define FEISTALBOX_DEC 0

# ifdef  __cplusplus
extern "C" {
# endif


/**
 FeistalBox cbc encrypt

 @param in data to be encrypt
 @param out encrypted data
 @param length length of in, in bytes
 @param key FeistalBox's encrypt key
 @param ivec iv
 @param enc 1 to FEISTALBOX_ENC, 0 to FEISTALBOX_DEC
 */

void FEISTALBOX_encrypt(const unsigned char *in, unsigned char *out, const FeistalBox *fb);
void FEISTALBOX_decrypt(const unsigned char *in, unsigned char *out, const FeistalBox *fb);

void FEISTALBOX_wcbc_encrypt(const unsigned char *in, unsigned char *out,
                     size_t length, const FeistalBox *fb,
                     const unsigned char *ivec, const int enc);

void FEISTALBOX_cfb_encrypt(const unsigned char *in, unsigned char *out,
                     size_t length, const FeistalBox *fb,
                     const unsigned char *ivec, const int enc);



# ifdef  __cplusplus
}
# endif

#endif