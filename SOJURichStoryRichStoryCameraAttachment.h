//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCSojuMessage.h"

#import "SOJURichStoryRichStoryCameraAttachment-Protocol.h"

@class NSArray, NSNumber, NSString;

@interface SOJURichStoryRichStoryCameraAttachment : SCSojuMessage <SOJURichStoryRichStoryCameraAttachment>
{
}

+ (void)registerMessageFields:(id)arg1;
- (id)initWithLenses:(id)arg1 addToOurStory:(id)arg2;

// Remaining properties
@property(readonly, nonatomic) NSNumber *addToOurStory; // @dynamic addToOurStory;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSArray *lenses; // @dynamic lenses;
@property(readonly) Class superclass;

@end

