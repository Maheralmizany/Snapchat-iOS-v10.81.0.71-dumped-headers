//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCComposerReloaderDelegate-Protocol.h"

@class NSString, SCComposerViewLoader;
@protocol SCComposerDebugMessageDisplayer, SCComposerReloader, SCComposerViewLoaderManagerDelegate, SCNComposerHTTPRequestManager;

@interface SCComposerViewLoaderManager : NSObject <SCComposerReloaderDelegate>
{
    struct unique_ptr<Composer::ViewLoaderManager, std::__1::default_delete<Composer::ViewLoaderManager>> _cppInstance;
    SCComposerViewLoader *_mainViewLoader;
    NSString *_userId;
    NSString *_userIv;
    struct unique_ptr<ComposerIOS::ViewManager, std::__1::default_delete<ComposerIOS::ViewManager>> _viewManagerBridge;
    struct unique_ptr<ComposerIOS::Logger, std::__1::default_delete<ComposerIOS::Logger>> _logger;
    struct unique_ptr<ComposerIOS::MainThreadDispatcher, std::__1::default_delete<ComposerIOS::MainThreadDispatcher>> _mainThreadDispatcher;
    struct unique_ptr<ComposerIOS::JavaScriptBridge, std::__1::default_delete<ComposerIOS::JavaScriptBridge>> _jsBridge;
    struct shared_ptr<Composer::DiskCacheImpl> _diskCache;
    id <SCComposerViewLoaderManagerDelegate> _delegate;
    NSString *_currentUsername;
    id <SCComposerReloader> _hotReloader;
    id <SCComposerDebugMessageDisplayer> _debugMessageDisplayer;
    id <SCNComposerHTTPRequestManager> _requestManager;
}

@property(retain, nonatomic) id <SCNComposerHTTPRequestManager> requestManager; // @synthesize requestManager=_requestManager;
@property(retain, nonatomic) id <SCComposerDebugMessageDisplayer> debugMessageDisplayer; // @synthesize debugMessageDisplayer=_debugMessageDisplayer;
@property(retain, nonatomic) id <SCComposerReloader> hotReloader; // @synthesize hotReloader=_hotReloader;
@property(copy, nonatomic) NSString *currentUsername; // @synthesize currentUsername=_currentUsername;
@property(retain, nonatomic) id <SCComposerViewLoaderManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)newDaemonClientForComposerReloader:(id)arg1;
- (void)_willResignActive;
- (void)_didBecomeActive;
- (void)_didReceiveMemoryWarning;
- (void)preloadViewsOfClass:(Class)arg1 count:(long long)arg2;
- (void)clearViewPools;
- (id)createViewLoader;
- (void)unloadAllJsModules;
@property(readonly, nonatomic) SCComposerViewLoader *mainViewLoader;
- (id)userId;
- (void)setUserSessionWithUserId:(id)arg1 userIv:(id)arg2;
- (void)registerViewClassReplacement:(Class)arg1 withViewClass:(Class)arg2;
- (void)dealloc;
- (void)_initializeIfNeeded;
- (void)_updateRequestManager;
- (void)_cacheDirectoryDidChange;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

