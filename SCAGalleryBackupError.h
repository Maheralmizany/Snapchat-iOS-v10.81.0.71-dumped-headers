//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCAUserTrackedEvent.h"

@interface SCAGalleryBackupError : SCAUserTrackedEvent
{
}

- (void)setStatusCode:(long long)arg1;
- (void)setOperationType:(long long)arg1;
- (void)setFromRetry:(_Bool)arg1;
- (void)setErrorMessage:(id)arg1;
- (void)setDetailStatusCode:(long long)arg1;
- (long long)getEventQoS;
- (id)getEventName;

@end

