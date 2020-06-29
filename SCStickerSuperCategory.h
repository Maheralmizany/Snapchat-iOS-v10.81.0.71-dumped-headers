//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, SCFuture;

@interface SCStickerSuperCategory : NSObject
{
    NSArray *_stickerCategories;
    long long _type;
    SCFuture *_normalIconImage;
    SCFuture *_selectedIconImage;
}

@property(readonly, nonatomic) SCFuture *selectedIconImage; // @synthesize selectedIconImage=_selectedIconImage;
@property(readonly, nonatomic) SCFuture *normalIconImage; // @synthesize normalIconImage=_normalIconImage;
@property(readonly, nonatomic) long long type; // @synthesize type=_type;
@property(readonly, copy, nonatomic) NSArray *stickerCategories; // @synthesize stickerCategories=_stickerCategories;
- (void).cxx_destruct;
- (id)initWithStickerCategories:(id)arg1 type:(long long)arg2 normalIconImage:(id)arg3 selectedIconImage:(id)arg4;

@end

