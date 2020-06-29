//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UIGestureRecognizerDelegate-Protocol.h"
#import "UIPickerViewDataSource-Protocol.h"
#import "UIPickerViewDelegate-Protocol.h"

@class NSArray, NSDate, NSDateFormatter, NSString, UIPickerView;
@protocol SCDateComponentResolver, SCDatePickerDelegate;

@interface SCDatePicker : UIView <UIPickerViewDataSource, UIPickerViewDelegate, UIGestureRecognizerDelegate>
{
    id <SCDateComponentResolver> _dateComponentResolver;
    int _pickerState;
    id <SCDatePickerDelegate> _datepickerDelegate;
    NSDate *_minimumDate;
    NSDate *_maximumDate;
    UIPickerView *_pickerView;
    NSArray *_monthTitles;
    NSDateFormatter *_yearFormatter;
}

@property(retain, nonatomic) NSDateFormatter *yearFormatter; // @synthesize yearFormatter=_yearFormatter;
@property(nonatomic) int pickerState; // @synthesize pickerState=_pickerState;
@property(retain, nonatomic) NSArray *monthTitles; // @synthesize monthTitles=_monthTitles;
@property(retain, nonatomic) UIPickerView *pickerView; // @synthesize pickerView=_pickerView;
@property(retain, nonatomic) NSDate *maximumDate; // @synthesize maximumDate=_maximumDate;
@property(retain, nonatomic) NSDate *minimumDate; // @synthesize minimumDate=_minimumDate;
@property(nonatomic) __weak id <SCDatePickerDelegate> datepickerDelegate; // @synthesize datepickerDelegate=_datepickerDelegate;
- (void).cxx_destruct;
- (void)_selectRowsForMonth:(unsigned long long)arg1 day:(unsigned long long)arg2 andYear:(unsigned long long)arg3 animated:(_Bool)arg4;
- (unsigned long long)_year;
- (unsigned long long)_day;
- (unsigned long long)_month;
- (unsigned long long)_yearRow;
- (unsigned long long)_dayRow;
- (unsigned long long)_monthRow;
- (_Bool)respondsToSelector:(SEL)arg1;
- (id)pickerView:(id)arg1 viewForRow:(long long)arg2 forComponent:(long long)arg3 reusingView:(id)arg4;
- (void)pickerView:(id)arg1 didSelectRow:(long long)arg2 inComponent:(long long)arg3;
- (id)pickerView:(id)arg1 titleForRow:(long long)arg2 forComponent:(long long)arg3;
- (long long)pickerView:(id)arg1 numberOfRowsInComponent:(long long)arg2;
- (double)pickerView:(id)arg1 widthForComponent:(long long)arg2;
- (double)pickerView:(id)arg1 rowHeightForComponent:(long long)arg2;
- (long long)numberOfComponentsInPickerView:(id)arg1;
- (_Bool)regularizedSelection;
- (void)selectDate:(id)arg1 animatedAlongDirection:(int)arg2;
- (long long)rollNumber:(long long)arg1 toReminder:(long long)arg2 modulo:(long long)arg3 inTheDirection:(int)arg4;
- (id)date;
- (void)setDate:(id)arg1 animated:(_Bool)arg2;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)handlePan:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (id)init;
- (void)layoutIfNeeded;
- (void)reloadInputViews;
- (void)setBackgroundColor:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

