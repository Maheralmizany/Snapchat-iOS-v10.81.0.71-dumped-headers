//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class SCMemoriesFeaturedStoryCellButton;

@interface SCMemoriesSaveButtonController : NSObject
{
    SCMemoriesFeaturedStoryCellButton *_saveButton;
    _Bool _isFeaturedStorySave;
}

- (void).cxx_destruct;
- (void)setSaved:(_Bool)arg1;
- (void)setSaveButtonForFeaturedStorySave:(_Bool)arg1;
- (void)reset;
- (void)stopLoading:(_Bool)arg1;
- (void)startLoading;
- (void)dealloc;
- (id)initWithSaveButton:(id)arg1;

@end

