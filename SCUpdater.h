//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface SCUpdater : NSObject
{
}

+ (void)setIsUserUpdatingApp:(_Bool)arg1 synchronous:(_Bool)arg2;
+ (_Bool)isUserUpdatingApp;
+ (_Bool)_didUserJustUpdateApp:(id *)arg1;
+ (_Bool)isUserUpdatingOrHasUpdatedAppRecently:(id *)arg1;
+ (void)checkUpdateAndPromptIfNecessary;

@end

