//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface SigX : NSObject
{
    void *_mySigX;
}

+ (basic_string_90719d97)getVersion;
@property(nonatomic) void *mySigX; // @synthesize mySigX=_mySigX;
- (void)dealloc;
- (_Bool)getSignature:(struct vector<char, std::__1::allocator<char>> *)arg1 error:(id *)arg2;
- (_Bool)resetWithError:(id *)arg1;
- (_Bool)flowFloatSamples:(float *)arg1 sampleCount:(int)arg2 channels:(int)arg3 error:(id *)arg4;
- (_Bool)flowIntSamples:(short *)arg1 sampleCount:(int)arg2 channels:(int)arg3 error:(id *)arg4;
- (_Bool)flowFloatSamples:(const float *)arg1 sampleCount:(int)arg2 error:(id *)arg3;
- (_Bool)flowIntSamples:(const short *)arg1 sampleCount:(int)arg2 error:(id *)arg3;
- (id)initWithSignatureType:(int)arg1 sampleRate:(unsigned int)arg2 error:(id *)arg3;
- (id)initWithSignatureType:(int)arg1 sampleRate:(unsigned int)arg2 signatureOptions:(int)arg3 error:(id *)arg4;
- (void)FillUnknownError:(id *)arg1;
- (void)ConvertException:(const struct exception *)arg1 toError:(id *)arg2;
- (void)ConvertSystemError:(const struct system_error *)arg1 toError:(id *)arg2;

@end

