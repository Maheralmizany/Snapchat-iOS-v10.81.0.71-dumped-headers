//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSString, SCActionModel, SCAvatarViewModel, SCProfileChatMediaDataModelADT;

@interface SCProfileChatMediaCardViewModel : NSObject <NSCopying>
{
    _Bool _is3d;
    _Bool _isSpectacles;
    SCProfileChatMediaDataModelADT *_chatMediaDataModel;
    NSString *_cornerText;
    SCAvatarViewModel *_senderAvatarViewModel;
    SCActionModel *_tapActionModel;
    SCActionModel *_longPressActionModel;
}

@property(readonly, copy, nonatomic) SCActionModel *longPressActionModel; // @synthesize longPressActionModel=_longPressActionModel;
@property(readonly, copy, nonatomic) SCActionModel *tapActionModel; // @synthesize tapActionModel=_tapActionModel;
@property(readonly, copy, nonatomic) SCAvatarViewModel *senderAvatarViewModel; // @synthesize senderAvatarViewModel=_senderAvatarViewModel;
@property(readonly, copy, nonatomic) NSString *cornerText; // @synthesize cornerText=_cornerText;
@property(readonly, nonatomic) _Bool isSpectacles; // @synthesize isSpectacles=_isSpectacles;
@property(readonly, nonatomic) _Bool is3d; // @synthesize is3d=_is3d;
@property(readonly, copy, nonatomic) SCProfileChatMediaDataModelADT *chatMediaDataModel; // @synthesize chatMediaDataModel=_chatMediaDataModel;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithChatMediaDataModel:(id)arg1 is3d:(_Bool)arg2 isSpectacles:(_Bool)arg3 cornerText:(id)arg4 senderAvatarViewModel:(id)arg5 tapActionModel:(id)arg6 longPressActionModel:(id)arg7;

@end

