//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCManagedRecordedVideo-Protocol.h"

@class NSString, NSURL, UIImage;

@interface SCManagedRecordedVideo : NSObject <SCManagedRecordedVideo>
{
    _Bool _isFrontFacingCamera;
    NSURL *_videoURL;
    NSURL *_rawVideoDataFileURL;
    double _videoDuration;
    UIImage *_placeholderImage;
    long long _codecType;
}

+ (unsigned long long *)fasterCodingKeys;
+ (unsigned long long)fasterCodingVersion;
@property(readonly, nonatomic) long long codecType; // @synthesize codecType=_codecType;
@property(readonly, nonatomic) _Bool isFrontFacingCamera; // @synthesize isFrontFacingCamera=_isFrontFacingCamera;
@property(readonly, copy, nonatomic) UIImage *placeholderImage; // @synthesize placeholderImage=_placeholderImage;
@property(readonly, nonatomic) double videoDuration; // @synthesize videoDuration=_videoDuration;
@property(readonly, copy, nonatomic) NSURL *rawVideoDataFileURL; // @synthesize rawVideoDataFileURL=_rawVideoDataFileURL;
@property(readonly, copy, nonatomic) NSURL *videoURL; // @synthesize videoURL=_videoURL;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (void)setFloat64:(double)arg1 forUInt64Key:(unsigned long long)arg2;
- (void)setSInt32:(int)arg1 forUInt64Key:(unsigned long long)arg2;
- (void)setBool:(_Bool)arg1 forUInt64Key:(unsigned long long)arg2;
- (void)setObject:(id)arg1 forUInt64Key:(unsigned long long)arg2;
- (void)decodeWithFasterDecoder:(id)arg1;
- (void)encodeWithFasterCoder:(id)arg1;
- (_Bool)preferFasterCoding;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithVideoURL:(id)arg1 rawVideoDataFileURL:(id)arg2 videoDuration:(double)arg3 placeholderImage:(id)arg4 isFrontFacingCamera:(_Bool)arg5 codecType:(long long)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

