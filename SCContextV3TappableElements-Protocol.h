//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, UIView;
@protocol SCContextV3TappableElementsDelegate, SCUIContainer;

@protocol SCContextV3TappableElements <NSObject>
@property(nonatomic) __weak id <SCContextV3TappableElementsDelegate> delegate;
- (_Bool)isPresentingTappableElementsAction;
- (void)bindTappableElementsToView:(UIView *)arg1;
- (void)cancelTappableElementsActionIfNeccessary;
- (void)showTappableElements;
- (void)hideTappableElements;
- (void)configureWithTappableElements:(NSArray *)arg1;
- (void)presentContextV3TappableElementsInContainer:(id <SCUIContainer>)arg1;
@end

