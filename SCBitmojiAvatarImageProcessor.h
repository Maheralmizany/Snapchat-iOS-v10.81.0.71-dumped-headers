//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCBitmojiAvatarImageProcessor-Protocol.h"

@class NSString;

@interface SCBitmojiAvatarImageProcessor : NSObject <SCBitmojiAvatarImageProcessor>
{
}

- (struct CGAffineTransform)cutFindUpTransformation:(id)arg1;
- (struct Mat)toCVMat:(id)arg1 transform:(struct CGAffineTransform)arg2;
- (id)fromCVMat:(const struct Mat *)arg1 orientation:(long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

