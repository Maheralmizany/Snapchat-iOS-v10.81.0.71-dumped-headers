//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, SCLensLaunchData;

@interface SCLensEffectActivatorConfigurationBuilder : NSObject
{
    NSString *_filterOverlayImagePath;
    SCLensLaunchData *_launchConfiguration;
    NSString *_lensSessionId;
    _Bool _async;
}

+ (id)lensEffectActivatorConfigurationFromExistingLensEffectActivatorConfiguration:(id)arg1;
+ (id)lensEffectActivatorConfiguration;
- (void).cxx_destruct;
- (id)withAsync:(_Bool)arg1;
- (id)withLensSessionId:(id)arg1;
- (id)withLaunchConfiguration:(id)arg1;
- (id)withFilterOverlayImagePath:(id)arg1;
- (id)build;

@end

