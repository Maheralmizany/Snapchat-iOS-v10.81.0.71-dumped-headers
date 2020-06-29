//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"
#import "SCChatUIContentRenderable-Protocol.h"
#import "SCStatusMessageChatCellViewConfig-Protocol.h"

@class NSAttributedString, NSString;

@interface SCChatMergedStatusContentViewModel : NSObject <SCStatusMessageChatCellViewConfig, SCChatUIContentRenderable, NSCopying>
{
    NSAttributedString *_attributedStatusText;
    double _topMargin;
    double _height;
    double _contentHeight;
    NSString *_reuseIdentifier;
}

@property(readonly, copy, nonatomic) NSString *reuseIdentifier; // @synthesize reuseIdentifier=_reuseIdentifier;
@property(readonly, nonatomic) double contentHeight; // @synthesize contentHeight=_contentHeight;
@property(readonly, nonatomic) double height; // @synthesize height=_height;
@property(readonly, nonatomic) double topMargin; // @synthesize topMargin=_topMargin;
@property(readonly, copy, nonatomic) NSAttributedString *attributedStatusText; // @synthesize attributedStatusText=_attributedStatusText;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithAttributedStatusText:(id)arg1 topMargin:(double)arg2 height:(double)arg3 contentHeight:(double)arg4 reuseIdentifier:(id)arg5;
- (double)topMarginForStatusMessageLabel;
- (double)heightForStatusMessageLabel;
- (id)attributedTextForStatusMessageLabel;
- (id)cellWillDisplayAction;
- (id)externalLongPressAction;
- (id)externalTapAction;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

