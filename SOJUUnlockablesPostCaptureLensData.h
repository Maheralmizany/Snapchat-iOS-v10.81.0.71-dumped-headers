//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCSojuMessage.h"

#import "SOJUUnlockablesPostCaptureLensData-Protocol.h"

@class NSString;

@interface SOJUUnlockablesPostCaptureLensData : SCSojuMessage <SOJUUnlockablesPostCaptureLensData>
{
}

+ (void)registerMessageFields:(id)arg1;
- (id)initWithResourceUrl:(id)arg1 resourceSignature:(id)arg2;
- (id)initWithProtoBuf:(id)arg1;
- (id)initWithProtoBinary:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSString *resourceSignature; // @dynamic resourceSignature;
@property(readonly, nonatomic) NSString *resourceUrl; // @dynamic resourceUrl;
@property(readonly) Class superclass;

@end

