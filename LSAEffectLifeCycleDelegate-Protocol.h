//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString;

@protocol LSAEffectLifeCycleDelegate <NSObject>
- (void)didLoadEffectResources:(struct ComplexEffect *)arg1 effectId:(NSString *)arg2;
- (void)didTurnOffEffect:(struct ComplexEffect *)arg1 effectId:(NSString *)arg2;
- (void)didTurnOnEffect:(struct ComplexEffect *)arg1 effectId:(NSString *)arg2;
@end

