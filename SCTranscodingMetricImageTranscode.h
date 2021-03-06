//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCTranscodingMetricBase.h"

@class NSString;

@interface SCTranscodingMetricImageTranscode : SCTranscodingMetricBase
{
    NSString *_inputMediaFormat;
    NSString *_outputMediaFormat;
    long long _outputFileSize;
    long long _outputOverlayFileSize;
    struct CGSize _inputResolution;
    struct CGSize _outputResolution;
}

@property(nonatomic) long long outputOverlayFileSize; // @synthesize outputOverlayFileSize=_outputOverlayFileSize;
@property(nonatomic) long long outputFileSize; // @synthesize outputFileSize=_outputFileSize;
@property(nonatomic) struct CGSize outputResolution; // @synthesize outputResolution=_outputResolution;
@property(retain, nonatomic) NSString *outputMediaFormat; // @synthesize outputMediaFormat=_outputMediaFormat;
@property(nonatomic) struct CGSize inputResolution; // @synthesize inputResolution=_inputResolution;
@property(retain, nonatomic) NSString *inputMediaFormat; // @synthesize inputMediaFormat=_inputMediaFormat;
- (void).cxx_destruct;
- (id)metricType;
- (id)outputMediaMetadata;
- (id)inputMediaMetadata;

@end

