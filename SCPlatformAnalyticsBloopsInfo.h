//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"

@class NSArray, SCPlatformAnalyticsBloopsGeneratedResultInfo;

@interface SCPlatformAnalyticsBloopsInfo : NSObject <NSCopying, NSCoding>
{
    _Bool _bloopsWasSentFromFullScreen;
    SCPlatformAnalyticsBloopsGeneratedResultInfo *_bloopsGeneratedResult;
    unsigned long long _viewTimeInMilliseconds;
    NSArray *_sentBloopFeatures;
    NSArray *_notSentBloopFeatures;
}

@property(readonly, copy, nonatomic) NSArray *notSentBloopFeatures; // @synthesize notSentBloopFeatures=_notSentBloopFeatures;
@property(readonly, copy, nonatomic) NSArray *sentBloopFeatures; // @synthesize sentBloopFeatures=_sentBloopFeatures;
@property(readonly, nonatomic) unsigned long long viewTimeInMilliseconds; // @synthesize viewTimeInMilliseconds=_viewTimeInMilliseconds;
@property(readonly, nonatomic) _Bool bloopsWasSentFromFullScreen; // @synthesize bloopsWasSentFromFullScreen=_bloopsWasSentFromFullScreen;
@property(readonly, copy, nonatomic) SCPlatformAnalyticsBloopsGeneratedResultInfo *bloopsGeneratedResult; // @synthesize bloopsGeneratedResult=_bloopsGeneratedResult;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithBloopsGeneratedResult:(id)arg1 bloopsWasSentFromFullScreen:(_Bool)arg2 viewTimeInMilliseconds:(unsigned long long)arg3 sentBloopFeatures:(id)arg4 notSentBloopFeatures:(id)arg5;

@end

