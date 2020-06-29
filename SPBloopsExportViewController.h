//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "SPBloopsExportProgressViewDelegate-Protocol.h"

@class NSString, SPBloopsExportProgressView;
@protocol SPBloopsExportViewControllerDelegate;

@interface SPBloopsExportViewController : UIViewController <SPBloopsExportProgressViewDelegate>
{
    SPBloopsExportProgressView *_progressView;
    _Bool _showStatusBar;
    id <SPBloopsExportViewControllerDelegate> _delegate;
    long long _statusBarStyle;
}

@property(nonatomic) long long statusBarStyle; // @synthesize statusBarStyle=_statusBarStyle;
@property(nonatomic) _Bool showStatusBar; // @synthesize showStatusBar=_showStatusBar;
@property(nonatomic) __weak id <SPBloopsExportViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_initialSetup;
- (void)progressOverlayViewDidCancel:(id)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (long long)preferredStatusBarStyle;
- (_Bool)prefersStatusBarHidden;
- (void)setProgress:(double)arg1;
- (id)init;
- (id)initWithStatusBarStyle:(long long)arg1 showStatusBar:(_Bool)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

