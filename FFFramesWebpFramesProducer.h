//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "FFFrameProducer-Protocol.h"

@class NSString, YYImage;
@protocol FFFrame;

@interface FFFramesWebpFramesProducer : NSObject <FFFrameProducer>
{
    NSString *_path;
    YYImage *_image;
    id <FFFrame> _firstFrame;
    unsigned long long _index;
    unsigned long long _state;
}

@property(readonly) unsigned long long state; // @synthesize state=_state;
- (void).cxx_destruct;
@property(readonly) unsigned long long totalFramesCount;
@property(readonly) id <FFFrame> firstFrame;
- (id)copyNextFrame;
- (_Bool)hasNextFrame;
- (id)initWithImagePath:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

