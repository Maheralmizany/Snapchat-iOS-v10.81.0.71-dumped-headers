//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "IGListDiffable-Protocol.h"

@class NSArray, SCSpectaclesAppStatusCoordinatorDeviceState, SCUserSession;
@protocol SCSpectaclesDevice, SCSpectaclesManaging;

@interface SCSpectaclesImportSectionViewModel : NSObject <IGListDiffable>
{
    long long _actionButtonType;
    _Bool _shouldShowToolTip;
    id <SCSpectaclesManaging> _spectaclesManager;
    SCUserSession *_userSession;
    SCSpectaclesAppStatusCoordinatorDeviceState *_status;
    id <SCSpectaclesDevice> _device;
    NSArray *_untransferredContent;
    NSArray *_transferredContent;
    NSArray *_transferringContent;
    long long _mode;
    NSArray *_cellViewModels;
}

+ (long long)_importProgressCellTypeForMode:(long long)arg1;
+ (long long)_importCellActionButtonTypeForMode:(long long)arg1;
+ (long long)_importCellMessageTypeForMode:(long long)arg1;
@property(readonly, nonatomic) NSArray *cellViewModels; // @synthesize cellViewModels=_cellViewModels;
@property(readonly, nonatomic) long long mode; // @synthesize mode=_mode;
@property(readonly, nonatomic) NSArray *transferringContent; // @synthesize transferringContent=_transferringContent;
@property(readonly, nonatomic) NSArray *transferredContent; // @synthesize transferredContent=_transferredContent;
@property(readonly, nonatomic) NSArray *untransferredContent; // @synthesize untransferredContent=_untransferredContent;
@property(readonly, nonatomic) id <SCSpectaclesDevice> device; // @synthesize device=_device;
@property(readonly, nonatomic) SCSpectaclesAppStatusCoordinatorDeviceState *status; // @synthesize status=_status;
- (void).cxx_destruct;
- (_Bool)isEqualToDiffableObject:(id)arg1;
- (id)diffIdentifier;
- (void)_resetCellViewModelsForCellTypes:(id)arg1;
- (void)_updateStateForMode;
- (void)_updateMode:(long long)arg1 device:(id)arg2 untransferredContent:(id)arg3 transferredContent:(id)arg4 transferringContent:(id)arg5;
- (id)initWithUserSession:(id)arg1 mode:(long long)arg2 device:(id)arg3 untransferredContent:(id)arg4 transferredContent:(id)arg5 transferringContent:(id)arg6 spectaclesManager:(id)arg7;

@end

