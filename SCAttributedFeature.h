//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSString, SCJiraProject;

@interface SCAttributedFeature : NSObject <NSCopying>
{
    NSString *_featureName;
    SCJiraProject *_jiraProject;
}

@property(readonly, copy, nonatomic) SCJiraProject *jiraProject; // @synthesize jiraProject=_jiraProject;
@property(readonly, copy, nonatomic) NSString *featureName; // @synthesize featureName=_featureName;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithFeatureName:(id)arg1 jiraProject:(id)arg2;

@end
