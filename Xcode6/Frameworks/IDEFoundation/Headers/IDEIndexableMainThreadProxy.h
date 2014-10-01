

#import <Foundation/Foundation.h>

#import <IDEFoundation/IDEIndexable-Protocol.h>

@class NSDictionary, NSString;

@interface IDEIndexableMainThreadProxy : NSObject <IDEIndexable>
{
    id <IDEIndexable> _indexableObject;
    BOOL _respondsToSettingsForFiles;
    NSString *_cachedIdentifier;
    NSString *_cachedIndexName;
    NSDictionary *_cachedSettingsForFiles;
}

@property(retain) id <IDEIndexable> indexableObject; // @synthesize indexableObject=_indexableObject;
- (BOOL)isUnitTest;
- (id)productType;
- (id)productNameWithBuildSetting:(id)arg1 workspace:(id)arg2;
- (id)buildSettingsForMainFile:(id)arg1 workspace:(id)arg2;
- (id)localizedIndexableDescription;
- (void)languageOfMainFile:(id)arg1 workspace:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)clearCachedBuildSettings;
- (void)settingsForFilesInWorkspace:(id)arg1 shouldWriteAuxiliaryFiles:(BOOL)arg2 withCompletionBlock:(CDUnknownBlockType)arg3;
- (BOOL)writeProductHeaders:(id)arg1 toFile:(id)arg2 error:(id *)arg3;
- (void)productHeadersInWorkspace:(id)arg1 withCompletionBlock:(CDUnknownBlockType)arg2;
- (id)containerForIndexables:(id)arg1 rootPaths:(id)arg2;
- (id)indexableFiles;
- (id)indexName;
- (id)identifier;
- (BOOL)requiresMainThread;
@property(readonly, copy) NSString *description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithIndexable:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(nonatomic) __weak id <IDEIndexable> proxy;
@property(readonly) Class superclass;

@end

