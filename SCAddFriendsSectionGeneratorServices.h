//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary;

@interface SCAddFriendsSectionGeneratorServices : NSObject
{
    NSDictionary *_collectionViewSectionGenerators;
    NSDictionary *_sectionDescriptorGenerators;
}

@property(readonly, nonatomic) NSDictionary *sectionDescriptorGenerators; // @synthesize sectionDescriptorGenerators=_sectionDescriptorGenerators;
@property(readonly, nonatomic) NSDictionary *collectionViewSectionGenerators; // @synthesize collectionViewSectionGenerators=_collectionViewSectionGenerators;
- (void).cxx_destruct;
- (id)initWithCollectionViewSectionGenerators:(id)arg1 sectionDescriptorGenerators:(id)arg2;

@end

