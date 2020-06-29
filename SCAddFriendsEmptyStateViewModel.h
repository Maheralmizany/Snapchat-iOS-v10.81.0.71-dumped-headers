//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSAttributedString, SCAddFriendsEmptyStateGraphicViewModel, SCSearchActionButtonViewModel;

@interface SCAddFriendsEmptyStateViewModel : NSObject <NSCopying>
{
    NSAttributedString *_descriptionString;
    double _descriptionTrailingPadding;
    SCAddFriendsEmptyStateGraphicViewModel *_graphicViewModel;
    double _graphicViewTrailingPadding;
    SCSearchActionButtonViewModel *_addFriendsButtonViewModel;
    double _preferredContentHeight;
    struct UIEdgeInsets _contentInsets;
}

@property(readonly, nonatomic) double preferredContentHeight; // @synthesize preferredContentHeight=_preferredContentHeight;
@property(readonly, nonatomic) struct UIEdgeInsets contentInsets; // @synthesize contentInsets=_contentInsets;
@property(readonly, copy, nonatomic) SCSearchActionButtonViewModel *addFriendsButtonViewModel; // @synthesize addFriendsButtonViewModel=_addFriendsButtonViewModel;
@property(readonly, nonatomic) double graphicViewTrailingPadding; // @synthesize graphicViewTrailingPadding=_graphicViewTrailingPadding;
@property(readonly, copy, nonatomic) SCAddFriendsEmptyStateGraphicViewModel *graphicViewModel; // @synthesize graphicViewModel=_graphicViewModel;
@property(readonly, nonatomic) double descriptionTrailingPadding; // @synthesize descriptionTrailingPadding=_descriptionTrailingPadding;
@property(readonly, copy, nonatomic) NSAttributedString *descriptionString; // @synthesize descriptionString=_descriptionString;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithDescriptionString:(id)arg1 descriptionTrailingPadding:(double)arg2 graphicViewModel:(id)arg3 graphicViewTrailingPadding:(double)arg4 addFriendsButtonViewModel:(id)arg5 contentInsets:(struct UIEdgeInsets)arg6 preferredContentHeight:(double)arg7;

@end
