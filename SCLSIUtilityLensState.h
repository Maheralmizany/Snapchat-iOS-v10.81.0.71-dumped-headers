//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSString, SCUtilityLensMetadata;

@interface SCLSIUtilityLensState : NSObject <NSCopying>
{
    NSString *_context;
    unsigned long long _scanState;
    long long _devicePosition;
    SCUtilityLensMetadata *_metadata;
}

@property(readonly, copy, nonatomic) SCUtilityLensMetadata *metadata; // @synthesize metadata=_metadata;
@property(readonly, nonatomic) long long devicePosition; // @synthesize devicePosition=_devicePosition;
@property(readonly, nonatomic) unsigned long long scanState; // @synthesize scanState=_scanState;
@property(readonly, copy, nonatomic) NSString *context; // @synthesize context=_context;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithContext:(id)arg1 scanState:(unsigned long long)arg2 devicePosition:(long long)arg3 metadata:(id)arg4;

@end
