//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCComposerMarshallableObject.h"

@class NSString;

@interface SCImpalaSnapInsightsServiceConfig : SCComposerMarshallableObject
{
    NSString *_accountServiceBaseUrl;
    NSString *_insightsServiceBaseUrl;
    NSString *_storyServiceBaseUrl;
}

@property(copy, nonatomic) NSString *storyServiceBaseUrl; // @synthesize storyServiceBaseUrl=_storyServiceBaseUrl;
@property(copy, nonatomic) NSString *insightsServiceBaseUrl; // @synthesize insightsServiceBaseUrl=_insightsServiceBaseUrl;
@property(copy, nonatomic) NSString *accountServiceBaseUrl; // @synthesize accountServiceBaseUrl=_accountServiceBaseUrl;
- (void).cxx_destruct;
- (long long)pushToComposerMarshaller:(struct SCComposerMarshaller *)arg1;
- (id)initWithAccountServiceBaseUrl:(id)arg1 insightsServiceBaseUrl:(id)arg2 storyServiceBaseUrl:(id)arg3;

@end

