//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, SPAttributionRepresentationModel;

@interface SPVideosCacheResult : NSObject
{
    NSString *_videoPath;
    SPAttributionRepresentationModel *_attribution;
}

@property(readonly, nonatomic) SPAttributionRepresentationModel *attribution; // @synthesize attribution=_attribution;
@property(readonly, nonatomic) NSString *videoPath; // @synthesize videoPath=_videoPath;
- (void).cxx_destruct;
- (id)initWithVideoPath:(id)arg1 attribution:(id)arg2;

@end

