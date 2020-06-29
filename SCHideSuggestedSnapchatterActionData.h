//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSIndexPath, SCSnapchatter;

@interface SCHideSuggestedSnapchatterActionData : NSObject <NSCopying>
{
    unsigned int _suggestionPage;
    SCSnapchatter *_snapchatter;
    NSIndexPath *_indexPath;
    long long _placement;
}

@property(readonly, nonatomic) unsigned int suggestionPage; // @synthesize suggestionPage=_suggestionPage;
@property(readonly, nonatomic) long long placement; // @synthesize placement=_placement;
@property(readonly, copy, nonatomic) NSIndexPath *indexPath; // @synthesize indexPath=_indexPath;
@property(readonly, copy, nonatomic) SCSnapchatter *snapchatter; // @synthesize snapchatter=_snapchatter;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithSnapchatter:(id)arg1 indexPath:(id)arg2 placement:(long long)arg3 suggestionPage:(unsigned int)arg4;

@end
