//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSString;

@interface SCMyUnifiedProfileSnapProPlayStoryActionDataModel : NSObject <NSCopying>
{
    _Bool _useCircleTransition;
    _Bool _appearWithExpandedViewersList;
    NSString *_businessId;
    NSString *_snapId;
}

@property(readonly, nonatomic) _Bool appearWithExpandedViewersList; // @synthesize appearWithExpandedViewersList=_appearWithExpandedViewersList;
@property(readonly, nonatomic) _Bool useCircleTransition; // @synthesize useCircleTransition=_useCircleTransition;
@property(readonly, copy, nonatomic) NSString *snapId; // @synthesize snapId=_snapId;
@property(readonly, copy, nonatomic) NSString *businessId; // @synthesize businessId=_businessId;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithBusinessId:(id)arg1 snapId:(id)arg2 useCircleTransition:(_Bool)arg3 appearWithExpandedViewersList:(_Bool)arg4;

@end

