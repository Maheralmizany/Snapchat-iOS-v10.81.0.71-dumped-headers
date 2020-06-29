//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class SCPreviewConfiguration;
@protocol SCCameraPreviewEventDelegate, SCChatQuickCaptionDelegate, SCStartChatDelegate, SendSnapNavigationControllerDelegate;

@protocol SCPreviewViewController
@property(readonly, nonatomic) SCPreviewConfiguration *configuration;
@property(nonatomic) __weak id <SCStartChatDelegate> startChatDelegate;
@property(nonatomic) __weak id <SCChatQuickCaptionDelegate> quickCaptionDelegate;
@property(nonatomic) __weak id <SendSnapNavigationControllerDelegate> sendSnapNavigationControllerDelegate;
@property(nonatomic) __weak id <SCCameraPreviewEventDelegate> cameraPreviewDelegate;
- (struct UIEdgeInsets)pvc_mediaAreaInsets;
@end

