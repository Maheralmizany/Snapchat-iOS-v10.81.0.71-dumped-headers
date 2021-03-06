//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCBloopsPreviewsViewLayout-Protocol.h"

@class NSString, SPPreviewsViewConfiguration;

@interface SCBloopsPreviewsViewLayoutImpl : NSObject <SCBloopsPreviewsViewLayout>
{
    SPPreviewsViewConfiguration *_configuration;
    unsigned long long _preferredRows;
    unsigned long long _scrollDirection;
}

@property(readonly, nonatomic) unsigned long long scrollDirection; // @synthesize scrollDirection=_scrollDirection;
@property(readonly, nonatomic) SPPreviewsViewConfiguration *configuration; // @synthesize configuration=_configuration;
- (void).cxx_destruct;
- (double)getPreferredHeight;
- (struct CGSize)getPreviewSize;
- (id)initWithItemsInRow:(double)arg1 preferredRows:(unsigned long long)arg2 scrollDirection:(unsigned long long)arg3 expectedModuleWidth:(double)arg4 contentInset:(struct UIEdgeInsets)arg5 itemSideRatio:(double)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

