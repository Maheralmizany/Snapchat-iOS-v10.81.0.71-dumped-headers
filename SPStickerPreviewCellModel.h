//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPCellModel-Protocol.h"

@class NSString, SPScenario, UIImage;
@protocol FFPlayerItem;

@interface SPStickerPreviewCellModel : NSObject <SPCellModel>
{
    _Bool _showStickerId;
    _Bool _showError;
    NSString *cellIdentifier;
    NSString *modelId;
    id <FFPlayerItem> _playerItem;
    SPScenario *_scenario;
    NSString *_stickerPath;
    UIImage *_thumbnail;
    long long _loaderStyle;
}

@property(readonly, nonatomic) long long loaderStyle; // @synthesize loaderStyle=_loaderStyle;
@property(readonly, nonatomic) _Bool showError; // @synthesize showError=_showError;
@property(readonly) UIImage *thumbnail; // @synthesize thumbnail=_thumbnail;
@property(readonly, nonatomic) _Bool showStickerId; // @synthesize showStickerId=_showStickerId;
@property(readonly, nonatomic) NSString *stickerPath; // @synthesize stickerPath=_stickerPath;
@property(readonly, nonatomic) SPScenario *scenario; // @synthesize scenario=_scenario;
@property(readonly, nonatomic) id <FFPlayerItem> playerItem; // @synthesize playerItem=_playerItem;
- (void).cxx_destruct;
- (_Bool)isEqualToDiffableObject:(id)arg1;
- (id)diffIdentifier;
@property(readonly, nonatomic) NSString *modelId; // @synthesize modelId;
@property(readonly, nonatomic) NSString *cellIdentifier; // @synthesize cellIdentifier;
- (_Bool)isEqual:(id)arg1;
- (id)initWithScenario:(id)arg1 playerItem:(id)arg2 stickerPath:(id)arg3 showStickerId:(_Bool)arg4 thumbnail:(id)arg5 showError:(_Bool)arg6 loaderStyle:(long long)arg7;

@end

