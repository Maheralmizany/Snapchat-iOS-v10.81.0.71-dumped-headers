//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class SCLazy;

@interface SCSnapcodeServices : NSObject
{
    SCLazy *_imageProvider;
    SCLazy *_userInfoProvider;
    SCLazy *_viewProvider;
}

@property(readonly, nonatomic) SCLazy *viewProvider; // @synthesize viewProvider=_viewProvider;
@property(readonly, nonatomic) SCLazy *userInfoProvider; // @synthesize userInfoProvider=_userInfoProvider;
@property(readonly, nonatomic) SCLazy *imageProvider; // @synthesize imageProvider=_imageProvider;
- (void).cxx_destruct;
- (id)initWithImageProvider:(id)arg1 userInfoProvider:(id)arg2 viewProvider:(id)arg3;

@end

