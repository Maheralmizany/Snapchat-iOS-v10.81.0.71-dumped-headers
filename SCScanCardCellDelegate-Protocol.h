//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString, SCScanWebResult;

@protocol SCScanCardCellDelegate <NSObject>
- (void)didTapPlayButtonWithURL:(NSString *)arg1;
- (void)didTapOpenAppButtonWithURL:(NSString *)arg1;
- (void)didTapLearnMoreButtonWithWebResult:(SCScanWebResult *)arg1;
@end

