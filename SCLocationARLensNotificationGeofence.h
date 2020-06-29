//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface SCLocationARLensNotificationGeofence : NSObject
{
    struct CLLocationCoordinate2D _centerCoordinate;
    double _radius;
    NSString *_locationName;
    NSString *_lensId;
}

@property(readonly, copy, nonatomic) NSString *lensId; // @synthesize lensId=_lensId;
@property(readonly, copy, nonatomic) NSString *locationName; // @synthesize locationName=_locationName;
- (void).cxx_destruct;
- (_Bool)containsLocation:(id)arg1;
- (id)description;
- (id)initWithCenterCoordinate:(struct CLLocationCoordinate2D)arg1 radius:(double)arg2 locationName:(id)arg3 lensId:(id)arg4;

@end

