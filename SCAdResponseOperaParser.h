//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface SCAdResponseOperaParser : NSObject
{
}

+ (void)copyCommonSponsoredSlugProperties:(id)arg1 to:(id)arg2;
+ (id)_deepLinkAttachmentPageProperties:(id)arg1 contentDeliveryMedia:(id)arg2 mediaManager:(id)arg3 pageProperties:(id)arg4 adHeadline:(id)arg5 experimentManager:(id)arg6;
+ (id)_appInstallPageProperties:(id)arg1 pageProperties:(id)arg2 experimentManager:(id)arg3;
+ (id)_cameraLensesPropertiesWithTweakScancodeIds:(id)arg1;
+ (id)_cameraPagePropertiesForAdToLensModel:(id)arg1 pageProperties:(id)arg2 adId:(id)arg3 adRequestClientId:(id)arg4;
+ (id)_remoteWebPageProperties:(id)arg1 bottomSnap:(id)arg2 pageProperties:(id)arg3 adKey:(id)arg4 adId:(id)arg5 isSharable:(_Bool)arg6 isVideoBoxEnabled:(_Bool)arg7 userSession:(id)arg8 webViewAdPrefetchHints:(id)arg9;
+ (id)_topSnapPageProperties:(id)arg1 contentDeliveryMedia:(id)arg2 mediaManager:(id)arg3 pageProperties:(id)arg4 adId:(id)arg5 adKey:(id)arg6 adBrandName:(id)arg7 adHeadline:(id)arg8 isAdContentLooping:(_Bool)arg9 userSession:(id)arg10 streamingURLProvider:(id)arg11 isUsingBoltDownloading:(_Bool)arg12 operaNavigationStyle:(long long)arg13;
+ (id)_remoteVideoPageProperties:(id)arg1 contentDeliveryMedia:(id)arg2 pageProperties:(id)arg3 userSession:(id)arg4 mediaManager:(id)arg5;
+ (id)_affordanceTextWithTopSnap:(id)arg1 bottomSnap:(id)arg2;
+ (id)_adCameraPageProperties:(id)arg1 pageProperties:(id)arg2 adId:(id)arg3 adRequestClientId:(id)arg4;
+ (id)_deeplinkPageProperties:(id)arg1 pageProperties:(id)arg2 userSession:(id)arg3;
+ (id)pagesPropertiesForAdSnap:(id)arg1 mediaManager:(id)arg2 pageProperties:(id)arg3 contentDeliveryMedia:(id)arg4 isAdContentLooping:(_Bool)arg5 adKey:(id)arg6 adId:(id)arg7 adRequestClientId:(id)arg8 adBrandName:(id)arg9 adHeadline:(id)arg10 topSnapPageBaseProperties:(id)arg11 userSession:(id)arg12 streamingURLProvider:(id)arg13 adToLensModel:(id)arg14 videoBoxEnabled:(_Bool)arg15 isUsingBoltDownloading:(_Bool)arg16 webViewAdPrefetchHints:(id)arg17 operaNavigationStyle:(long long)arg18;

@end

