//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCContextV3CtaProviding-Protocol.h"

@protocol SCContextIZDataProvider, SCImageDownloading;

@interface SCContextV3CtaProvider : NSObject <SCContextV3CtaProviding>
{
    id <SCContextIZDataProvider> _dataProvider;
    id <SCImageDownloading> _imageDownloader;
}

- (void).cxx_destruct;
- (id)createContextV3CtaWithCtaParamsObserverable:(id)arg1 operaNavigationStyle:(long long)arg2 actionHandler:(id)arg3 baseViewController:(id)arg4;
- (id)initWithDataProvider:(id)arg1 imageDownloader:(id)arg2;

@end
