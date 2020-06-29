//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"

@class NSMutableArray, NSMutableDictionary, NSOperationQueue, NSURL, NSURLCredential;

@interface AFHTTPClient : NSObject <NSCoding, NSCopying>
{
    _Bool _allowsInvalidSSLCertificate;
    int _parameterEncoding;
    int _defaultSSLPinningMode;
    NSURL *_baseURL;
    unsigned long long _stringEncoding;
    NSMutableArray *_registeredHTTPOperationClassNames;
    NSMutableDictionary *_defaultHeaders;
    NSURLCredential *_defaultCredential;
    NSOperationQueue *_operationQueue;
}

@property(nonatomic) _Bool allowsInvalidSSLCertificate; // @synthesize allowsInvalidSSLCertificate=_allowsInvalidSSLCertificate;
@property(nonatomic) int defaultSSLPinningMode; // @synthesize defaultSSLPinningMode=_defaultSSLPinningMode;
@property(retain, nonatomic) NSOperationQueue *operationQueue; // @synthesize operationQueue=_operationQueue;
@property(retain, nonatomic) NSURLCredential *defaultCredential; // @synthesize defaultCredential=_defaultCredential;
@property(retain, nonatomic) NSMutableDictionary *defaultHeaders; // @synthesize defaultHeaders=_defaultHeaders;
@property(retain, nonatomic) NSMutableArray *registeredHTTPOperationClassNames; // @synthesize registeredHTTPOperationClassNames=_registeredHTTPOperationClassNames;
@property(nonatomic) int parameterEncoding; // @synthesize parameterEncoding=_parameterEncoding;
@property(nonatomic) unsigned long long stringEncoding; // @synthesize stringEncoding=_stringEncoding;
@property(retain, nonatomic) NSURL *baseURL; // @synthesize baseURL=_baseURL;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)71b408fd0ec6a97d21b433c96e6d5b:(id)arg1 3d1a:(id)arg2 641111be88:(id)arg3 0014c5754363053cdc3d372d3:(CDUnknownBlockType)arg4;
- (id)57dd4acf0c3783489:(id)arg1 9a40:(id)arg2 0479aafbfe:(id)arg3;
- (void)setDefaultHeader:(id)arg1 value:(id)arg2;
- (id)description;
- (void)dealloc;
- (id)initWithBaseURL:(id)arg1;
- (id)init;

@end

