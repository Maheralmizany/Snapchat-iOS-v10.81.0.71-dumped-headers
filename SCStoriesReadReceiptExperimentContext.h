//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCExperimentContext.h"

@interface SCStoriesReadReceiptExperimentContext : SCExperimentContext
{
    _Bool _enableUploadingPremium;
    _Bool _enableUploadingUnified;
}

@property(nonatomic) _Bool enableUploadingUnified; // @synthesize enableUploadingUnified=_enableUploadingUnified;
@property(nonatomic) _Bool enableUploadingPremium; // @synthesize enableUploadingPremium=_enableUploadingPremium;
- (void)setupParameters;
- (id)experimentName;

@end
