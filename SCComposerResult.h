//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface SCComposerResult : NSObject
{
    Result_1ced0142 _platformResult;
}

@property(readonly, nonatomic) Result_1ced0142 platformResult; // @synthesize platformResult=_platformResult;
- (id).cxx_construct;
- (void).cxx_destruct;
@property(readonly, nonatomic) id successValue;
@property(readonly, nonatomic) NSString *errorMessage;
@property(readonly, nonatomic) _Bool success;
- (id)initWithPlatformResult:(Result_1ced0142)arg1;

@end

