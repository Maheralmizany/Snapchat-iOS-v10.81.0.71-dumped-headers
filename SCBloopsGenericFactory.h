//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface SCBloopsGenericFactory : NSObject
{
    CDUnknownBlockType _creationBlock;
}

+ (id)genericFactoryWithBlock:(CDUnknownBlockType)arg1;
- (void).cxx_destruct;
- (id)create;
- (id)initWithCreationBlock:(CDUnknownBlockType)arg1;

@end
