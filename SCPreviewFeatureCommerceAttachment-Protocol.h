//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCPreviewFeatureViewControllerPresenting-Protocol.h"

@protocol SCPreviewFeatureCommerceAttachmentAttachingDelegate;

@protocol SCPreviewFeatureCommerceAttachment <SCPreviewFeatureViewControllerPresenting>
@property(nonatomic) __weak id <SCPreviewFeatureCommerceAttachmentAttachingDelegate> attachingDelegate;
- (void)trackAttachmentPostedToStory:(_Bool)arg1 toGroup:(_Bool)arg2 toFriend:(_Bool)arg3;
- (_Bool)hasAttachment;
- (void)clearAttachments;
- (void)presentAttachmentTool;
- (void)prepareStoreInfoWithCompletion:(void (^)(SOJUCommerceStoreInfo *))arg1;
- (_Bool)shouldShowStoreButton;
@end

