//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class NSError, NSString;
@protocol SCActivityItemGenerating;

@protocol SCActivityItemGeneratingDelegate
- (void)activityItemGenerator:(id <SCActivityItemGenerating>)arg1 didFailGeneratingItemWithError:(NSError *)arg2 itemId:(NSString *)arg3;
- (void)activityItemGenerator:(id <SCActivityItemGenerating>)arg1 didGenerateItem:(id)arg2 itemId:(NSString *)arg3;

@optional
- (void)activityItemGenerator:(id <SCActivityItemGenerating>)arg1 didUpdateProgress:(float)arg2;
@end

