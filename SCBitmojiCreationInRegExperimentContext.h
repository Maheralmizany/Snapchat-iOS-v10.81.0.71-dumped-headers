//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCExperimentContext.h"

@interface SCBitmojiCreationInRegExperimentContext : SCExperimentContext
{
    _Bool _enabled;
    _Bool _shouldShowInterstitial;
    _Bool _showBeforeFriends;
}

+ (id)experimentContextWithExperimentManager:(id)arg1;
@property(readonly, nonatomic) _Bool showBeforeFriends; // @synthesize showBeforeFriends=_showBeforeFriends;
@property(readonly, nonatomic) _Bool shouldShowInterstitial; // @synthesize shouldShowInterstitial=_shouldShowInterstitial;
@property(readonly, nonatomic) _Bool enabled; // @synthesize enabled=_enabled;
- (void)setupParameters;
- (id)experimentName;

@end

