//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCSojuMessage-Protocol.h"

@class NSString, SOJURichStoryRichStoryDeepLinkAttachment, SOJUUnlockablesAppInstallAttachment, SOJUUnlockablesLongFormVideoAttachment, SOJUUnlockablesWebViewAttachment;

@protocol SOJUUnlockablesAttachment <SCSojuMessage>
@property(readonly, nonatomic) NSString *localizedCtaText;
@property(readonly, nonatomic) SOJURichStoryRichStoryDeepLinkAttachment *deepLink;
@property(readonly, nonatomic) SOJUUnlockablesAppInstallAttachment *appInstall;
@property(readonly, nonatomic) NSString *ctaText;
@property(readonly, nonatomic) SOJUUnlockablesWebViewAttachment *webView;
@property(readonly, nonatomic) SOJUUnlockablesLongFormVideoAttachment *longFormVideo;
@property(readonly, nonatomic) NSString *attachmentType;
@end

