//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class SCNDeltaforceGroupKey, SCNDeltaforceSyncToken;

@interface SCNDeltaforceSyncRequest : NSObject
{
    SCNDeltaforceGroupKey *_group;
    SCNDeltaforceSyncToken *_syncToken;
}

+ (id)SyncRequestWithGroup:(id)arg1 syncToken:(id)arg2;
@property(readonly, nonatomic) SCNDeltaforceSyncToken *syncToken; // @synthesize syncToken=_syncToken;
@property(readonly, nonatomic) SCNDeltaforceGroupKey *group; // @synthesize group=_group;
- (void).cxx_destruct;
- (id)description;
- (id)initWithGroup:(id)arg1 syncToken:(id)arg2;

@end

