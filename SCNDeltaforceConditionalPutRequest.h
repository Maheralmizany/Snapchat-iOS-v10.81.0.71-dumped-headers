//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, SCNDeltaforceItem;

@interface SCNDeltaforceConditionalPutRequest : NSObject
{
    _Bool _returnGroupState;
    SCNDeltaforceItem *_item;
    NSArray *_conditions;
}

+ (id)ConditionalPutRequestWithItem:(id)arg1 conditions:(id)arg2 returnGroupState:(_Bool)arg3;
@property(readonly, nonatomic) _Bool returnGroupState; // @synthesize returnGroupState=_returnGroupState;
@property(readonly, nonatomic) NSArray *conditions; // @synthesize conditions=_conditions;
@property(readonly, nonatomic) SCNDeltaforceItem *item; // @synthesize item=_item;
- (void).cxx_destruct;
- (id)description;
- (id)initWithItem:(id)arg1 conditions:(id)arg2 returnGroupState:(_Bool)arg3;

@end

