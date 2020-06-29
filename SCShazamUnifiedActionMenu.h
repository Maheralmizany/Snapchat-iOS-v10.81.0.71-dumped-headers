//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCActionHandling-Protocol.h"
#import "SCUnifiedActionMenuDataProvider-Protocol.h"

@class NSString, SCSongInfo, UIViewController;
@protocol SCShazamUnifiedActionMenuDelegate, SCUnifiedActionMenuDataProviderDelegate;

@interface SCShazamUnifiedActionMenu : NSObject <SCUnifiedActionMenuDataProvider, SCActionHandling>
{
    SCSongInfo *_songInfo;
    UIViewController *_parentViewController;
    id <SCUnifiedActionMenuDataProviderDelegate> _delegate;
    id <SCShazamUnifiedActionMenuDelegate> _shazamDelegate;
}

@property(nonatomic) __weak id <SCShazamUnifiedActionMenuDelegate> shazamDelegate; // @synthesize shazamDelegate=_shazamDelegate;
@property(nonatomic) __weak id <SCUnifiedActionMenuDataProviderDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) UIViewController *parentViewController; // @synthesize parentViewController=_parentViewController;
@property(readonly, nonatomic) SCSongInfo *songInfo; // @synthesize songInfo=_songInfo;
- (void).cxx_destruct;
- (_Bool)handleActionWithSender:(id)arg1 actionModel:(id)arg2 fromSourceView:(id)arg3;
- (void)updateViewModelWithCompletionBlock:(CDUnknownBlockType)arg1;
- (id)initWithSongInfo:(id)arg1 parentViewController:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

