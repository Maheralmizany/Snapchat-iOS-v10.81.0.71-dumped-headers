//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class UIView;
@protocol SCContextLegacyViewModel, SCEmbeddedContextCards;

@protocol SCEmbeddedContextCardsDelegate <NSObject>
- (void)embeddedContextCards:(UIView<SCEmbeddedContextCards> *)arg1 didFinishLoadingWithResult:(long long)arg2;

@optional
- (id <SCContextLegacyViewModel>)embeddedContextCards:(UIView<SCEmbeddedContextCards> *)arg1 willLoadViewModel:(id <SCContextLegacyViewModel>)arg2;
@end

