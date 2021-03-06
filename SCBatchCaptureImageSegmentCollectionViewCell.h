//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

#import "SCMultiSnapCollectionViewCellProtocol-Protocol.h"

@class CALayer, SCBatchCaptureImageSegment, SCGrowingButton, UIImageView, UIView;
@protocol SCBatchCaptureImageSegmentCollectionViewCellDelegate;

@interface SCBatchCaptureImageSegmentCollectionViewCell : UICollectionViewCell <SCMultiSnapCollectionViewCellProtocol>
{
    UIImageView *_imageView;
    UIView *_thumbnailContainerView;
    SCGrowingButton *_deleteButton;
    CDStruct_1b6d18a9 _lastPlayheadTime;
    _Bool _demoted;
    _Bool _onlySegment;
    _Bool _leftmostSegment;
    _Bool _showDeleteEvenOnlySegment;
    SCBatchCaptureImageSegment *_segment;
    id <SCBatchCaptureImageSegmentCollectionViewCellDelegate> _delegate;
    CALayer *_playheadLayer;
}

+ (id)reusableIdentifier;
@property(retain, nonatomic) CALayer *playheadLayer; // @synthesize playheadLayer=_playheadLayer;
@property(nonatomic) __weak id <SCBatchCaptureImageSegmentCollectionViewCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) SCBatchCaptureImageSegment *segment; // @synthesize segment=_segment;
@property(nonatomic) _Bool showDeleteEvenOnlySegment; // @synthesize showDeleteEvenOnlySegment=_showDeleteEvenOnlySegment;
@property(nonatomic, getter=isLeftmostSegment) _Bool leftmostSegment; // @synthesize leftmostSegment=_leftmostSegment;
@property(nonatomic, getter=isOnlySegment) _Bool onlySegment; // @synthesize onlySegment=_onlySegment;
@property(nonatomic, getter=isDemoted) _Bool demoted; // @synthesize demoted=_demoted;
- (void).cxx_destruct;
- (_Bool)isAccessibilityElement;
- (void)setAccessibilityIdentifier:(id)arg1;
- (id)accessibilityElements;
- (_Bool)_shouldShowDeleteButton;
- (void)_movePlayheadLayer:(id)arg1 toOffset:(double)arg2 disableImplicitAnimation:(_Bool)arg3;
- (void)deletePressed:(id)arg1;
- (id)deleteButton;
- (void)updatePlayheadWithTime:(CDStruct_1b6d18a9)arg1;
- (void)hidePlayhead;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (void)setSegment:(id)arg1 animated:(_Bool)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end

