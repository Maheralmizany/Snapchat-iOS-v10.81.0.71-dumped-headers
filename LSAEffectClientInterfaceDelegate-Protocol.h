//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSDictionary, NSString;

@protocol LSAEffectClientInterfaceDelegate <NSObject>
- (void)effectWithId:(NSString *)arg1 setScreenDimmingEnabled:(_Bool)arg2;
- (void)effectWithId:(NSString *)arg1 performInterfaceAction:(int)arg2 interfaceControl:(int)arg3 interfaceData:(NSDictionary *)arg4;
- (void)effectWithId:(NSString *)arg1 showPopUpHintWithId:(NSString *)arg2 interfaceControl:(int)arg3;
@end

