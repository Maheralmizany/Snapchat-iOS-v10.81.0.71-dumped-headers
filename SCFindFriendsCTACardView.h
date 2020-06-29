//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "SCFindFriendsCTA-Protocol.h"

@class NSString, SCFindFriendsCTAImageProvider, UIButton, UIColor, UIImageView, UILabel;
@protocol SCFindFriendsCTADelegate;

@interface SCFindFriendsCTACardView : UIView <SCFindFriendsCTA>
{
    UIView *_shadowView;
    UIView *_containerView;
    UIImageView *_backgroundImageView;
    UILabel *_headerTextLabel;
    UILabel *_secondaryTextLabel;
    UIButton *_button;
    long long _source;
    id <SCFindFriendsCTADelegate> _delegate;
    SCFindFriendsCTAImageProvider *_imageProvider;
    UIColor *_textLabelBackgroundColor;
}

@property(retain, nonatomic) UIColor *textLabelBackgroundColor; // @synthesize textLabelBackgroundColor=_textLabelBackgroundColor;
@property(nonatomic) __weak id <SCFindFriendsCTADelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_scaleDownButton:(id)arg1;
- (void)_scaleUpButton:(id)arg1;
- (void)_handleTouchCancelForButton:(id)arg1;
- (void)_handleTouchUpOutsideForButton:(id)arg1;
- (void)_handleTouchUpInsideForButton:(id)arg1;
- (void)_handleTouchDownForButton:(id)arg1;
- (void)updateView;
- (double)height;
- (void)_updateFrame;
- (void)_initSubviews;
- (void)layoutSubviews;
- (id)initWithSource:(long long)arg1 delegate:(id)arg2 imageProvider:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

