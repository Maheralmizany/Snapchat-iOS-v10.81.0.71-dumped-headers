//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface SCOperaActionMenuV2Option : NSObject
{
    _Bool _enabled;
    long long _type;
    NSString *_title;
}

@property(readonly, nonatomic) _Bool enabled; // @synthesize enabled=_enabled;
@property(readonly, copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(readonly, nonatomic) long long type; // @synthesize type=_type;
- (void).cxx_destruct;
- (id)initWithType:(long long)arg1 title:(id)arg2 enabled:(_Bool)arg3;
- (id)initWithType:(long long)arg1 title:(id)arg2;

@end

