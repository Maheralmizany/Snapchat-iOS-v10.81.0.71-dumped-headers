//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString, SCGroupUnifiedActionMenuActionHandler;

@protocol SCGroupUnifiedActionMenuActionHandlerDelegate <NSObject>
- (void)dismissUnifiedActionMenuWithGroupUnifiedActionMenuActionHandler:(SCGroupUnifiedActionMenuActionHandler *)arg1 showAnimation:(_Bool)arg2;

@optional
- (void)navigateToVideoWithGroupUnifiedActionMenuActionHandler:(SCGroupUnifiedActionMenuActionHandler *)arg1 groupId:(NSString *)arg2;
- (void)navigateToAudioWithGroupUnifiedActionMenuActionHandler:(SCGroupUnifiedActionMenuActionHandler *)arg1 groupId:(NSString *)arg2;
- (void)navigateToChatWithGroupUnifiedActionMenuActionHandler:(SCGroupUnifiedActionMenuActionHandler *)arg1 groupId:(NSString *)arg2;
- (void)presentCameraWithGroupUnifiedActionMenuActionHandler:(SCGroupUnifiedActionMenuActionHandler *)arg1 groupId:(NSString *)arg2;
- (void)presentUnifiedProfileWithGroupUnifiedActionMenuActionHandler:(SCGroupUnifiedActionMenuActionHandler *)arg1 groupId:(NSString *)arg2 sourcePageType:(NSString *)arg3;
@end

