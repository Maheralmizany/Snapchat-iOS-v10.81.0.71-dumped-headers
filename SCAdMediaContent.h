//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class SCAdBottomMediaContent, SCAdTopMediaContent;

@interface SCAdMediaContent : NSObject
{
    SCAdTopMediaContent *_topMediaContent;
    SCAdBottomMediaContent *_bottomMediaContent;
}

@property(readonly, copy, nonatomic) SCAdBottomMediaContent *bottomMediaContent; // @synthesize bottomMediaContent=_bottomMediaContent;
@property(readonly, copy, nonatomic) SCAdTopMediaContent *topMediaContent; // @synthesize topMediaContent=_topMediaContent;
- (void).cxx_destruct;
- (id)initWithTopMediaContent:(id)arg1 bottomMediaContent:(id)arg2;

@end

