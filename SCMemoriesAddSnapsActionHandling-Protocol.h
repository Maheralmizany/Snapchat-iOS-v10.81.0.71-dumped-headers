//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class SCMemoriesAddSnapsActionModel, SCUserSession, UIViewController;

@protocol SCMemoriesAddSnapsActionHandling <NSObject>
@property(nonatomic) __weak UIViewController *containerViewController;
- (void)handleAction:(unsigned long long)arg1 actionModel:(SCMemoriesAddSnapsActionModel *)arg2 completion:(void (^)(void))arg3;
- (id)initWithUserSession:(SCUserSession *)arg1;
@end

