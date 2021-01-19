// Objective-C API for talking to github.com/dabankio/wallet-core/crypto Go package.
//   gobind -lang=objc github.com/dabankio/wallet-core/crypto
//
// File is generated by gobind. Do not edit.

#ifndef __Crypto_H__
#define __Crypto_H__

@import Foundation;
#include "ref.h"
#include "Universe.objc.h"


/**
 * Blake2b256 blake2b.Sum256
 */
FOUNDATION_EXPORT NSData* _Nullable CryptoBlake2b256(NSData* _Nullable msg);

/**
 * Blake2b384 blake2b.Sum384
 */
FOUNDATION_EXPORT NSData* _Nullable CryptoBlake2b384(NSData* _Nullable msg);

/**
 * Blake2b512 blake2b.Sum512
 */
FOUNDATION_EXPORT NSData* _Nullable CryptoBlake2b512(NSData* _Nullable msg);

/**
 * Ed25519sign ed25519签名, seed为私钥, msg: 代签数据

(BBC私钥 hex decode 字符串然后反转字节顺序即可,即: HexDecodeThenReverse)
 */
FOUNDATION_EXPORT NSData* _Nullable CryptoEd25519sign(NSData* _Nullable seed, NSData* _Nullable msg);

/**
 * Ed25519verify 验证签名,公钥 明文 密文

(BBC公钥 hex decode 字符串然后反转字节顺序即可,即: HexDecodeThenReverse)
 */
FOUNDATION_EXPORT BOOL CryptoEd25519verify(NSData* _Nullable publicKey, NSData* _Nullable message, NSData* _Nullable sig);

/**
 * HexDecodeThenReverse hex decode then reverse byte[]
 */
FOUNDATION_EXPORT NSData* _Nullable CryptoHexDecodeThenReverse(NSString* _Nullable str, NSError* _Nullable* _Nullable error);

#endif