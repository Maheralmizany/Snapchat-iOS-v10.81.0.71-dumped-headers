//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCCognacCypressRequestOperation.h"

@class SCCognacOperaDataSource;

@interface SCCognacPlayWithStrangersRequestOperation : SCCognacCypressRequestOperation
{
    SCCognacOperaDataSource *_dataSource;
}

@property(retain, nonatomic) SCCognacOperaDataSource *dataSource; // @synthesize dataSource=_dataSource;
- (void).cxx_destruct;
- (void)_callbackWithAppInstanceId:(id)arg1;
- (void)_launchUserScopedAppInstanceIfNecessary;
- (_Bool)_validateState;
- (void)teardown;
- (void)run;

@end

