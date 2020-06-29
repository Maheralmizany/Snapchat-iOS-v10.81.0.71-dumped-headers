//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCLensThumbnailEventEntity-Protocol.h"

@class NSString;

@interface SCLensThumbnailEventEntity : NSObject <SCLensThumbnailEventEntity>
{
    NSString *_lensId;
    long long _lensIndex;
    double _onScreenTimeNotReady;
    double _onScreenTimeTotal;
}

+ (unsigned long long *)fasterCodingKeys;
+ (unsigned long long)fasterCodingVersion;
@property(readonly, nonatomic) double onScreenTimeTotal; // @synthesize onScreenTimeTotal=_onScreenTimeTotal;
@property(readonly, nonatomic) double onScreenTimeNotReady; // @synthesize onScreenTimeNotReady=_onScreenTimeNotReady;
@property(readonly, nonatomic) long long lensIndex; // @synthesize lensIndex=_lensIndex;
@property(readonly, copy, nonatomic) NSString *lensId; // @synthesize lensId=_lensId;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (void)setFloat64:(double)arg1 forUInt64Key:(unsigned long long)arg2;
- (void)setSInt64:(long long)arg1 forUInt64Key:(unsigned long long)arg2;
- (void)setObject:(id)arg1 forUInt64Key:(unsigned long long)arg2;
- (void)decodeWithFasterDecoder:(id)arg1;
- (void)encodeWithFasterCoder:(id)arg1;
- (_Bool)preferFasterCoding;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithLensId:(id)arg1 lensIndex:(long long)arg2 onScreenTimeNotReady:(double)arg3 onScreenTimeTotal:(double)arg4;
- (id)eventDescription;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

