//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSAttributedString, SCSearchActionButtonViewModel;

@interface SCAddFriendsContactSyncCTAViewModel : NSObject <NSCopying>
{
    NSAttributedString *_descriptionString;
    double _preferredContentHeight;
    SCSearchActionButtonViewModel *_findFriendsButtonViewModel;
    struct UIEdgeInsets _contentInsets;
}

@property(readonly, copy, nonatomic) SCSearchActionButtonViewModel *findFriendsButtonViewModel; // @synthesize findFriendsButtonViewModel=_findFriendsButtonViewModel;
@property(readonly, nonatomic) double preferredContentHeight; // @synthesize preferredContentHeight=_preferredContentHeight;
@property(readonly, nonatomic) struct UIEdgeInsets contentInsets; // @synthesize contentInsets=_contentInsets;
@property(readonly, copy, nonatomic) NSAttributedString *descriptionString; // @synthesize descriptionString=_descriptionString;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithDescriptionString:(id)arg1 contentInsets:(struct UIEdgeInsets)arg2 preferredContentHeight:(double)arg3 findFriendsButtonViewModel:(id)arg4;

@end

