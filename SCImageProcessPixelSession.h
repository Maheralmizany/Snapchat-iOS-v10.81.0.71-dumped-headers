//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, SCImageProcessPixelRequest, SCImageProcessQueue, UIImage;
@protocol SCImageProcessCommandMapping;

@interface SCImageProcessPixelSession : NSObject
{
    SCImageProcessQueue *_queue;
    NSArray *_commands;
    UIImage *_image;
    struct CGSize _outputSize;
    long long _orientation;
    struct CGAffineTransform _viewportTransform;
    SCImageProcessPixelRequest *_request;
    id <SCImageProcessCommandMapping> _commandMapper;
    _Bool _useTransparentBackground;
}

@property(nonatomic) _Bool useTransparentBackground; // @synthesize useTransparentBackground=_useTransparentBackground;
- (void).cxx_destruct;
- (void)startRunningWithCompletionHandler:(CDUnknownBlockType)arg1 atPresentationTime:(CDStruct_1b6d18a9)arg2;
- (void)dealloc;
- (id)initWithQueue:(id)arg1 image:(id)arg2 outputSize:(struct CGSize)arg3 commands:(id)arg4 orientation:(long long)arg5 viewportTransform:(struct CGAffineTransform)arg6 commandMapper:(id)arg7;
- (id)initWithQueue:(id)arg1 image:(id)arg2 outputSize:(struct CGSize)arg3 commands:(id)arg4 orientation:(long long)arg5 viewportTransform:(struct CGAffineTransform)arg6;

@end

