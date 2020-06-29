//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCEntryPoint.h"

#import "SCTraceEnabled-Protocol.h"

@class NSString, SCAttributionServices, SCLegacyPageViewLoggerServices, SCPagePageViewReporterServices, SCServicesExposer, SCSystemScope;

@interface SCNavigationLoggingEntryPoint : SCEntryPoint <SCTraceEnabled>
{
    SCSystemScope *_systemScope;
    SCAttributionServices *_attributionServices;
    SCPagePageViewReporterServices *_pagePageViewReporterServices;
    SCLegacyPageViewLoggerServices *_legacyPageViewLoggerServices;
    SCServicesExposer *_navigationLoggingServicesExposer;
}

@property(retain, nonatomic) SCServicesExposer *navigationLoggingServicesExposer; // @synthesize navigationLoggingServicesExposer=_navigationLoggingServicesExposer;
@property(nonatomic) __weak SCLegacyPageViewLoggerServices *legacyPageViewLoggerServices; // @synthesize legacyPageViewLoggerServices=_legacyPageViewLoggerServices;
@property(nonatomic) __weak SCPagePageViewReporterServices *pagePageViewReporterServices; // @synthesize pagePageViewReporterServices=_pagePageViewReporterServices;
@property(nonatomic) __weak SCAttributionServices *attributionServices; // @synthesize attributionServices=_attributionServices;
@property(nonatomic) __weak SCSystemScope *systemScope; // @synthesize systemScope=_systemScope;
- (void).cxx_destruct;
- (void)begin;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
