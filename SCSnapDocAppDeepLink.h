//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"

@class NSString, SCSnapDocAppDeepLinkWebFallback, SCSnapDocAppInstall;

@interface SCSnapDocAppDeepLink : NSObject <NSCopying, NSCoding>
{
    NSString *_uri;
    unsigned long long _fallbackOneOfCase;
    SCSnapDocAppInstall *_appInstall;
    SCSnapDocAppDeepLinkWebFallback *_webFallback;
    NSString *_identifier;
}

@property(readonly, copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(readonly, copy, nonatomic) SCSnapDocAppDeepLinkWebFallback *webFallback; // @synthesize webFallback=_webFallback;
@property(readonly, copy, nonatomic) SCSnapDocAppInstall *appInstall; // @synthesize appInstall=_appInstall;
@property(readonly, nonatomic) unsigned long long fallbackOneOfCase; // @synthesize fallbackOneOfCase=_fallbackOneOfCase;
@property(readonly, copy, nonatomic) NSString *uri; // @synthesize uri=_uri;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithUri:(id)arg1 fallbackOneOfCase:(unsigned long long)arg2 appInstall:(id)arg3 webFallback:(id)arg4 identifier:(id)arg5;
- (id)initWithCoder:(id)arg1;

@end

