//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class SCLazy;

@interface SCLensCacheServices : NSObject
{
    SCLazy *_lensCache;
}

@property(readonly, nonatomic) SCLazy *lensCache; // @synthesize lensCache=_lensCache;
- (void).cxx_destruct;
- (id)initWithPreferencesStorage:(id)arg1 downloadTracker:(id)arg2 experimentManager:(id)arg3 fileManager:(id)arg4;

@end

