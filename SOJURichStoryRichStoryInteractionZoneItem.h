//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCSojuMessage.h"

#import "SOJURichStoryRichStoryInteractionZoneItem-Protocol.h"

@class NSString, SOJURichStoryRichStoryDeepLinkAttachment, SOJURichStoryRichStoryWebviewAttachment;

@interface SOJURichStoryRichStoryInteractionZoneItem : SCSojuMessage <SOJURichStoryRichStoryInteractionZoneItem>
{
}

+ (void)registerMessageFields:(id)arg1;
- (id)initWithItemIcon:(id)arg1 title:(id)arg2 descriptionValue:(id)arg3 attachmentType:(id)arg4 webview:(id)arg5 deepLink:(id)arg6;

// Remaining properties
@property(readonly, nonatomic) NSString *attachmentType; // @dynamic attachmentType;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, nonatomic) SOJURichStoryRichStoryDeepLinkAttachment *deepLink; // @dynamic deepLink;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) NSString *descriptionValue; // @dynamic descriptionValue;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSString *itemIcon; // @dynamic itemIcon;
@property(readonly) Class superclass;
@property(readonly, nonatomic) NSString *title; // @dynamic title;
@property(readonly, nonatomic) SOJURichStoryRichStoryWebviewAttachment *webview; // @dynamic webview;

@end
