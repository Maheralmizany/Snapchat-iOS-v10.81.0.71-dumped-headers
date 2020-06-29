//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTechAnalyticsData-Protocol.h"

@class FaceZonesHolder, NSData, NSString;

@interface SPTechAnalyticsFacezonesData : NSObject <SPTechAnalyticsData>
{
    NSString *_filename;
    NSString *_contentType;
    NSString *_analyticsType;
    unsigned long long _type;
    FaceZonesHolder *_faceZonesHolder;
}

@property(retain, nonatomic) FaceZonesHolder *faceZonesHolder; // @synthesize faceZonesHolder=_faceZonesHolder;
@property(readonly, nonatomic) unsigned long long type; // @synthesize type=_type;
@property(readonly, copy, nonatomic) NSString *analyticsType; // @synthesize analyticsType=_analyticsType;
@property(readonly, copy, nonatomic) NSString *contentType; // @synthesize contentType=_contentType;
@property(readonly, copy, nonatomic) NSString *filename; // @synthesize filename=_filename;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSData *data;
- (id)initWithFaceZoneHolder:(id)arg1 type:(unsigned long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
