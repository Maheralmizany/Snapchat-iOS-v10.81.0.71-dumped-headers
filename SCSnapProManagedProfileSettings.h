//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@interface SCSnapProManagedProfileSettings : NSObject <NSCopying>
{
    _Bool _showStoryReplies;
}

@property(readonly, nonatomic) _Bool showStoryReplies; // @synthesize showStoryReplies=_showStoryReplies;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithShowStoryReplies:(_Bool)arg1;

@end

