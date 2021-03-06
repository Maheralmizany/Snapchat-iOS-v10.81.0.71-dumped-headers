//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class CLLocation, SCObservable, SCScanRequest, SCScanUtilityLensRequest, SCULGtqServeRequest, UIImage;

@protocol SCScanDataOrchestrator
@property(readonly, nonatomic) SCObservable *scanDataProviderUpdateObservable;
@property(readonly, nonatomic) SCObservable *scanDataOrchestratorUpdateObservable;
- (void)releaseResponseBarrier;
- (void)createResponseBarrier;
- (SCScanRequest *)performAnalysisForImage:(UIImage *)arg1 utilityLensRequest:(SCScanUtilityLensRequest *)arg2 gtqServeRequest:(SCULGtqServeRequest *)arg3 location:(CLLocation *)arg4 touchPoint:(struct CGPoint)arg5 isFrontFacing:(_Bool)arg6 scanSource:(long long)arg7 scanBarEnabled:(_Bool)arg8;
@end

