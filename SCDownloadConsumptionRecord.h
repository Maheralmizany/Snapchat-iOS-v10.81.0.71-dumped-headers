//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"

@class NSDate, NSString, SCRequestTrackingInfo;

@interface SCDownloadConsumptionRecord : NSObject <NSCoding>
{
    SCRequestTrackingInfo *_trackingInfo;
    NSString *_requestId;
    NSDate *_createdAt;
}

@property(retain, nonatomic) NSDate *createdAt; // @synthesize createdAt=_createdAt;
@property(readonly, copy, nonatomic) NSString *requestId; // @synthesize requestId=_requestId;
@property(readonly, nonatomic) SCRequestTrackingInfo *trackingInfo; // @synthesize trackingInfo=_trackingInfo;
- (void).cxx_destruct;
- (_Bool)isExpired;
- (id)trackingId;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithTrackingInfo:(id)arg1 requestId:(id)arg2;

@end

