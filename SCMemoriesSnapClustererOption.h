//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSPredicate;

@interface SCMemoriesSnapClustererOption : NSObject
{
    _Bool _isClusterChronological;
    NSPredicate *_entryPredicate;
    NSPredicate *_snapPredicate;
}

+ (id)optionForEntries:(id)arg1;
+ (id)optionForLensScan;
+ (id)optionForHMDScan:(_Bool)arg1;
+ (id)optionForMEOTab;
+ (id)optionForSnapsTab;
@property(readonly, nonatomic) _Bool isClusterChronological; // @synthesize isClusterChronological=_isClusterChronological;
@property(readonly, nonatomic) NSPredicate *snapPredicate; // @synthesize snapPredicate=_snapPredicate;
@property(readonly, nonatomic) NSPredicate *entryPredicate; // @synthesize entryPredicate=_entryPredicate;
- (void).cxx_destruct;
- (_Bool)evaluateWithEntry:(id)arg1;
- (id)initWithEntryPredicate:(id)arg1 snapPredicate:(id)arg2 isClusterChronological:(_Bool)arg3;

@end
