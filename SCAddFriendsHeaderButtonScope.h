//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class SIGHeaderButtonItem;
@protocol SCAddFriendsHeaderButtonDelegate;

@interface SCAddFriendsHeaderButtonScope : NSObject
{
    SIGHeaderButtonItem *_buttonItem;
    id <SCAddFriendsHeaderButtonDelegate> _delegate;
    long long _placementType;
}

@property(readonly, nonatomic) long long placementType; // @synthesize placementType=_placementType;
@property(readonly, nonatomic) __weak id <SCAddFriendsHeaderButtonDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) SIGHeaderButtonItem *buttonItem; // @synthesize buttonItem=_buttonItem;
- (void).cxx_destruct;
- (id)initWithButtonItem:(id)arg1 delegate:(id)arg2 placementType:(long long)arg3;

@end

