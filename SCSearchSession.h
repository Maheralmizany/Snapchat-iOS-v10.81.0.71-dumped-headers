//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, SCSearchFriendProvider, SCSearchStoriesPresenter, SCUserSession;
@protocol SCLensUnlockerProtocol;

@interface SCSearchSession : NSObject
{
    NSString *_sessionId;
    SCUserSession *_userSession;
    long long _launchSource;
    long long _entryPoint;
    SCSearchFriendProvider *_friendProvider;
    SCSearchStoriesPresenter *_storiesPresenter;
    id <SCLensUnlockerProtocol> _lensUnlocker;
}

@property(retain, nonatomic) id <SCLensUnlockerProtocol> lensUnlocker; // @synthesize lensUnlocker=_lensUnlocker;
@property(readonly, nonatomic) SCSearchStoriesPresenter *storiesPresenter; // @synthesize storiesPresenter=_storiesPresenter;
@property(readonly, nonatomic) SCSearchFriendProvider *friendProvider; // @synthesize friendProvider=_friendProvider;
@property(readonly, nonatomic) long long entryPoint; // @synthesize entryPoint=_entryPoint;
@property(readonly, nonatomic) long long launchSource; // @synthesize launchSource=_launchSource;
@property(readonly, nonatomic) SCUserSession *userSession; // @synthesize userSession=_userSession;
@property(readonly, copy, nonatomic) NSString *sessionId; // @synthesize sessionId=_sessionId;
- (void).cxx_destruct;
- (id)presentingStoryId;
- (id)debugInfo;
- (id)initWithUserSession:(id)arg1 launchSource:(long long)arg2 pageType:(unsigned long long)arg3;
- (id)initWithUserSession:(id)arg1 launchSource:(long long)arg2;

@end

