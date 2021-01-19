// Objective-C API for talking to github.com/dabankio/wallet-core/core/omni Go package.
//   gobind -lang=objc github.com/dabankio/wallet-core/core/omni
//
// File is generated by gobind. Do not edit.

#ifndef __Omni_H__
#define __Omni_H__

@import Foundation;
#include "ref.h"
#include "Universe.objc.h"

#include "Bip44.objc.h"
#include "Btc.objc.h"

@class OmniPreviousDependentTxOutputAmount;

/**
 * PreviousDependentTxOutputAmount .
 */
@interface OmniPreviousDependentTxOutputAmount : NSObject <goSeqRefInterface> {
}
@property(strong, readonly) _Nonnull id _ref;

- (nonnull instancetype)initWithRef:(_Nonnull id)ref;
- (nonnull instancetype)init;
@property (nonatomic) NSString* _Nonnull txID;
// skipped field PreviousDependentTxOutputAmount.Vout with unsupported type: uint32

@property (nonatomic) double amount;
@end

/**
 * MinNondustOutput Any standard (ie P2PKH) output smaller than this value (in satoshis) will most likely be rejected by the network.
This is calculated by assuming a standard output will be 34 bytes
 */
FOUNDATION_EXPORT const int64_t OmniMinNondustOutput;
FOUNDATION_EXPORT NSString* _Nonnull const OmniOptionShareAccountWithParentChain;

/**
 * CreateSimpleSendTransaction 创建基于btc的omni交易,该方法构建比特币交易输出，包括：
1. omni layer Class c opreturn data (`propertyID`,`omniAmount` here)
2. dust (amount 546 satoshis) output to `sendToAddress`
3. change output to `changeAddress`

`propertyID`, `propertyDivisible` 资产id,token是否可分
`btcUnspentList` bitcoin utxo list,
`sendToAddress` omni token收款方

ref: (usdt: https://omniexplorer.info/asset/31)
**Note**：不要把找零地址和转账地址传错了，找零地址通常是发送方地址
 */
FOUNDATION_EXPORT BtcBTCTransaction* _Nullable OmniCreateSimpleSendTransaction(long propertyID, BOOL propertyDivisible, BtcBTCUnspent* _Nullable btcUnspentList, BtcBTCAddress* _Nullable sendToAddress, double omniAmount, BtcBTCAddress* _Nullable changeAddress, int64_t btcFeeRate, long chainID, NSError* _Nullable* _Nullable error);

// skipped function CreaterawtxChange with unsupported parameter or return types


/**
 * CreaterawtxOpreturn Impl: https://github.com/OmniLayer/omnicore/blob/master/src/omnicore/doc/rpc-api.md#omni_createrawtx_opreturn
 */
FOUNDATION_EXPORT NSString* _Nonnull OmniCreaterawtxOpreturn(NSString* _Nullable rawtx, NSString* _Nullable payload, NSError* _Nullable* _Nullable error);

// skipped function CreaterawtxReference with unsupported parameter or return types


// skipped function GetClassCOpreturnDataScript with unsupported parameter or return types


// skipped function UtilCreatePayloadSimpleSend with unsupported parameter or return types


#endif