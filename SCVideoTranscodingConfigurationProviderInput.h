//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCVideoTranscodingConfigurationProviderInput-Protocol.h"

@class NSString;

@interface SCVideoTranscodingConfigurationProviderInput : NSObject <SCVideoTranscodingConfigurationProviderInput>
{
    _Bool _hasOverlayToBlend;
    _Bool _shouldMuteAudio;
    double _videoSourceBitrate;
    double _videoTargetBitrate;
    double _videoSourceDuration;
    double _videoTargetAspectRatio;
    double _videoPlaybackRate;
    unsigned long long _maxFrameRate;
    long long _overlaySizeInBits;
    struct CGSize _videoSourceSize;
    struct CGSize _videoTargetSize;
}

+ (unsigned long long *)fasterCodingKeys;
+ (unsigned long long)fasterCodingVersion;
@property(readonly, nonatomic) long long overlaySizeInBits; // @synthesize overlaySizeInBits=_overlaySizeInBits;
@property(readonly, nonatomic) _Bool shouldMuteAudio; // @synthesize shouldMuteAudio=_shouldMuteAudio;
@property(readonly, nonatomic) _Bool hasOverlayToBlend; // @synthesize hasOverlayToBlend=_hasOverlayToBlend;
@property(readonly, nonatomic) unsigned long long maxFrameRate; // @synthesize maxFrameRate=_maxFrameRate;
@property(readonly, nonatomic) double videoPlaybackRate; // @synthesize videoPlaybackRate=_videoPlaybackRate;
@property(readonly, nonatomic) double videoTargetAspectRatio; // @synthesize videoTargetAspectRatio=_videoTargetAspectRatio;
@property(readonly, nonatomic) double videoSourceDuration; // @synthesize videoSourceDuration=_videoSourceDuration;
@property(readonly, nonatomic) double videoTargetBitrate; // @synthesize videoTargetBitrate=_videoTargetBitrate;
@property(readonly, nonatomic) double videoSourceBitrate; // @synthesize videoSourceBitrate=_videoSourceBitrate;
@property(readonly, nonatomic) struct CGSize videoTargetSize; // @synthesize videoTargetSize=_videoTargetSize;
@property(readonly, nonatomic) struct CGSize videoSourceSize; // @synthesize videoSourceSize=_videoSourceSize;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (void)setSize:(struct CGSize)arg1 forUInt64Key:(unsigned long long)arg2;
- (void)setFloat64:(double)arg1 forUInt64Key:(unsigned long long)arg2;
- (void)setUInt64:(unsigned long long)arg1 forUInt64Key:(unsigned long long)arg2;
- (void)setSInt64:(long long)arg1 forUInt64Key:(unsigned long long)arg2;
- (void)setBool:(_Bool)arg1 forUInt64Key:(unsigned long long)arg2;
- (void)decodeWithFasterDecoder:(id)arg1;
- (void)encodeWithFasterCoder:(id)arg1;
- (_Bool)preferFasterCoding;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithVideoSourceSize:(struct CGSize)arg1 videoTargetSize:(struct CGSize)arg2 videoSourceBitrate:(double)arg3 videoTargetBitrate:(double)arg4 videoSourceDuration:(double)arg5 videoTargetAspectRatio:(double)arg6 videoPlaybackRate:(double)arg7 maxFrameRate:(unsigned long long)arg8 hasOverlayToBlend:(_Bool)arg9 shouldMuteAudio:(_Bool)arg10 overlaySizeInBits:(long long)arg11;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

