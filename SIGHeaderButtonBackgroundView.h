//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIVisualEffectView;

@interface SIGHeaderButtonBackgroundView : UIView
{
    UIVisualEffectView *_visualEffectView;
    UIView *_shapeLayerView;
    unsigned long long _style;
    unsigned long long _theme;
}

@property(nonatomic) unsigned long long theme; // @synthesize theme=_theme;
@property(nonatomic) unsigned long long style; // @synthesize style=_style;
- (void).cxx_destruct;
- (struct CGSize)intrinsicContentSize;
- (id)initAsFirstOption:(_Bool)arg1 lastOption:(_Bool)arg2 style:(unsigned long long)arg3 theme:(unsigned long long)arg4;

@end

