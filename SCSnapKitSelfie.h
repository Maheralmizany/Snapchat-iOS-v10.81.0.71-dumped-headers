//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class SCObservable;

@interface SCSnapKitSelfie : NSObject
{
    SCObservable *_selfie;
}

@property(readonly, nonatomic) SCObservable *selfie; // @synthesize selfie=_selfie;
- (void).cxx_destruct;
- (id)initWithUserId:(id)arg1 selfieFetcher:(id)arg2 selfieProvider:(id)arg3 avatarProvider:(id)arg4;

@end

