//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CVMatHolder, FaceZonesHolder, NSArray;

@interface FSTargetForFeedback : NSObject
{
    CVMatHolder *_image;
    NSArray *_landmarks;
    FaceZonesHolder *_faceZones;
}

@property(readonly, nonatomic) FaceZonesHolder *faceZones; // @synthesize faceZones=_faceZones;
@property(readonly, nonatomic) NSArray *landmarks; // @synthesize landmarks=_landmarks;
@property(readonly, nonatomic) CVMatHolder *image; // @synthesize image=_image;
- (void).cxx_destruct;
- (id)initWithTargetForScenario:(struct TargetPreparedForScenario)arg1;

@end
