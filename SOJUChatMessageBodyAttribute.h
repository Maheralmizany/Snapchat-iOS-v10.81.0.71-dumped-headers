//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCSojuMessage.h"

#import "SOJUChatMessageBodyAttribute-Protocol.h"

@class NSString;

@interface SOJUChatMessageBodyAttribute : SCSojuMessage <SOJUChatMessageBodyAttribute>
{
}

+ (void)registerMessageFields:(id)arg1;
- (id)initWithType:(id)arg1 iosHref:(id)arg2 itunesId:(id)arg3 affiliateToken:(id)arg4 campaignTracker:(id)arg5 androidHref:(id)arg6 href:(id)arg7 formatType:(id)arg8;

// Remaining properties
@property(readonly, nonatomic) NSString *affiliateToken; // @dynamic affiliateToken;
@property(readonly, nonatomic) NSString *androidHref; // @dynamic androidHref;
@property(readonly, nonatomic) NSString *campaignTracker; // @dynamic campaignTracker;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) NSString *formatType; // @dynamic formatType;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSString *href; // @dynamic href;
@property(readonly, nonatomic) NSString *iosHref; // @dynamic iosHref;
@property(readonly, nonatomic) NSString *itunesId; // @dynamic itunesId;
@property(readonly) Class superclass;
@property(readonly, nonatomic) NSString *type; // @dynamic type;

@end

