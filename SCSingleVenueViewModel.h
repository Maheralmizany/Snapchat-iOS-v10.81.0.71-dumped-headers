//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCComposerMarshallableObject.h"

@class NSString;

@interface SCSingleVenueViewModel : SCComposerMarshallableObject
{
    NSString *_venueId;
    NSString *_title;
    NSString *_address;
}

@property(copy, nonatomic) NSString *address; // @synthesize address=_address;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(copy, nonatomic) NSString *venueId; // @synthesize venueId=_venueId;
- (void).cxx_destruct;
- (long long)pushToComposerMarshaller:(struct SCComposerMarshaller *)arg1;
- (id)initWithVenueId:(id)arg1 title:(id)arg2 address:(id)arg3;

@end

