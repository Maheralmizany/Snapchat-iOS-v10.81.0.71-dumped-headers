//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCSojuMessage.h"

#import "SOJUConversationStateSnapRelease-Protocol.h"

@class NSDictionary, NSString;

@interface SOJUConversationStateSnapRelease : SCSojuMessage <SOJUConversationStateSnapRelease>
{
}

+ (void)registerMessageFields:(id)arg1;
- (id)initWithUsername:(id)arg1 releases:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSDictionary *releases; // @dynamic releases;
@property(readonly) Class superclass;
@property(readonly, nonatomic) NSString *username; // @dynamic username;

@end
