//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCComposerMarshallableObject.h"

@interface SCContextCTAExperiments : SCComposerMarshallableObject
{
    _Bool _performActionsOnMainThread;
    _Bool _avoidBoxShadow;
    _Bool _avoidSlowClipping;
    _Bool _checkForIsDestroyed;
    _Bool _avoidAnimatingAfterLoadingImage;
}

@property(nonatomic) _Bool avoidAnimatingAfterLoadingImage; // @synthesize avoidAnimatingAfterLoadingImage=_avoidAnimatingAfterLoadingImage;
@property(nonatomic) _Bool checkForIsDestroyed; // @synthesize checkForIsDestroyed=_checkForIsDestroyed;
@property(nonatomic) _Bool avoidSlowClipping; // @synthesize avoidSlowClipping=_avoidSlowClipping;
@property(nonatomic) _Bool avoidBoxShadow; // @synthesize avoidBoxShadow=_avoidBoxShadow;
@property(nonatomic) _Bool performActionsOnMainThread; // @synthesize performActionsOnMainThread=_performActionsOnMainThread;
- (long long)pushToComposerMarshaller:(struct SCComposerMarshaller *)arg1;
- (id)initWithPerformActionsOnMainThread:(_Bool)arg1 avoidBoxShadow:(_Bool)arg2 avoidSlowClipping:(_Bool)arg3 checkForIsDestroyed:(_Bool)arg4 avoidAnimatingAfterLoadingImage:(_Bool)arg5;

@end

