//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class SCLazy;

@interface SCSelectionGroupServices : NSObject
{
    SCLazy *_selectionGroupObservableRepository;
    SCLazy *_selectionGroupDataFetcher;
}

@property(readonly, nonatomic) SCLazy *selectionGroupDataFetcher; // @synthesize selectionGroupDataFetcher=_selectionGroupDataFetcher;
@property(readonly, nonatomic) SCLazy *selectionGroupObservableRepository; // @synthesize selectionGroupObservableRepository=_selectionGroupObservableRepository;
- (void).cxx_destruct;
- (id)initWithSelectionGroupObservableRepository:(id)arg1 selectionGroupDataFetcher:(id)arg2;

@end

