//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class SCLazy;

@interface SCNativeConversationServices : NSObject
{
    SCLazy *_arroyoOneOnOneConversationsManager;
    SCLazy *_nativeSnapManager;
}

@property(readonly, nonatomic) SCLazy *nativeSnapManager; // @synthesize nativeSnapManager=_nativeSnapManager;
@property(readonly, nonatomic) SCLazy *arroyoOneOnOneConversationsManager; // @synthesize arroyoOneOnOneConversationsManager=_arroyoOneOnOneConversationsManager;
- (void).cxx_destruct;
- (id)initWithArroyoOneOnOneConversationsManager:(id)arg1 nativeSnapManager:(id)arg2;

@end

