//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class LCVImage, NSMutableArray;

@interface LCVCalibrationData : NSObject
{
    float _version;
    float _horizontalFovDegrees;
    float _verticalFovDegrees;
    LCVImage *_leftLut;
    LCVImage *_rightLut;
    NSMutableArray *_leftAlignmentComp;
    NSMutableArray *_rightAlignmentComp;
}

@property(retain, nonatomic) NSMutableArray *rightAlignmentComp; // @synthesize rightAlignmentComp=_rightAlignmentComp;
@property(retain, nonatomic) NSMutableArray *leftAlignmentComp; // @synthesize leftAlignmentComp=_leftAlignmentComp;
@property(retain, nonatomic) LCVImage *rightLut; // @synthesize rightLut=_rightLut;
@property(retain, nonatomic) LCVImage *leftLut; // @synthesize leftLut=_leftLut;
@property(nonatomic) float verticalFovDegrees; // @synthesize verticalFovDegrees=_verticalFovDegrees;
@property(nonatomic) float horizontalFovDegrees; // @synthesize horizontalFovDegrees=_horizontalFovDegrees;
@property(nonatomic) float version; // @synthesize version=_version;
- (void).cxx_destruct;
- (id)init;

@end

