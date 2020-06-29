//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSAttributedString, NSString, SCChatSDKActionContext, UIView;

@protocol SCChatMessageRenderer <NSObject>
@property(nonatomic) __weak SCChatSDKActionContext *actionContext;
- (void)didEndDisplayingContentView:(UIView *)arg1;
- (void)willDisplayContentView:(UIView *)arg1;
- (void)prepareContentViewForReuse:(UIView *)arg1;
- (void)setupContentView:(UIView *)arg1;
- (UIView *)createContentView;
- (NSString *)reuseIdentifier;
- (struct CGSize)sizeThatFits:(double)arg1;

@optional
- (_Bool)shouldShowSenderHeader;
- (NSAttributedString *)textForStatusMessageHeaderLabel;
- (_Bool)shouldShowStatusMessageHeaderLabel;
@end

