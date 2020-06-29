//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class SCChatAttribution, SCChatConfiguration, SCChatIdentifier;

@interface SCChatIntent : NSObject <NSCopying>
{
    SCChatAttribution *_attribution;
    SCChatConfiguration *_configuration;
    SCChatIdentifier *_identifier;
}

@property(readonly, copy, nonatomic) SCChatIdentifier *identifier; // @synthesize identifier=_identifier;
@property(readonly, copy, nonatomic) SCChatConfiguration *configuration; // @synthesize configuration=_configuration;
@property(readonly, copy, nonatomic) SCChatAttribution *attribution; // @synthesize attribution=_attribution;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithAttribution:(id)arg1 configuration:(id)arg2 identifier:(id)arg3;

@end
