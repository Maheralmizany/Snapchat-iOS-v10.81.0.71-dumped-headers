//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCFeature.h"

#import "SCPreviewScannerDelegate-Protocol.h"

@class NSString, SCPreviewConfiguration, SCPreviewScanner, SCSnapCommonLoggingParameters, SCUserSession;
@protocol SCPreviewFeatureScanDelegate;

@interface SCPreviewFeatureScan : SCFeature <SCPreviewScannerDelegate>
{
    SCPreviewConfiguration *_configuration;
    SCUserSession *_userSession;
    id <SCPreviewFeatureScanDelegate> _delegate;
    SCSnapCommonLoggingParameters *_commonLoggingParameters;
    SCPreviewScanner *_previewScanner;
}

@property(retain, nonatomic) SCPreviewScanner *previewScanner; // @synthesize previewScanner=_previewScanner;
@property(nonatomic) __weak SCSnapCommonLoggingParameters *commonLoggingParameters; // @synthesize commonLoggingParameters=_commonLoggingParameters;
@property(nonatomic) __weak id <SCPreviewFeatureScanDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak SCUserSession *userSession; // @synthesize userSession=_userSession;
@property(nonatomic) __weak SCPreviewConfiguration *configuration; // @synthesize configuration=_configuration;
- (void).cxx_destruct;
- (void)previewScanner:(id)arg1 didScanWithResult:(id)arg2;
- (void)activate;
- (id)initWithConfiguration:(id)arg1 userSession:(id)arg2 featureScanDelegate:(id)arg3 commonLoggingParameters:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

