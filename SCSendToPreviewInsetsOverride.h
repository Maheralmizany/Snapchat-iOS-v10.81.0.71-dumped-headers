//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@interface SCSendToPreviewInsetsOverride : NSObject <NSCopying>
{
    struct UIEdgeInsets _insets;
}

@property(readonly, nonatomic) struct UIEdgeInsets insets; // @synthesize insets=_insets;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithInsets:(struct UIEdgeInsets)arg1;

@end

