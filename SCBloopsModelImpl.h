//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCBloopsModel-Protocol.h"

@class NSArray, NSString, SPScenario, UIImage;

@interface SCBloopsModelImpl : NSObject <SCBloopsModel>
{
    unsigned long long _bloopType;
    SPScenario *_scenario;
    UIImage *_image;
}

@property(readonly, nonatomic) UIImage *image; // @synthesize image=_image;
@property(readonly, nonatomic) SPScenario *scenario; // @synthesize scenario=_scenario;
@property(readonly, nonatomic) unsigned long long bloopType; // @synthesize bloopType=_bloopType;
- (void).cxx_destruct;
- (_Bool)_isEqualToBloopsModel:(id)arg1;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
@property(readonly, nonatomic) NSArray *bloopFeatures;
@property(readonly, nonatomic) unsigned long long personsCount;
@property(readonly, nonatomic) _Bool isCustomizedByUser;
@property(readonly, nonatomic) NSString *identifier;
- (id)initWithScenario:(id)arg1 bloopType:(unsigned long long)arg2 splendid:(id)arg3;
- (id)initWithScenario:(id)arg1 bloopType:(unsigned long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

