//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCSearchSectionCreating-Protocol.h"

@class NSSet, NSString, SCLazy;

@interface SCSelectionDescriptionSectionCreator : NSObject <SCSearchSectionCreating>
{
    NSSet *_sectionIdentifiers;
    SCLazy *_dataSource;
}

- (void).cxx_destruct;
- (id)_descriptionSectionForIdentifier:(id)arg1;
- (id)sectionForDescriptor:(id)arg1;
- (id)initWithSectionIdentifiers:(id)arg1 dataSource:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

