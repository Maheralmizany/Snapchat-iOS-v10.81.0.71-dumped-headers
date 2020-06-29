//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCSojuMessage.h"

#import "SOJUMessagingNycStoryShareMetadataResponse-Protocol.h"

@class NSNumber, NSString, SOJUStory;

@interface SOJUMessagingNycStoryShareMetadataResponse : SCSojuMessage <SOJUMessagingNycStoryShareMetadataResponse>
{
}

+ (void)registerMessageFields:(id)arg1;
- (id)initWithStory:(id)arg1 status:(id)arg2 displayText:(id)arg3 lat:(id)arg4 lng:(id)arg5 zoom:(id)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) NSString *displayText; // @dynamic displayText;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSNumber *lat; // @dynamic lat;
@property(readonly, nonatomic) NSNumber *lng; // @dynamic lng;
@property(readonly, nonatomic) NSString *status; // @dynamic status;
@property(readonly, nonatomic) SOJUStory *story; // @dynamic story;
@property(readonly) Class superclass;
@property(readonly, nonatomic) NSNumber *zoom; // @dynamic zoom;

@end
