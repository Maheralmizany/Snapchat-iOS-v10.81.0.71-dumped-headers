//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCSojuMessage.h"

#import "SOJUScannableActionMessage-Protocol.h"

@class NSString;

@interface SOJUScannableActionMessage : SCSojuMessage <SOJUScannableActionMessage>
{
}

+ (void)registerMessageFields:(id)arg1;
- (id)initWithHeadline:(id)arg1 byline:(id)arg2 url:(id)arg3;

// Remaining properties
@property(readonly, nonatomic) NSString *byline; // @dynamic byline;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSString *headline; // @dynamic headline;
@property(readonly) Class superclass;
@property(readonly, nonatomic) NSString *url; // @dynamic url;

@end

