//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class SCLazy;

@interface SCMediaTranscodingServices : NSObject
{
    SCLazy *_videoTranscoderLazy;
}

@property(readonly, nonatomic) SCLazy *videoTranscoderLazy; // @synthesize videoTranscoderLazy=_videoTranscoderLazy;
- (void).cxx_destruct;
- (id)initWithVideoTranscoderLazy:(id)arg1;

@end

