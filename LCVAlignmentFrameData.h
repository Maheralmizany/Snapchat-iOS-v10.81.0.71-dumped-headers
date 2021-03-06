//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface LCVAlignmentFrameData : NSObject
{
    double _timestamp;
    NSMutableArray *_leftAlignmentComp;
    NSMutableArray *_rightAlignmentComp;
}

+ (id)alignmentFrameDataWithProto:(id)arg1 camera:(unsigned long long)arg2;
@property(retain, nonatomic) NSMutableArray *rightAlignmentComp; // @synthesize rightAlignmentComp=_rightAlignmentComp;
@property(retain, nonatomic) NSMutableArray *leftAlignmentComp; // @synthesize leftAlignmentComp=_leftAlignmentComp;
@property(nonatomic) double timestamp; // @synthesize timestamp=_timestamp;
- (void).cxx_destruct;
- (id)init;
- (void)_setupLegacyAlignmentCompArrayWithProto:(id)arg1 camera:(unsigned long long)arg2;
- (void)_setupAlignmentCompArrayWithProto:(id)arg1;
- (void)_setupAlignmentCompArrayWithProto:(id)arg1 camera:(unsigned long long)arg2;

@end

