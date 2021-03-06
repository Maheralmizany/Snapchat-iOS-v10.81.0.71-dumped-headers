//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSArray, NSString;

@interface SCStoryInviteStoryStickerCarouselCellViewModel : NSObject <NSCopying>
{
    NSString *_publicationId;
    NSString *_storyTitle;
    NSString *_memberText;
    unsigned long long _storyType;
    NSArray *_storyParticipants;
}

@property(readonly, copy, nonatomic) NSArray *storyParticipants; // @synthesize storyParticipants=_storyParticipants;
@property(readonly, nonatomic) unsigned long long storyType; // @synthesize storyType=_storyType;
@property(readonly, copy, nonatomic) NSString *memberText; // @synthesize memberText=_memberText;
@property(readonly, copy, nonatomic) NSString *storyTitle; // @synthesize storyTitle=_storyTitle;
@property(readonly, copy, nonatomic) NSString *publicationId; // @synthesize publicationId=_publicationId;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithPublicationId:(id)arg1 storyTitle:(id)arg2 memberText:(id)arg3 storyType:(unsigned long long)arg4 storyParticipants:(id)arg5;

@end

