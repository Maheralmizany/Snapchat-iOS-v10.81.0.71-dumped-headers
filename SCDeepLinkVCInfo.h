//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString, SCDeepLinkURL, UIViewController;
@protocol SCPageNameLogging;

@interface SCDeepLinkVCInfo : NSObject
{
    SCDeepLinkURL *_url;
    NSDictionary *_additionalInfo;
    UIViewController<SCPageNameLogging> *_sourceVC;
}

@property(nonatomic) __weak UIViewController<SCPageNameLogging> *sourceVC; // @synthesize sourceVC=_sourceVC;
@property(retain, nonatomic) NSDictionary *additionalInfo; // @synthesize additionalInfo=_additionalInfo;
@property(retain, nonatomic) SCDeepLinkURL *url; // @synthesize url=_url;
- (void).cxx_destruct;
- (_Bool)hasLensID;
- (_Bool)isFeature:(id)arg1;
@property(readonly, nonatomic) NSString *feature;

@end

