//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface SCBitmojiNetworkPolicy : NSObject
{
    unsigned long long _multiSize;
    unsigned long long _maxInflight;
}

@property(readonly, nonatomic) unsigned long long maxInflight; // @synthesize maxInflight=_maxInflight;
- (id)description;
- (unsigned long long)multiSize;
- (id)initWithMultiSize:(unsigned long long)arg1 andMaxInflight:(unsigned long long)arg2;

@end

