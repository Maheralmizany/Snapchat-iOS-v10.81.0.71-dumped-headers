//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCSojuMessage.h"

#import "SOJUUnlockablesUnlockableContext-Protocol.h"

@class NSArray, NSString;

@interface SOJUUnlockablesUnlockableContext : SCSojuMessage <SOJUUnlockablesUnlockableContext>
{
}

+ (void)registerMessageFields:(id)arg1;
- (id)initWithTriggerContexts:(id)arg1 friendContexts:(id)arg2 cameraContexts:(id)arg3 mediaTypeContexts:(id)arg4 actionmojiContexts:(id)arg5 visualContexts:(id)arg6 lensApplicableContexts:(id)arg7;
- (id)initWithProtoBuf:(id)arg1;
- (id)initWithProtoBinary:(id)arg1;

// Remaining properties
@property(readonly, nonatomic) NSArray *actionmojiContexts; // @dynamic actionmojiContexts;
@property(readonly, nonatomic) NSArray *cameraContexts; // @dynamic cameraContexts;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) NSArray *friendContexts; // @dynamic friendContexts;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSArray *lensApplicableContexts; // @dynamic lensApplicableContexts;
@property(readonly, nonatomic) NSArray *mediaTypeContexts; // @dynamic mediaTypeContexts;
@property(readonly) Class superclass;
@property(readonly, nonatomic) NSArray *triggerContexts; // @dynamic triggerContexts;
@property(readonly, nonatomic) NSArray *visualContexts; // @dynamic visualContexts;

@end

