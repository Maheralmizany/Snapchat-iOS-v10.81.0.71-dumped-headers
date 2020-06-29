//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCSojuMessage.h"

#import "SOJUScannableActionDeepLink-Protocol.h"

@class NSString, SOJUScannableDeepLinkPostInfo;

@interface SOJUScannableActionDeepLink : SCSojuMessage <SOJUScannableActionDeepLink>
{
}

+ (void)registerMessageFields:(id)arg1;
- (id)initWithHeader:(id)arg1 byline:(id)arg2 iconUrl:(id)arg3 url:(id)arg4 primaryColor:(id)arg5 secondaryColor:(id)arg6 status:(id)arg7 postInfo:(id)arg8;

// Remaining properties
@property(readonly, nonatomic) NSString *byline; // @dynamic byline;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSString *header; // @dynamic header;
@property(readonly, nonatomic) NSString *iconUrl; // @dynamic iconUrl;
@property(readonly, nonatomic) SOJUScannableDeepLinkPostInfo *postInfo; // @dynamic postInfo;
@property(readonly, nonatomic) NSString *primaryColor; // @dynamic primaryColor;
@property(readonly, nonatomic) NSString *secondaryColor; // @dynamic secondaryColor;
@property(readonly, nonatomic) NSString *status; // @dynamic status;
@property(readonly) Class superclass;
@property(readonly, nonatomic) NSString *url; // @dynamic url;

@end

