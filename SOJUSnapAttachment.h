//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCSojuMessage.h"

#import "SOJUSnapAttachment-Protocol.h"

@class NSString, SOJUCognacAttachmentBody, SOJUWebAttachmentBody;

@interface SOJUSnapAttachment : SCSojuMessage <SOJUSnapAttachment>
{
}

+ (void)registerMessageFields:(id)arg1;
- (id)initWithAttachmentType:(id)arg1 webAttachment:(id)arg2 cognacAttachment:(id)arg3;

// Remaining properties
@property(readonly, nonatomic) NSString *attachmentType; // @dynamic attachmentType;
@property(readonly, nonatomic) SOJUCognacAttachmentBody *cognacAttachment; // @dynamic cognacAttachment;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(readonly, nonatomic) SOJUWebAttachmentBody *webAttachment; // @dynamic webAttachment;

@end

