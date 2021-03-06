//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString, SCStoriesPostingConfiguration;

@interface SCLegacySendToSelection : NSObject
{
    NSArray *_recipients;
    NSArray *_groups;
    SCStoriesPostingConfiguration *_storiesConfig;
    NSArray *_businessIds;
    NSArray *_appStories;
    NSString *_additionalText;
}

@property(readonly, copy, nonatomic) NSString *additionalText; // @synthesize additionalText=_additionalText;
@property(readonly, copy, nonatomic) NSArray *appStories; // @synthesize appStories=_appStories;
@property(readonly, copy, nonatomic) NSArray *businessIds; // @synthesize businessIds=_businessIds;
@property(readonly, copy, nonatomic) SCStoriesPostingConfiguration *storiesConfig; // @synthesize storiesConfig=_storiesConfig;
@property(readonly, copy, nonatomic) NSArray *groups; // @synthesize groups=_groups;
@property(readonly, copy, nonatomic) NSArray *recipients; // @synthesize recipients=_recipients;
- (void).cxx_destruct;
- (id)initWithRecipients:(id)arg1 groups:(id)arg2 storiesConfig:(id)arg3 businessIds:(id)arg4 appStories:(id)arg5 additionalText:(id)arg6;

@end

