//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"

@class NSString;

@interface SCSnapAdsAdSourceConfig : NSObject <NSCopying, NSCoding>
{
    _Bool _shouldInitializePetra;
    NSString *_protoInitEndpoint;
    NSString *_protoServeEndpoint;
    NSString *_protoInitAPIGatewayEnabledEndpoint;
}

@property(readonly, nonatomic) _Bool shouldInitializePetra; // @synthesize shouldInitializePetra=_shouldInitializePetra;
@property(readonly, copy, nonatomic) NSString *protoInitAPIGatewayEnabledEndpoint; // @synthesize protoInitAPIGatewayEnabledEndpoint=_protoInitAPIGatewayEnabledEndpoint;
@property(readonly, copy, nonatomic) NSString *protoServeEndpoint; // @synthesize protoServeEndpoint=_protoServeEndpoint;
@property(readonly, copy, nonatomic) NSString *protoInitEndpoint; // @synthesize protoInitEndpoint=_protoInitEndpoint;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithProtoInitEndpoint:(id)arg1 protoServeEndpoint:(id)arg2 protoInitAPIGatewayEnabledEndpoint:(id)arg3 shouldInitializePetra:(_Bool)arg4;
- (id)initWithCoder:(id)arg1;

@end

