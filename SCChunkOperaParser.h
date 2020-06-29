//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface SCChunkOperaParser : NSObject
{
}

+ (void)copyCommonSponsoredSlugProperties:(id)arg1 to:(id)arg2;
+ (id)_deepLinkAttachmentPagePropertiesItem:(id)arg1 pageProperties:(id)arg2 adHeadline:(id)arg3 experimentManager:(id)arg4;
+ (id)_subscribePagePropertiesForPrimaryColor:(id)arg1 secondaryColor:(id)arg2 item:(id)arg3 pageProperties:(id)arg4 isAd:(_Bool)arg5 isEligibleForSwipeUpToNotifyMe:(_Bool)arg6;
+ (id)_appInstallPagePropertiesForSection:(id)arg1 item:(id)arg2 pageProperties:(id)arg3 isAd:(_Bool)arg4 experimentManager:(id)arg5;
+ (id)_cameraLensesPropertiesWithTweakScancodeIds:(id)arg1;
+ (id)_cameraPagePropertiesForItem:(id)arg1 pageProperties:(id)arg2;
+ (id)_cameraPagePropertiesForAdToLensModel:(id)arg1 pageProperties:(id)arg2 adId:(id)arg3 adRequestClientId:(id)arg4;
+ (id)_adCameraPagePropertiesForItem:(id)arg1 pageProperties:(id)arg2 adId:(id)arg3 adRequestClientId:(id)arg4;
+ (id)_remoteVideoPagePropertiesForSection:(id)arg1 item:(id)arg2 pageProperties:(id)arg3 streamingURLProvider:(id)arg4 isAd:(_Bool)arg5 editionId:(id)arg6;
+ (unsigned long long)parseBridgeCapabilities:(id)arg1;
+ (id)_remoteWebPagePropertiesForItem:(id)arg1 topSnapItem:(id)arg2 longformItem:(id)arg3 section:(id)arg4 pageProperties:(id)arg5 isAd:(_Bool)arg6 adKey:(id)arg7 adId:(id)arg8 webviewMacros:(id)arg9 primaryColor:(id)arg10 secondaryColor:(id)arg11 subscriptionBarColor:(id)arg12 subscriptionIconKey:(id)arg13 subscriptionChecker:(id)arg14 userSession:(id)arg15 isEligibleForSwipeUpToNotify:(_Bool)arg16 editionId:(id)arg17 videoBoxEnabled:(_Bool)arg18;
+ (id)_localWebPagePropertiesForItem:(id)arg1 pageProperties:(id)arg2 isAd:(_Bool)arg3 primaryColor:(id)arg4 secondaryColor:(id)arg5 subscriptionBarColor:(id)arg6 subscriptionIconKey:(id)arg7 subscriptionChecker:(id)arg8;
+ (id)_commercePagePropertiesForItem:(id)arg1 pageProperties:(id)arg2;
+ (id)_topSnapPagePropertiesForSection:(id)arg1 topSnapItem:(id)arg2 overlayItem:(id)arg3 longformItem:(id)arg4 pageProperties:(id)arg5 isAd:(_Bool)arg6 adId:(id)arg7 adKey:(id)arg8 adBrandName:(id)arg9 adHeadline:(id)arg10 sponsoredSlug:(id)arg11 isAdContentLooping:(_Bool)arg12 userSession:(id)arg13 shouldDisplayAdSlug:(_Bool)arg14 streamingURLProvider:(id)arg15 shouldDisplayAdInfoButtonInActionMenu:(_Bool)arg16 isUnskippableAd:(_Bool)arg17 isStoryEligibleForSwipeUpToNotify:(_Bool)arg18 operaNavigationStyle:(long long)arg19;
+ (id)_affordanceTextForSection:(id)arg1 longformItem:(id)arg2 isEligibleForSwipeUpToNotify:(_Bool)arg3;
+ (id)pagesPropertiesForChunkSection:(id)arg1 pageProperties:(id)arg2 sponsoredSlug:(id)arg3 isAdContentLooping:(_Bool)arg4 primaryColor:(id)arg5 secondaryColor:(id)arg6 subscriptionBarColor:(id)arg7 subscriptionIconKey:(id)arg8 topSnapAccessibilityLabel:(id)arg9 longformAccessibilityLabel:(id)arg10 longPressEnabled:(_Bool)arg11 isAd:(_Bool)arg12 adKey:(id)arg13 adId:(id)arg14 adRequestClientId:(id)arg15 adBrandName:(id)arg16 adHeadline:(id)arg17 webviewMacros:(id)arg18 topSnapPageBaseProperties:(id)arg19 subscriptionChecker:(id)arg20 userSession:(id)arg21 shouldDisplayAdSlug:(_Bool)arg22 streamingURLProvider:(id)arg23 shouldDisplayAdInfoButtonInActionMenu:(_Bool)arg24 isUnskippableAd:(_Bool)arg25 isPromotedStory:(_Bool)arg26 adToLensModel:(id)arg27 isStoryEligibleForSwipeUpToNotify:(_Bool)arg28 editionId:(id)arg29 operaNavigationStyle:(long long)arg30;

@end

