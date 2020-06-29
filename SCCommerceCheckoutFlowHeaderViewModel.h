//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSString;

@interface SCCommerceCheckoutFlowHeaderViewModel : NSObject <NSCopying>
{
    _Bool _buttonActive;
    NSString *_title;
    unsigned long long _dismissalAction;
    NSString *_trailingButtonText;
    id _trailingButtonAction;
    long long _totalProgressBars;
    long long _filledProgressBars;
}

@property(readonly, nonatomic) long long filledProgressBars; // @synthesize filledProgressBars=_filledProgressBars;
@property(readonly, nonatomic) long long totalProgressBars; // @synthesize totalProgressBars=_totalProgressBars;
@property(readonly, nonatomic) _Bool buttonActive; // @synthesize buttonActive=_buttonActive;
@property(readonly, copy, nonatomic) id trailingButtonAction; // @synthesize trailingButtonAction=_trailingButtonAction;
@property(readonly, copy, nonatomic) NSString *trailingButtonText; // @synthesize trailingButtonText=_trailingButtonText;
@property(readonly, nonatomic) unsigned long long dismissalAction; // @synthesize dismissalAction=_dismissalAction;
@property(readonly, copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithTitle:(id)arg1 dismissalAction:(unsigned long long)arg2 trailingButtonText:(id)arg3 trailingButtonAction:(id)arg4 buttonActive:(_Bool)arg5 totalProgressBars:(long long)arg6 filledProgressBars:(long long)arg7;

@end
