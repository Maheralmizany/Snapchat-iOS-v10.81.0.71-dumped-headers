//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"
#import "SCComposerMarshallable-Protocol.h"

@class NSDictionary, NSNumber, NSString, SCComposerRef, SCContextModalPresentationInfo, SCContextNativeAction;
@protocol SCCGameLaunching, SCCStoryPlayerPlaying, SCComposerNetworkingClientProtocol, SCContextComposerActionHandler, SCSuggestedFriendsService;

@protocol SCContextCardsViewContext <NSObject, SCComposerMarshallable>
@property(retain, nonatomic) id <SCCGameLaunching> gameLauncher;
- (void)wantsToExpandFromCollapsedState;
- (void)registerExpansionStateListenerWithCallback:(void (^)(_Bool))arg1;
- (_Bool)shouldCardsBeInitiallyCollapsed;
- (void)playUserStoryWithUsername:(NSString *)arg1 userId:(NSString *)arg2 baseView:(SCComposerRef *)arg3;
- (void)presentRemoteDocumentModallyWithInfo:(SCContextModalPresentationInfo *)arg1;
- (void)playStoryWithToken:(NSString *)arg1 baseView:(NSDictionary *)arg2 onLoadFinished:(void (^)(void))arg3;
- (void)performActionWithAction:(SCContextNativeAction *)arg1;

@optional
@property(retain, nonatomic) id <SCContextComposerActionHandler> actionHandler;
@property(retain, nonatomic) NSNumber *allowRelatedStories;
@property(retain, nonatomic) id <SCCStoryPlayerPlaying> storyPlayer;
@property(retain, nonatomic) id <SCComposerNetworkingClientProtocol> networkingClient;
- (id <SCSuggestedFriendsService>)suggestedFriendsService;
@end

