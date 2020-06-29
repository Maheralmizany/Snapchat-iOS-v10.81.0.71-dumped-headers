//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSString, SCActionModel;

@interface SCUnifiedProfileIconButtonViewModel : NSObject <NSCopying>
{
    _Bool _growOnPress;
    _Bool _shouldDisappearOnProfileScroll;
    NSString *_imageAssetName;
    SCActionModel *_tapActionModel;
    NSString *_accessibilityIdentifier;
}

@property(readonly, copy, nonatomic) NSString *accessibilityIdentifier; // @synthesize accessibilityIdentifier=_accessibilityIdentifier;
@property(readonly, copy, nonatomic) SCActionModel *tapActionModel; // @synthesize tapActionModel=_tapActionModel;
@property(readonly, nonatomic) _Bool shouldDisappearOnProfileScroll; // @synthesize shouldDisappearOnProfileScroll=_shouldDisappearOnProfileScroll;
@property(readonly, nonatomic) _Bool growOnPress; // @synthesize growOnPress=_growOnPress;
@property(readonly, copy, nonatomic) NSString *imageAssetName; // @synthesize imageAssetName=_imageAssetName;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithImageAssetName:(id)arg1 growOnPress:(_Bool)arg2 shouldDisappearOnProfileScroll:(_Bool)arg3 tapActionModel:(id)arg4 accessibilityIdentifier:(id)arg5;

@end

