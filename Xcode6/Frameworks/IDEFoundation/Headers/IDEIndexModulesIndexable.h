

#import <Foundation/Foundation.h>

#import <IDEFoundation/IDEIndexable-Protocol.h>

@class NSString;

@interface IDEIndexModulesIndexable : NSObject <IDEIndexable>
{
}

+ (id)sharedInstance;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)settingsForFile:(id)arg1;
- (id)buildSettingsForMainFile:(id)arg1 workspace:(id)arg2;
- (id)localizedIndexableDescription;
- (void)languageOfMainFile:(id)arg1 workspace:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (BOOL)requiresMainThread;
- (BOOL)writeProductHeaders:(id)arg1 toFile:(id)arg2 error:(id *)arg3;
- (void)productHeadersInWorkspace:(id)arg1 withCompletionBlock:(CDUnknownBlockType)arg2;
- (id)containerForIndexables:(id)arg1 rootPaths:(id)arg2;
- (id)indexableFiles;
- (id)indexName;
- (id)identifier;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(nonatomic) __weak id <IDEIndexable> proxy;
@property(readonly) Class superclass;

@end

