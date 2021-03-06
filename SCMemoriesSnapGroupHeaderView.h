//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionReusableView.h>

#import "SCMemoriesHeaderSelecting-Protocol.h"

@class NSString, SCMemoriesSnapGroupViewModel, UILabel;
@protocol SCMemoriesSnapGroupHeaderViewDelegate;

@interface SCMemoriesSnapGroupHeaderView : UICollectionReusableView <SCMemoriesHeaderSelecting>
{
    SCMemoriesSnapGroupViewModel *_viewModel;
    UILabel *_titleLabel;
    UILabel *_selectLabel;
    _Bool _selectMode;
    _Bool _selected;
    id <SCMemoriesSnapGroupHeaderViewDelegate> _delegate;
}

@property(nonatomic) __weak id <SCMemoriesSnapGroupHeaderViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool selected; // @synthesize selected=_selected;
@property(nonatomic) _Bool selectMode; // @synthesize selectMode=_selectMode;
- (void).cxx_destruct;
- (void)updateSelectionState;
- (void)_toggleSelectAll;
- (void)setViewModel:(id)arg1;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

