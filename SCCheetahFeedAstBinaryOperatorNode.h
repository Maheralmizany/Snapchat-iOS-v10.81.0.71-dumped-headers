//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"

@class SCCheetahFeedAstNode;

@interface SCCheetahFeedAstBinaryOperatorNode : NSObject <NSCopying, NSCoding>
{
    long long _operatorType;
    SCCheetahFeedAstNode *_leftNode;
    SCCheetahFeedAstNode *_rightNode;
}

@property(readonly, copy, nonatomic) SCCheetahFeedAstNode *rightNode; // @synthesize rightNode=_rightNode;
@property(readonly, copy, nonatomic) SCCheetahFeedAstNode *leftNode; // @synthesize leftNode=_leftNode;
@property(readonly, nonatomic) long long operatorType; // @synthesize operatorType=_operatorType;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithOperatorType:(long long)arg1 leftNode:(id)arg2 rightNode:(id)arg3;
- (id)initWithCoder:(id)arg1;

@end

