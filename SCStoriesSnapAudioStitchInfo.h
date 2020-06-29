//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSArray, NSString;

@interface SCStoriesSnapAudioStitchInfo : NSObject <NSCopying>
{
    NSString *_audioStitchId;
    long long _snapsPerRow;
    long long _snapsPerColumn;
    NSArray *_snaps;
}

@property(readonly, copy, nonatomic) NSArray *snaps; // @synthesize snaps=_snaps;
@property(readonly, nonatomic) long long snapsPerColumn; // @synthesize snapsPerColumn=_snapsPerColumn;
@property(readonly, nonatomic) long long snapsPerRow; // @synthesize snapsPerRow=_snapsPerRow;
@property(readonly, copy, nonatomic) NSString *audioStitchId; // @synthesize audioStitchId=_audioStitchId;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithAudioStitchId:(id)arg1 snapsPerRow:(long long)arg2 snapsPerColumn:(long long)arg3 snaps:(id)arg4;

@end

