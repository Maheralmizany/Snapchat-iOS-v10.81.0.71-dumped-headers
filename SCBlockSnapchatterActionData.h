//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSIndexPath, NSNumber, SCSnapchatter;

@interface SCBlockSnapchatterActionData : NSObject <NSCopying>
{
    SCSnapchatter *_snapchatter;
    NSIndexPath *_indexPath;
    NSNumber *_blockReasonId;
}

@property(readonly, copy, nonatomic) NSNumber *blockReasonId; // @synthesize blockReasonId=_blockReasonId;
@property(readonly, copy, nonatomic) NSIndexPath *indexPath; // @synthesize indexPath=_indexPath;
@property(readonly, copy, nonatomic) SCSnapchatter *snapchatter; // @synthesize snapchatter=_snapchatter;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithSnapchatter:(id)arg1 indexPath:(id)arg2 blockReasonId:(id)arg3;

@end
