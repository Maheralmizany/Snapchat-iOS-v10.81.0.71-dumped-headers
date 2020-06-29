//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSString;

@interface SCStoryManagementActionDataModel : NSObject <NSCopying>
{
    NSString *_clientId;
    NSString *_viewerUsername;
    NSString *_viewerDisplayName;
}

@property(readonly, copy, nonatomic) NSString *viewerDisplayName; // @synthesize viewerDisplayName=_viewerDisplayName;
@property(readonly, copy, nonatomic) NSString *viewerUsername; // @synthesize viewerUsername=_viewerUsername;
@property(readonly, copy, nonatomic) NSString *clientId; // @synthesize clientId=_clientId;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithClientId:(id)arg1 viewerUsername:(id)arg2 viewerDisplayName:(id)arg3;

@end

