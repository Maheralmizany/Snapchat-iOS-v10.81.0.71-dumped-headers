//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, NSString, SIGHeaderItem, UIView;
@protocol SIGTextFieldPillDelegate, UITextFieldDelegate;

@protocol SIGHeaderItemObserverDelegate <NSObject>

@optional
- (void)headerItem:(SIGHeaderItem *)arg1 didChangeSmartInsertDeleteType:(long long)arg2;
- (void)headerItem:(SIGHeaderItem *)arg1 didChangeSmartDashesType:(long long)arg2;
- (void)headerItem:(SIGHeaderItem *)arg1 didChangeSmartQuotesType:(long long)arg2;
- (void)headerItem:(SIGHeaderItem *)arg1 didChangeTextContentType:(NSString *)arg2;
- (void)headerItem:(SIGHeaderItem *)arg1 didChangeSecureTextEntry:(_Bool)arg2;
- (void)headerItem:(SIGHeaderItem *)arg1 didChangeEnablesReturnKeyAutomatically:(_Bool)arg2;
- (void)headerItem:(SIGHeaderItem *)arg1 didChangeReturnKeyType:(long long)arg2;
- (void)headerItem:(SIGHeaderItem *)arg1 didChangeKeyboardAppearance:(long long)arg2;
- (void)headerItem:(SIGHeaderItem *)arg1 didChangeKeyboardType:(long long)arg2;
- (void)headerItem:(SIGHeaderItem *)arg1 didChangeSpellCheckingType:(long long)arg2;
- (void)headerItem:(SIGHeaderItem *)arg1 didChangeAutocorrectionType:(long long)arg2;
- (void)headerItem:(SIGHeaderItem *)arg1 didChangeAutocapitalizationType:(long long)arg2;
- (void)headerItem:(SIGHeaderItem *)arg1 didChangeSearchFieldTrailingView:(UIView *)arg2;
- (void)headerItem:(SIGHeaderItem *)arg1 didChangeSearchFieldLeadingView:(UIView *)arg2;
- (void)headerItem:(SIGHeaderItem *)arg1 didChangePillsDelegate:(id <SIGTextFieldPillDelegate>)arg2;
- (void)headerItem:(SIGHeaderItem *)arg1 didChangeSearchFieldDelegate:(id <UITextFieldDelegate>)arg2;
- (void)headerItem:(SIGHeaderItem *)arg1 didChangeSearchFieldVisible:(_Bool)arg2;
- (void)headerItem:(SIGHeaderItem *)arg1 didChangeTabBarItems:(NSArray *)arg2;
- (void)headerItem:(SIGHeaderItem *)arg1 didChangeTitleTextAlignment:(long long)arg2;
- (void)headerItem:(SIGHeaderItem *)arg1 didChangeEditableTitlePlaceholderText:(NSString *)arg2;
- (void)headerItem:(SIGHeaderItem *)arg1 didChangeTitleEditable:(_Bool)arg2;
- (void)headerItem:(SIGHeaderItem *)arg1 didChangeTitleCollapsesWhenScrolled:(_Bool)arg2;
- (void)headerItem:(SIGHeaderItem *)arg1 didChangeTitleAlwaysCollapsed:(_Bool)arg2;
- (void)headerItem:(SIGHeaderItem *)arg1 didChangeSubtitle:(NSString *)arg2;
- (void)headerItem:(SIGHeaderItem *)arg1 didChangeTitle:(NSString *)arg2;
- (void)headerItem:(SIGHeaderItem *)arg1 didChangeDismissalAction:(unsigned long long)arg2;
- (void)headerItem:(SIGHeaderItem *)arg1 didChangeCustomLeadingAccessoryView:(UIView *)arg2;
- (void)headerItem:(SIGHeaderItem *)arg1 didChangeTrailingAccessoryView:(UIView *)arg2;
- (void)headerItem:(SIGHeaderItem *)arg1 didChangeStyle:(unsigned long long)arg2;
- (void)headerItem:(SIGHeaderItem *)arg1 didChangeShowsSectionTitle:(_Bool)arg2;
@end

