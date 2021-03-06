//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class SCLazy;

@interface SCBitmojiAvatarBuilderServices : NSObject
{
    SCLazy *_avatarDataProvider;
    SCLazy *_imageAssetProvider;
    SCLazy *_imageProcessor;
}

@property(readonly, nonatomic) SCLazy *imageProcessor; // @synthesize imageProcessor=_imageProcessor;
@property(readonly, nonatomic) SCLazy *imageAssetProvider; // @synthesize imageAssetProvider=_imageAssetProvider;
@property(readonly, nonatomic) SCLazy *avatarDataProvider; // @synthesize avatarDataProvider=_avatarDataProvider;
- (void).cxx_destruct;
- (id)initWithAvatarDataProvider:(id)arg1 imageAssetProvider:(id)arg2 imageProcessor:(id)arg3;

@end

