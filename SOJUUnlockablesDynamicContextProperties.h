//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCSojuMessage.h"

#import "SOJUUnlockablesDynamicContextProperties-Protocol.h"

@class NSArray, NSDictionary, NSString;

@interface SOJUUnlockablesDynamicContextProperties : SCSojuMessage <SOJUUnlockablesDynamicContextProperties>
{
}

+ (void)registerMessageFields:(id)arg1;
- (id)initWithDeeplinkProperties:(id)arg1 relativeTimeComponents:(id)arg2;
- (id)initWithProtoBuf:(id)arg1;
- (id)initWithProtoBinary:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, nonatomic) NSDictionary *deeplinkProperties; // @dynamic deeplinkProperties;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSArray *relativeTimeComponents; // @dynamic relativeTimeComponents;
@property(readonly) Class superclass;

@end

