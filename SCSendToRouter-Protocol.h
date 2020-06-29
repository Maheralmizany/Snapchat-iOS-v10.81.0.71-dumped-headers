//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, NSString, SCStoriesCustomStoryMetadata, UIViewController;
@protocol SCCustomStoryCreationDelegate, SCUIContainer;

@protocol SCSendToRouter <NSObject>
- (void)showBusinessStoryFirstTimePostForDisplayName:(NSString *)arg1 onAccept:(void (^)(void))arg2 presentingViewController:(UIViewController *)arg3;
- (void)showBestOfSpectaclesIntroWithOnAccept:(void (^)(void))arg1 presentingViewController:(UIViewController *)arg2;
- (void)showOurStoryAttributionIntroForDisplayName:(NSString *)arg1 onAccept:(void (^)(void))arg2 presentingViewController:(UIViewController *)arg3;
- (void)showOurStoryFirstTimePostWithOnAccept:(void (^)(void))arg1 presentingViewController:(UIViewController *)arg2;
- (void)showCustomStoryFirstTimePostForCustomStory:(SCStoriesCustomStoryMetadata *)arg1 onAccept:(void (^)(void))arg2 hasBlockedUsers:(_Bool)arg3 presentingViewController:(UIViewController *)arg4;
- (void)showPrivateStoryFirstTimePostForPublicationId:(NSString *)arg1 onAccept:(void (^)(void))arg2 presentingViewController:(UIViewController *)arg3;
- (void)showAppStoryAuthorizationForApplicationId:(NSString *)arg1 uiContainer:(id <SCUIContainer>)arg2;
- (void)showCustomStoryActionMenuForPublicationId:(NSString *)arg1 presentingViewController:(UIViewController *)arg2;
- (void)showSnapchatterMiniProfileForUserId:(NSString *)arg1 uiContainer:(id <SCUIContainer>)arg2;
- (void)showGroupMiniProfileForGroupId:(NSString *)arg1 uiContainer:(id <SCUIContainer>)arg2;
- (void)showNewGroupPageWithSelectedItems:(NSArray *)arg1 uiContainer:(id <SCUIContainer>)arg2;
- (void)completeCustomStoryCreation;
- (void)showCustomStoryCreationWithPresentingViewController:(UIViewController *)arg1 delegate:(id <SCCustomStoryCreationDelegate>)arg2;
@end
