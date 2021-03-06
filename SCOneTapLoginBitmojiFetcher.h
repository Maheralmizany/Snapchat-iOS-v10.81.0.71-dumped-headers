//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, SCLazy, SCUserSession;
@protocol SCPerforming;

@interface SCOneTapLoginBitmojiFetcher : NSObject
{
    SCUserSession *_userSession;
    SCLazy *_oneTapLoginRegistry;
    SCLazy *_avatarProvider;
    SCLazy *_selfieFetcher;
    SCLazy *_selfieProvider;
    SCLazy *_imageFetcher;
    id <SCPerforming> _performer;
    NSString *_selfieId;
    NSString *_avatarId;
}

- (void).cxx_destruct;
- (void)_writeImage:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)_fetchBitmojiWithImageParams:(id)arg1 contexts:(id)arg2 feature:(long long)arg3 transform:(CDUnknownBlockType)arg4 completionQueue:(id)arg5 completion:(CDUnknownBlockType)arg6;
- (void)fetchAndPersistBitmoji:(CDUnknownBlockType)arg1;
- (id)initWithUserSession:(id)arg1 oneTapLoginRegistry:(id)arg2 avatarProvider:(id)arg3 selfieFetcher:(id)arg4 selfieProvider:(id)arg5 imageFetcher:(id)arg6;

@end

