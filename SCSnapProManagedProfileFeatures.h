//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@interface SCSnapProManagedProfileFeatures : NSObject <NSCopying>
{
    _Bool _storyReplies;
    _Bool _storyReplyQuoting;
}

@property(readonly, nonatomic) _Bool storyReplyQuoting; // @synthesize storyReplyQuoting=_storyReplyQuoting;
@property(readonly, nonatomic) _Bool storyReplies; // @synthesize storyReplies=_storyReplies;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithStoryReplies:(_Bool)arg1 storyReplyQuoting:(_Bool)arg2;

@end
