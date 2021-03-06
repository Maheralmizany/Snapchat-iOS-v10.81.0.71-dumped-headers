//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSString, SCBitmojiAvatarViewModel, SCProfileHeaderStoryViewModel;

@interface SCProfileHeaderViewModel : NSObject <NSCopying>
{
    _Bool _forceShowBitmoji;
    NSString *_username;
    SCBitmojiAvatarViewModel *_bitmojiAvatarViewModel;
    SCProfileHeaderStoryViewModel *_story;
}

@property(readonly, copy, nonatomic) SCProfileHeaderStoryViewModel *story; // @synthesize story=_story;
@property(readonly, copy, nonatomic) SCBitmojiAvatarViewModel *bitmojiAvatarViewModel; // @synthesize bitmojiAvatarViewModel=_bitmojiAvatarViewModel;
@property(readonly, nonatomic) _Bool forceShowBitmoji; // @synthesize forceShowBitmoji=_forceShowBitmoji;
@property(readonly, copy, nonatomic) NSString *username; // @synthesize username=_username;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithUsername:(id)arg1 forceShowBitmoji:(_Bool)arg2 bitmojiAvatarViewModel:(id)arg3 story:(id)arg4;

@end

