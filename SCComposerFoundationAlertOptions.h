//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCComposerMarshallableObject.h"

@class NSNumber, NSString;

@interface SCComposerFoundationAlertOptions : SCComposerMarshallableObject
{
    NSString *_titleText;
    NSString *_descriptionText;
    NSString *_buttonText;
    NSString *_cancelButtonText;
    NSNumber *_swipeToDismissEnabled;
}

@property(retain, nonatomic) NSNumber *swipeToDismissEnabled; // @synthesize swipeToDismissEnabled=_swipeToDismissEnabled;
@property(copy, nonatomic) NSString *cancelButtonText; // @synthesize cancelButtonText=_cancelButtonText;
@property(copy, nonatomic) NSString *buttonText; // @synthesize buttonText=_buttonText;
@property(copy, nonatomic) NSString *descriptionText; // @synthesize descriptionText=_descriptionText;
@property(copy, nonatomic) NSString *titleText; // @synthesize titleText=_titleText;
- (void).cxx_destruct;
- (long long)pushToComposerMarshaller:(struct SCComposerMarshaller *)arg1;
- (id)initWithTitleText:(id)arg1 descriptionText:(id)arg2 buttonText:(id)arg3 cancelButtonText:(id)arg4 swipeToDismissEnabled:(id)arg5;

@end

