//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSAttributedString;

@interface SCEraseStatusMessageCardStringViewModel : NSObject
{
    NSAttributedString *_declarationLabelText;
    NSAttributedString *_explanationLabelText;
}

@property(readonly, copy, nonatomic) NSAttributedString *explanationLabelText; // @synthesize explanationLabelText=_explanationLabelText;
@property(readonly, copy, nonatomic) NSAttributedString *declarationLabelText; // @synthesize declarationLabelText=_declarationLabelText;
- (void).cxx_destruct;
- (id)initWithDeclarationLabelText:(id)arg1 explanationLabelText:(id)arg2;

@end

