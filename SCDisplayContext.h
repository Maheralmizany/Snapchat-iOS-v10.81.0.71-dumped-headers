//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

@interface SCDisplayContext : NSObject
{
    _Bool _isUserBlocking;
    NSArray *_contexts;
}

@property _Bool isUserBlocking; // @synthesize isUserBlocking=_isUserBlocking;
@property(retain, nonatomic) NSArray *contexts; // @synthesize contexts=_contexts;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)removeContext:(id)arg1;
- (id)appendContexts:(id)arg1;
- (id)appendContext:(id)arg1;
- (id)initWithContexts:(id)arg1;
- (id)initwithContext:(id)arg1;
- (id)initWithRootPageType:(long long)arg1;

@end

