//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSDictionary, NSTimer;
@protocol SCLensSideButtonImageProviderDelegate, SCLensUserProvider;

@interface SCLensSideButtonImageProvider : NSObject
{
    NSTimer *_changeImageTimer;
    NSDictionary *_dateToImageName;
    id <SCLensUserProvider> _lensUserProvider;
    NSDate *_startDate;
    NSDate *_endDate;
    id <SCLensSideButtonImageProviderDelegate> _delegate;
}

@property(nonatomic) __weak id <SCLensSideButtonImageProviderDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_timerFired:(id)arg1;
- (void)_startTimer;
- (id)_imageNameForDate:(id)arg1;
- (void)_fillDateToImageNameMap;
- (id)tooltipImages;
- (id)buttonImage;
- (id)initWithLensUserProvider:(id)arg1;

@end

