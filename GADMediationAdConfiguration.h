//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GADMediationCredentials, GADRootViewControllerProvider, GADTargeting, NSData, NSNumber, NSString, UIViewController;
@protocol GADAdNetworkExtras;

@interface GADMediationAdConfiguration : NSObject
{
    struct NSDictionary *_adConfiguration;
    GADTargeting *_targeting;
    GADMediationCredentials *_credentials;
    id <GADAdNetworkExtras> _extras;
    GADRootViewControllerProvider *_viewControllerProvider;
}

@property(retain, nonatomic) GADRootViewControllerProvider *viewControllerProvider; // @synthesize viewControllerProvider=_viewControllerProvider;
@property(readonly, nonatomic) id <GADAdNetworkExtras> extras; // @synthesize extras=_extras;
@property(readonly, nonatomic) GADMediationCredentials *credentials; // @synthesize credentials=_credentials;
- (void).cxx_destruct;
@property(readonly, nonatomic) UIViewController *topViewController;
- (id)init;
- (id)userLocationDescription;
@property(readonly, nonatomic) double userLocationAccuracyInMeters;
@property(readonly, nonatomic) double userLongitude;
@property(readonly, nonatomic) double userLatitude;
@property(readonly, nonatomic) _Bool hasUserLocation;
@property(readonly, nonatomic) _Bool isTestRequest;
@property(readonly, nonatomic) NSNumber *childDirectedTreatment;
@property(readonly, nonatomic) NSData *watermark;
@property(readonly, nonatomic) NSString *bidResponse;
- (id)initWithAdConfiguration:(struct NSDictionary *)arg1 targeting:(id)arg2 credentials:(id)arg3 extras:(id)arg4;

@end

