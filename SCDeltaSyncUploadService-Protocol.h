//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCDeltaSyncService-Protocol.h"

@class NSString, SCDeltaSyncKey;

@protocol SCDeltaSyncUploadService <SCDeltaSyncService>
- (void)putValue:(_Bool)arg1 groupKey:(SCDeltaSyncKey *)arg2 itemKey:(NSString *)arg3 isSpeculative:(_Bool)arg4;
- (_Bool)getValueForGroupKey:(SCDeltaSyncKey *)arg1 itemKey:(NSString *)arg2;
@end

