//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "MTLTexture-Protocol.h"
#import "MTLTextureImplementation-Protocol.h"

@class NSString;
@protocol MTLBuffer, MTLDevice, MTLHeap, MTLResource, MTLTexture;

@interface SCMockMetalTexture : NSObject <MTLTexture, MTLTextureImplementation>
{
    _Bool _framebufferOnly;
    _Bool _allowGPUOptimizedContents;
    _Bool _shareable;
    _Bool _isSparse;
    CDStruct_9584f3b1 _swizzle;
    id <MTLBuffer> _buffer;
    unsigned long long _arrayLength;
    unsigned long long _bufferBytesPerRow;
    unsigned long long _bufferOffset;
    unsigned long long _height;
    unsigned long long _depth;
    struct __IOSurface *_iosurface;
    unsigned long long _allocatedSize;
    unsigned long long _cpuCacheMode;
    id <MTLDevice> _device;
    id <MTLHeap> _heap;
    unsigned long long _iosurfacePlane;
    NSString *_label;
    unsigned long long _mipmapLevelCount;
    unsigned long long _parentRelativeLevel;
    unsigned long long _parentRelativeSlice;
    id <MTLTexture> _parentTexture;
    unsigned long long _pixelFormat;
    id <MTLResource> _rootResource;
    unsigned long long _sampleCount;
    unsigned long long _storageMode;
    unsigned long long _textureType;
    unsigned long long _usage;
    unsigned long long _width;
    unsigned long long _hazardTrackingMode;
    unsigned long long _heapOffset;
    unsigned long long _resourceOptions;
    unsigned long long _tailSizeInBytes;
    unsigned long long _firstMipmapInTail;
}

@property(readonly) unsigned long long firstMipmapInTail; // @synthesize firstMipmapInTail=_firstMipmapInTail;
@property(readonly) _Bool isSparse; // @synthesize isSparse=_isSparse;
@property(readonly) unsigned long long tailSizeInBytes; // @synthesize tailSizeInBytes=_tailSizeInBytes;
@property(readonly, nonatomic) CDStruct_9584f3b1 swizzle; // @synthesize swizzle=_swizzle;
@property(readonly, getter=isShareable) _Bool shareable; // @synthesize shareable=_shareable;
@property(readonly) unsigned long long resourceOptions; // @synthesize resourceOptions=_resourceOptions;
@property(readonly) unsigned long long heapOffset; // @synthesize heapOffset=_heapOffset;
@property(readonly) unsigned long long hazardTrackingMode; // @synthesize hazardTrackingMode=_hazardTrackingMode;
@property(readonly) _Bool allowGPUOptimizedContents; // @synthesize allowGPUOptimizedContents=_allowGPUOptimizedContents;
@property(readonly) unsigned long long width; // @synthesize width=_width;
@property(readonly) unsigned long long usage; // @synthesize usage=_usage;
@property(readonly) unsigned long long textureType; // @synthesize textureType=_textureType;
@property(readonly) unsigned long long storageMode; // @synthesize storageMode=_storageMode;
@property(readonly) unsigned long long sampleCount; // @synthesize sampleCount=_sampleCount;
@property(readonly) id <MTLResource> rootResource; // @synthesize rootResource=_rootResource;
@property(readonly) unsigned long long pixelFormat; // @synthesize pixelFormat=_pixelFormat;
@property(readonly) id <MTLTexture> parentTexture; // @synthesize parentTexture=_parentTexture;
@property(readonly) unsigned long long parentRelativeSlice; // @synthesize parentRelativeSlice=_parentRelativeSlice;
@property(readonly) unsigned long long parentRelativeLevel; // @synthesize parentRelativeLevel=_parentRelativeLevel;
@property(readonly) unsigned long long mipmapLevelCount; // @synthesize mipmapLevelCount=_mipmapLevelCount;
@property(copy) NSString *label; // @synthesize label=_label;
@property(readonly) unsigned long long iosurfacePlane; // @synthesize iosurfacePlane=_iosurfacePlane;
@property(readonly) id <MTLHeap> heap; // @synthesize heap=_heap;
@property(readonly) id <MTLDevice> device; // @synthesize device=_device;
@property(readonly) unsigned long long cpuCacheMode; // @synthesize cpuCacheMode=_cpuCacheMode;
@property(readonly) unsigned long long allocatedSize; // @synthesize allocatedSize=_allocatedSize;
@property(readonly) struct __IOSurface *iosurface; // @synthesize iosurface=_iosurface;
@property(readonly, getter=isFramebufferOnly) _Bool framebufferOnly; // @synthesize framebufferOnly=_framebufferOnly;
@property(readonly) unsigned long long depth; // @synthesize depth=_depth;
@property(readonly) unsigned long long height; // @synthesize height=_height;
@property(readonly) unsigned long long bufferOffset; // @synthesize bufferOffset=_bufferOffset;
@property(readonly) unsigned long long bufferBytesPerRow; // @synthesize bufferBytesPerRow=_bufferBytesPerRow;
@property(readonly) unsigned long long arrayLength; // @synthesize arrayLength=_arrayLength;
@property(readonly) id <MTLBuffer> buffer; // @synthesize buffer=_buffer;
- (void).cxx_destruct;
- (id)newSharedTextureHandle;
- (id)newTextureViewWithPixelFormat:(unsigned long long)arg1 textureType:(unsigned long long)arg2 levels:(struct _NSRange)arg3 slices:(struct _NSRange)arg4 swizzle:(CDStruct_9584f3b1)arg5;
- (_Bool)isMemberOfClass:(Class)arg1;
- (_Bool)isKindOfClass:(Class)arg1;
- (void)replaceRegion:(CDStruct_caaed6bc)arg1 mipmapLevel:(unsigned long long)arg2 withBytes:(const void *)arg3 bytesPerRow:(unsigned long long)arg4;
- (void)replaceRegion:(CDStruct_caaed6bc)arg1 mipmapLevel:(unsigned long long)arg2 slice:(unsigned long long)arg3 withBytes:(const void *)arg4 bytesPerRow:(unsigned long long)arg5 bytesPerImage:(unsigned long long)arg6;
- (id)newTextureViewWithPixelFormat:(unsigned long long)arg1 textureType:(unsigned long long)arg2 levels:(struct _NSRange)arg3 slices:(struct _NSRange)arg4;
- (id)newTextureViewWithPixelFormat:(unsigned long long)arg1;
- (void)getBytes:(void *)arg1 bytesPerRow:(unsigned long long)arg2 fromRegion:(CDStruct_caaed6bc)arg3 mipmapLevel:(unsigned long long)arg4;
- (void)getBytes:(void *)arg1 bytesPerRow:(unsigned long long)arg2 bytesPerImage:(unsigned long long)arg3 fromRegion:(CDStruct_caaed6bc)arg4 mipmapLevel:(unsigned long long)arg5 slice:(unsigned long long)arg6;
- (unsigned long long)setPurgeableState:(unsigned long long)arg1;
- (void)makeAliasable;
- (_Bool)isAliasable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

