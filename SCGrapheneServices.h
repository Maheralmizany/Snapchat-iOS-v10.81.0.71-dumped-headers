//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class SCLazy;

@interface SCGrapheneServices : NSObject
{
    SCLazy *_graphene;
    SCLazy *_grapheneFlusher;
    SCLazy *_grapheneRegistry;
}

@property(readonly, nonatomic) SCLazy *grapheneRegistry; // @synthesize grapheneRegistry=_grapheneRegistry;
@property(readonly, nonatomic) SCLazy *grapheneFlusher; // @synthesize grapheneFlusher=_grapheneFlusher;
@property(readonly, nonatomic) SCLazy *graphene; // @synthesize graphene=_graphene;
- (void).cxx_destruct;
- (id)initWithGraphene:(id)arg1 grapheneFlusher:(id)arg2 grapheneRegistry:(id)arg3;

@end

