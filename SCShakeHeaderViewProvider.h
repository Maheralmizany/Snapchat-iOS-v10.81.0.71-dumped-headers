//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCHeaderDataSource-Protocol.h"

@class NSString, SCHeader;

@interface SCShakeHeaderViewProvider : NSObject <SCHeaderDataSource>
{
    NSString *_title;
    long long _headerType;
    SCHeader *_headerView;
}

@property(retain, nonatomic) SCHeader *headerView; // @synthesize headerView=_headerView;
- (void).cxx_destruct;
- (id)titleForHeader:(id)arg1;
- (id)textColorForHeader:(id)arg1;
- (id)imageForRightButtonInState:(unsigned long long)arg1;
- (id)imageForLeftButtonInState:(unsigned long long)arg1;
- (id)backgroundColorForHeader;
- (id)initWithTitle:(id)arg1 headerType:(long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

