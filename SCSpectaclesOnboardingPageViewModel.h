//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSAttributedString, NSString;

@interface SCSpectaclesOnboardingPageViewModel : NSObject
{
    unsigned long long _pageType;
    NSString *_primaryText;
    NSString *_secondaryText;
    NSAttributedString *_secondaryAttributedText;
    NSString *_accessibilityIdentifier;
    NSString *_fallbackImageName;
    double _minTime;
    double _startTime;
    double _endTime;
}

@property(readonly, nonatomic) double endTime; // @synthesize endTime=_endTime;
@property(readonly, nonatomic) double startTime; // @synthesize startTime=_startTime;
@property(readonly, nonatomic) double minTime; // @synthesize minTime=_minTime;
@property(readonly, copy, nonatomic) NSString *fallbackImageName; // @synthesize fallbackImageName=_fallbackImageName;
@property(readonly, copy, nonatomic) NSString *accessibilityIdentifier; // @synthesize accessibilityIdentifier=_accessibilityIdentifier;
@property(readonly, copy, nonatomic) NSAttributedString *secondaryAttributedText; // @synthesize secondaryAttributedText=_secondaryAttributedText;
@property(readonly, copy, nonatomic) NSString *secondaryText; // @synthesize secondaryText=_secondaryText;
@property(readonly, copy, nonatomic) NSString *primaryText; // @synthesize primaryText=_primaryText;
@property(readonly, nonatomic) unsigned long long pageType; // @synthesize pageType=_pageType;
- (void).cxx_destruct;
- (id)initWithPageType:(unsigned long long)arg1 primaryText:(id)arg2 secondaryText:(id)arg3 secondaryAttributedText:(id)arg4 accessibilityIdentifier:(id)arg5 fallbackImageName:(id)arg6 minTime:(double)arg7 startTime:(double)arg8 endTime:(double)arg9;

@end

