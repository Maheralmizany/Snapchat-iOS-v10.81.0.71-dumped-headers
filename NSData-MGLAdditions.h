//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSData.h>

@interface NSData (MGLAdditions)
+ (id)dataWithBase64UrlEncodedString:(id)arg1;
+ (id)dataWithBase64EncodedString:(id)arg1;
+ (id)secureRandomBase64EncodedStringOfLength:(unsigned long long)arg1;
+ (id)secureRandomDataOfLength:(unsigned long long)arg1;
+ (id)grpc_dataWithByteBuffer:(struct grpc_byte_buffer *)arg1;
+ (id)grpc_dataFromMetadataValue:(struct grpc_metadata *)arg1;
+ (id)decodeWebSafeBase64ForString:(id)arg1;
+ (id)decodeBase64ForString:(id)arg1;
- (id)mgl_decompressedData;
- (id)mgl_compressedData;
- (unsigned int)f2f_crc32Value;
- (id)gzipUnzippedData;
- (id)base64UrlNoPaddingEncodedString;
- (id)base64UrlEncodedStringNoLineEnding;
- (id)sc_base64UrlEncodedString;
- (id)base64EncodedString;
- (id)toHexString;
- (unsigned long long)potentialMediaType;
- (void)FC_encodeWithCoder:(id)arg1;
- (id)base32String;
- (id)sc_decodeJSON;
- (id)secureDecryptWithKey:(id)arg1 iv:(id)arg2;
- (id)secureEncryptWithKey:(id)arg1 iv:(id)arg2;
- (id)SHA256Base64UrlNoPaddingString;
- (id)SHA256Base64String;
- (id)SHA256Data;
- (id)MD5Base64String;
- (struct grpc_byte_buffer *)grpc_byteBuffer;
- (void)grpc_initMetadata:(struct grpc_metadata *)arg1;
- (id)packMetadata;
- (id)stickerImage;
- (id)encodeWebSafeBase64ForData;
- (id)encodeBase64ForData;
@end
