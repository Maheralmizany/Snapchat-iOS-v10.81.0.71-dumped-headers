//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface GADAnimationConfig : NSObject
{
    struct CGRect _initialFrame;
    struct CGRect _finalFrame;
}

+ (id)animationConfigsFromAnimations:(id)arg1;
@property(readonly, nonatomic) struct CGRect finalFrame; // @synthesize finalFrame=_finalFrame;
@property(readonly, nonatomic) struct CGRect initialFrame; // @synthesize initialFrame=_initialFrame;
- (id)initWithInitialFrameDictionary:(id)arg1 finalFrameDictionary:(id)arg2;
- (id)initWithDictionary:(id)arg1;
- (id)init;

@end

