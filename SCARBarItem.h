//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, UIImage;

@interface SCARBarItem : NSObject
{
    _Bool _labelHidden;
    NSString *_name;
    UIImage *_icon;
    UIImage *_highlightIcon;
    NSString *_accessibilityIdentifier;
    long long _itemLoggingType;
    NSString *_accessibilityLabel;
}

+ (id)itemWithName:(id)arg1 icon:(id)arg2 highlightIcon:(id)arg3 itemLoggingType:(long long)arg4 accessibilityIdentifier:(id)arg5;
@property(readonly, nonatomic) NSString *accessibilityLabel; // @synthesize accessibilityLabel=_accessibilityLabel;
@property(readonly, nonatomic) long long itemLoggingType; // @synthesize itemLoggingType=_itemLoggingType;
@property(readonly, nonatomic) NSString *accessibilityIdentifier; // @synthesize accessibilityIdentifier=_accessibilityIdentifier;
@property(readonly, nonatomic) _Bool labelHidden; // @synthesize labelHidden=_labelHidden;
@property(readonly, nonatomic) UIImage *highlightIcon; // @synthesize highlightIcon=_highlightIcon;
@property(readonly, nonatomic) UIImage *icon; // @synthesize icon=_icon;
@property(readonly, copy, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (id)initWithName:(id)arg1 icon:(id)arg2 highlightIcon:(id)arg3 labelHidden:(_Bool)arg4 itemLoggingType:(long long)arg5 accessibilityIdentifier:(id)arg6 accessibilityLabel:(id)arg7;

@end

