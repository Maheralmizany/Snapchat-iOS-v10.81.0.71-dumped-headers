//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCOneTapLoginRegistry-Protocol.h"

@protocol SCOneTapLoginRepository;

@interface SCOneTapLoginDefaultRegistry : NSObject <SCOneTapLoginRegistry>
{
    id <SCOneTapLoginRepository> _oneTapLoginRepository;
}

- (void).cxx_destruct;
- (void)persistBitmojiAvatar:(id)arg1 selfieId:(id)arg2 avatarId:(id)arg3;
- (void)removeCachedBitmoji;
- (_Bool)isBitmojiCached:(id)arg1 avatarId:(id)arg2;
- (void)persistOneTapLoginToken:(id)arg1 expiry:(long long)arg2;
- (void)optInUserWithId:(id)arg1 username:(id)arg2;
- (_Bool)isUserOptedIn:(id)arg1;
- (id)initWithOneTapLoginRepository:(id)arg1;

@end
