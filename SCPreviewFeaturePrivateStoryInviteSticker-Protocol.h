//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class NSObject, NSString, SCPrivateStoryInviteStickerView, SCStickerState;
@protocol OS_dispatch_queue, SCPerforming;

@protocol SCPreviewFeaturePrivateStoryInviteSticker
- (void)deletePrivateStoryWithCompletionQueue:(NSObject<OS_dispatch_queue> *)arg1 completion:(void (^)(_Bool))arg2;
- (void)createPrivateStoryUsingStickerState:(SCStickerState *)arg1 completionPerformer:(id <SCPerforming>)arg2 completion:(void (^)(SCStoriesCustomStoryMetadata *, NSString *, NSString *))arg3;
- (void)createPrivateStoryUsingSticker:(SCPrivateStoryInviteStickerView *)arg1 completionPerformer:(id <SCPerforming>)arg2 completion:(void (^)(SCStoriesCustomStoryMetadata *, NSString *, NSString *))arg3;
- (NSString *)storyNameForPrivateStorySticker;
- (NSString *)inviteIdForPrivateStorySticker;
- (NSString *)publicationIdForPrivateStorySticker;
- (SCPrivateStoryInviteStickerView *)privateStoryInviteStickerIfPresent;
@end
