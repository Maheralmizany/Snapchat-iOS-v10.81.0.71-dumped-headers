//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface SCBitmojiStickerParams : NSObject
{
    NSString *_avatarId;
    NSString *_friendAvatarId;
}

@property(readonly, nonatomic) NSString *friendAvatarId; // @synthesize friendAvatarId=_friendAvatarId;
@property(readonly, nonatomic) NSString *avatarId; // @synthesize avatarId=_avatarId;
- (void).cxx_destruct;
- (id)initWithAvatarId:(id)arg1 friendAvatarId:(id)arg2;

@end

