//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSLayoutConstraint, NSString, SIGLabel, UIProgressView;
@protocol SCWebBrowserV11Revision2HeaderDelegate;

@interface SCWebBrowserV11Revision2Header : UIView
{
    NSString *_title;
    NSLayoutConstraint *_heightConstraint;
    SIGLabel *_titleLabel;
    SIGLabel *_subtitleLabel;
    UIProgressView *_progressView;
    id <SCWebBrowserV11Revision2HeaderDelegate> _delegate;
}

@property(nonatomic) __weak id <SCWebBrowserV11Revision2HeaderDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) UIProgressView *progressView; // @synthesize progressView=_progressView;
@property(readonly, nonatomic) SIGLabel *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
@property(readonly, nonatomic) SIGLabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(readonly, nonatomic) NSLayoutConstraint *heightConstraint; // @synthesize heightConstraint=_heightConstraint;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (void)hideProgressBar;
- (void)showProgressBar;
- (void)_dismissButtonPressed;
- (void)_moreButtonPressed;
- (void)safeAreaInsetsDidChange;
- (double)height;
- (void)setProgress:(double)arg1;
- (void)setSubtitle:(id)arg1 isSecure:(_Bool)arg2;
- (void)constrainSizeToContent:(id)arg1;
- (id)initWithDelegate:(id)arg1;

@end

