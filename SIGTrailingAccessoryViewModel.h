//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class SIGButtonViewModel, SIGEmojiViewModel;

@interface SIGTrailingAccessoryViewModel : NSObject <NSCopying>
{
    unsigned long long _subtype;
    SIGEmojiViewModel *_emoji_emojiViewModel;
    SIGButtonViewModel *_button_buttonViewModel;
}

+ (id)emojiWithEmojiViewModel:(id)arg1;
+ (id)buttonWithButtonViewModel:(id)arg1;
- (void).cxx_destruct;
- (void)matchEmoji:(CDUnknownBlockType)arg1 button:(CDUnknownBlockType)arg2;
- (_Bool)isEqual:(id)arg1;
- (id)internalInit;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

