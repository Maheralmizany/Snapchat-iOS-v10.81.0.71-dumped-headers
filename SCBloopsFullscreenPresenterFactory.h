//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class SCLazy, SCUserSession;

@interface SCBloopsFullscreenPresenterFactory : NSObject
{
    SCLazy *_reenactmentService;
    SCLazy *_reportPresenter;
    SCUserSession *_userSession;
}

- (void).cxx_destruct;
- (id)fullscreenPlayerPresenterWithItems:(id)arg1 initialIndex:(unsigned long long)arg2;
- (id)initWithReenactmentService:(id)arg1 reportPresenter:(id)arg2 userSession:(id)arg3;

@end

