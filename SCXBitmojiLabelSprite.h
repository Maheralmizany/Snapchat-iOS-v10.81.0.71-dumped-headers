//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCXSprite.h"

@class NSString;

@interface SCXBitmojiLabelSprite : SCXSprite
{
    _Bool _visible;
    _Bool _lastSeenJustNow;
    NSString *_name;
    NSString *_lastSeen;
    struct CGSize _size;
}

@property(nonatomic) struct CGSize size; // @synthesize size=_size;
@property(nonatomic) _Bool lastSeenJustNow; // @synthesize lastSeenJustNow=_lastSeenJustNow;
@property(nonatomic) _Bool visible; // @synthesize visible=_visible;
@property(copy, nonatomic) NSString *lastSeen; // @synthesize lastSeen=_lastSeen;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (struct CGRect)boundingRectInMapViewport:(id)arg1 view:(id)arg2;
- (id)init;
- (_Bool)isEmpty;

@end
