//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface SCBloopsMetricsUtil : NSObject
{
}

+ (id)_onboardingTextResultFromResultType:(long long)arg1 errorType:(id)arg2;
+ (void)reportChatStickerPickerCloseWithBloopsStatus:(id)arg1;
+ (void)reportOnboardingFinishWithSuccess:(_Bool)arg1 resultType:(long long)arg2 errorType:(id)arg3;
+ (void)reportBloopsExport:(id)arg1 success:(_Bool)arg2;

@end

