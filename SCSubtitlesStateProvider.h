//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface SCSubtitlesStateProvider : NSObject
{
    unsigned long long _subtitlesSettings;
    NSString *_preferredSubtitlesLanguageId;
    NSString *_subtitlesLanguageId;
}

@property(copy, nonatomic) NSString *subtitlesLanguageId; // @synthesize subtitlesLanguageId=_subtitlesLanguageId;
- (void).cxx_destruct;
- (void)setPreferredSubtitlesLanguageId:(id)arg1;
- (id)preferredSubtitlesLanguageId;
@property(nonatomic) unsigned long long subtitlesSettings;

@end

