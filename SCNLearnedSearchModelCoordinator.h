//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface SCNLearnedSearchModelCoordinator : NSObject
{
    struct Handle<std::__1::shared_ptr<snap::learned_search::ModelCoordinator>, std::__1::shared_ptr<snap::learned_search::ModelCoordinator>> _cppRefHandle;
}

+ (id)modelCoordinatorInstance:(id)arg1 updateExecutor:(id)arg2;
- (id).cxx_construct;
- (void).cxx_destruct;
- (_Bool)updateLocalModel:(id)arg1;
- (id)getModel:(id)arg1;
- (id)initWithCpp:(const shared_ptr_4e4e3097 *)arg1;

@end
