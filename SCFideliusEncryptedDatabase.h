//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class EGOCipher;

@interface SCFideliusEncryptedDatabase : NSObject
{
    EGOCipher *_egoCipher;
}

- (void).cxx_destruct;
- (int)lastErrorCode;
- (_Bool)hadError;
- (id)lastErrorMessage;
- (void)logError:(id)arg1 statement:(id)arg2 path:(id)arg3;
- (id)executeQuery:(id)arg1 parameters:(id)arg2;
- (_Bool)executeUpdate:(id)arg1 parameters:(id)arg2;
- (void)close;
- (_Bool)checkIntegrity:(id)arg1;
- (id)initWithUrl:(id)arg1 iwek:(id)arg2 error:(id *)arg3;

@end

