//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class NSURL, SCLens, UIImage, UIViewController;

@protocol SCDeepLinkSharing
- (void)sendToFromViewController:(UIViewController *)arg1 deepLinkType:(unsigned long long)arg2 url:(NSURL *)arg3 attachedImage:(UIImage *)arg4;
- (void)sendToFromViewController:(UIViewController *)arg1 lens:(SCLens *)arg2;
@end

