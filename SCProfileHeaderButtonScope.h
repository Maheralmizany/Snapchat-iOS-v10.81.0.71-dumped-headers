//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class SIGHeaderButtonItem;
@protocol SCProfileHeaderButtonDelegate;

@interface SCProfileHeaderButtonScope : NSObject
{
    SIGHeaderButtonItem *_buttonItem;
    id <SCProfileHeaderButtonDelegate> _delegate;
}

@property(readonly, nonatomic) __weak id <SCProfileHeaderButtonDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) SIGHeaderButtonItem *buttonItem; // @synthesize buttonItem=_buttonItem;
- (void).cxx_destruct;
- (id)initWithButtonItem:(id)arg1 delegate:(id)arg2;

@end

