//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface SCChatMessageTextViewModelConfig : NSObject
{
    NSString *_rawText;
    NSArray *_mediaAttributes;
    NSArray *_formatAttributes;
}

@property(copy, nonatomic) NSArray *formatAttributes; // @synthesize formatAttributes=_formatAttributes;
@property(copy, nonatomic) NSArray *mediaAttributes; // @synthesize mediaAttributes=_mediaAttributes;
@property(copy, nonatomic) NSString *rawText; // @synthesize rawText=_rawText;
- (void).cxx_destruct;

@end

