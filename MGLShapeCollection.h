//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MGLShape.h"

@class NSArray;

@interface MGLShapeCollection : MGLShape
{
    NSArray *_shapes;
}

+ (id)shapeCollectionWithShapes:(id)arg1;
@property(readonly, copy, nonatomic) NSArray *shapes; // @synthesize shapes=_shapes;
- (void).cxx_destruct;
- (geometry_3833b5dc)geometryObject;
- (id)geometryCollection;
- (id)geoJSONDictionary;
- (struct CLLocationCoordinate2D)coordinate;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithShapes:(id)arg1;

@end

