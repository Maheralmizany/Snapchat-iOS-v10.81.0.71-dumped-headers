//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, NSString, SCGalleryOperaConfiguration, SCUserSession, UIImage, UIView, UIViewController;
@protocol SCMemoriesOperaPresenterDelegate, SCPageNameLogging;

@protocol SCMemoriesOperaPresenting <NSObject>
@property(nonatomic) __weak id <SCMemoriesOperaPresenterDelegate> delegate;
- (void)updateGroups:(NSArray *)arg1;
- (void)presentOperaFromViewController:(UIViewController<SCPageNameLogging> *)arg1 groups:(NSArray *)arg2 initialIndex:(long long)arg3 sourcePageName:(NSString *)arg4 sourceView:(UIView *)arg5 sourceImage:(UIImage *)arg6 topInset:(double)arg7 completionHandler:(void (^)(void))arg8;
- (_Bool)isPresented;
- (id)initWithConfiguration:(SCGalleryOperaConfiguration *)arg1 userSession:(SCUserSession *)arg2;
@end

