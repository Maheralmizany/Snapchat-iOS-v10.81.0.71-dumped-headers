//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface SCSnapcodeManagerLogger : NSObject
{
    NSString *_loggerSessionId;
}

- (void).cxx_destruct;
- (void)didExitImageEditWithType:(long long)arg1 snapcodeCount:(int)arg2 snapcodeWithImageCount:(int)arg3 webImageCount:(int)arg4 cameraImageCount:(int)arg5 selectedImageSize:(int)arg6 selectedWebImage:(_Bool)arg7 hasMovedImage:(_Bool)arg8;
- (void)didPerformAction:(long long)arg1 success:(_Bool)arg2;
- (void)didEnterPage:(long long)arg1 snapcodeCount:(int)arg2 ghostImageCount:(int)arg3;
- (void)didEnterSnapcodeManager;

@end

