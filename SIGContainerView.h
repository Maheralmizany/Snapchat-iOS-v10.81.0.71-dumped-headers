//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SIGSubscreenView.h"

@class UIView;

@interface SIGContainerView : SIGSubscreenView
{
    UIView *_outgoingApplicationView;
    UIView *_currentApplicationView;
}

@property(readonly, nonatomic) __weak UIView *currentApplicationView; // @synthesize currentApplicationView=_currentApplicationView;
- (void).cxx_destruct;
- (void)endPresentation:(id)arg1 completed:(_Bool)arg2;
- (void)beginPresentation:(id)arg1;
- (void)present:(id)arg1;

@end

