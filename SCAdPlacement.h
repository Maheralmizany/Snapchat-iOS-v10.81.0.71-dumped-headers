//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, SCSnapAdsAdErrorResponse;

@interface SCAdPlacement : NSObject
{
    SCSnapAdsAdErrorResponse *_error;
    NSString *_adRequestClientId;
}

@property(copy, nonatomic) NSString *adRequestClientId; // @synthesize adRequestClientId=_adRequestClientId;
@property(retain, nonatomic) SCSnapAdsAdErrorResponse *error; // @synthesize error=_error;
- (void).cxx_destruct;

@end
