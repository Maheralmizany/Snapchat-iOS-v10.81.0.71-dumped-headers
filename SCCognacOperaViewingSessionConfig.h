//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class SCCognacOperaDataSource, SCOperaViewController;

@interface SCCognacOperaViewingSessionConfig : NSObject
{
    SCOperaViewController *_operaVC;
    SCCognacOperaDataSource *_dataSource;
    id _deepLinkNavigationDelegate;
}

@property(readonly, nonatomic) __weak id deepLinkNavigationDelegate; // @synthesize deepLinkNavigationDelegate=_deepLinkNavigationDelegate;
@property(readonly, copy, nonatomic) SCCognacOperaDataSource *dataSource; // @synthesize dataSource=_dataSource;
@property(readonly, nonatomic) __weak SCOperaViewController *operaVC; // @synthesize operaVC=_operaVC;
- (void).cxx_destruct;
- (id)initWithOperaVC:(id)arg1 dataSource:(id)arg2 deepLinkNavigationDelegate:(id)arg3;

@end

