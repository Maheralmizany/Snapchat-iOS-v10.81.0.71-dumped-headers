//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSPointerArray, NSString, SCOperaPage;

@interface SCOperaViewModel : NSObject
{
    NSString *_pageClearReason;
    NSPointerArray *_triggerPoints;
    SCOperaPage *_page;
    SCOperaViewModel *_previousGroup;
    SCOperaViewModel *_nextGroup;
    SCOperaViewModel *_attachment;
    SCOperaViewModel *_parent;
    SCOperaViewModel *_previous;
    SCOperaViewModel *_next;
    NSString *_pageID;
}

+ (id)dismissViewModel;
+ (id)viewModelWithPage:(id)arg1;
+ (id)viewModelWithProperties:(id)arg1;
@property(readonly, copy, nonatomic) NSString *pageID; // @synthesize pageID=_pageID;
@property(nonatomic) __weak SCOperaViewModel *next; // @synthesize next=_next;
@property(nonatomic) __weak SCOperaViewModel *previous; // @synthesize previous=_previous;
@property(nonatomic) __weak SCOperaViewModel *parent; // @synthesize parent=_parent;
@property(nonatomic) __weak SCOperaViewModel *attachment; // @synthesize attachment=_attachment;
@property(nonatomic) __weak SCOperaViewModel *nextGroup; // @synthesize nextGroup=_nextGroup;
@property(nonatomic) __weak SCOperaViewModel *previousGroup; // @synthesize previousGroup=_previousGroup;
@property(retain, nonatomic) SCOperaPage *page; // @synthesize page=_page;
- (void).cxx_destruct;
- (id)triggerPoints;
- (void)addTriggerPoints:(id)arg1;
- (void)clearPageWithReason:(id)arg1;
- (id)description;
- (id)_initWithPage:(id)arg1;

@end

