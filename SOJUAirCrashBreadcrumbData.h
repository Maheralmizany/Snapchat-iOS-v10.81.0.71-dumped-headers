//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCSojuMessage.h"

#import "SOJUAirCrashBreadcrumbData-Protocol.h"

@class NSNumber, NSString;

@interface SOJUAirCrashBreadcrumbData : SCSojuMessage <SOJUAirCrashBreadcrumbData>
{
}

+ (void)registerMessageFields:(id)arg1;
- (id)initWithTimeStamp:(id)arg1 content:(id)arg2;

// Remaining properties
@property(readonly, nonatomic) NSString *content; // @dynamic content;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(readonly, nonatomic) NSNumber *timeStamp; // @dynamic timeStamp;

@end

