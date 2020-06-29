//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCBloopsFullscreenPlayerViewController.h"

#import "SCBloopsTwoPersonConfigurationControlViewDelegate-Protocol.h"

@class NSString, SCBloopsTwoPersonConfigurationControlView, SCExperimentManager;
@protocol SCBloopsTwoPersonConfigurationViewControllerControllerDelegate;

@interface SCBloopsTwoPersonConfigurationViewController : SCBloopsFullscreenPlayerViewController <SCBloopsTwoPersonConfigurationControlViewDelegate>
{
    SCBloopsTwoPersonConfigurationControlView *_controlView;
    SCExperimentManager *_experimentManager;
    _Bool _controlEnable;
    id <SCBloopsTwoPersonConfigurationViewControllerControllerDelegate> _controlViewDelegate;
}

@property(nonatomic) _Bool controlEnable; // @synthesize controlEnable=_controlEnable;
@property(nonatomic) __weak id <SCBloopsTwoPersonConfigurationViewControllerControllerDelegate> controlViewDelegate; // @synthesize controlViewDelegate=_controlViewDelegate;
- (void).cxx_destruct;
- (unsigned long long)enableTwoPersonViewType;
- (void)initialSetup;
- (void)twoPersonConfigurationViewDidTapSkip:(id)arg1;
- (void)twoPersonConfigurationViewDidTapEnable:(id)arg1;
- (void)viewDidLoad;
- (id)initWithExperimentManager:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

