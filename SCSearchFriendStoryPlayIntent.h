//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCSearchIntent-Protocol.h"

@class NSString, UIView;

@interface SCSearchFriendStoryPlayIntent : NSObject <SCSearchIntent>
{
    NSString *_username;
    UIView *_sourceView;
}

@property(readonly, nonatomic) UIView *sourceView; // @synthesize sourceView=_sourceView;
@property(readonly, copy, nonatomic) NSString *username; // @synthesize username=_username;
- (void).cxx_destruct;
- (id)initWithSourceView:(id)arg1 username:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

