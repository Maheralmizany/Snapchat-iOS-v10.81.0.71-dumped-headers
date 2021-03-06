//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSArray, NSString;

@interface SCProfileSagaDataModel : NSObject <NSCopying>
{
    NSArray *_chatMediaDataModels;
    NSString *_friendshipFlashbackHeader;
}

@property(readonly, copy, nonatomic) NSString *friendshipFlashbackHeader; // @synthesize friendshipFlashbackHeader=_friendshipFlashbackHeader;
@property(readonly, copy, nonatomic) NSArray *chatMediaDataModels; // @synthesize chatMediaDataModels=_chatMediaDataModels;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithChatMediaDataModels:(id)arg1 friendshipFlashbackHeader:(id)arg2;

@end

