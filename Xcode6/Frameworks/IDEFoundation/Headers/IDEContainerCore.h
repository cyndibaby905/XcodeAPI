

#import <Foundation/Foundation.h>

#import <IDEFoundation/IDEContainerCore.h>

@class DVTExtension, DVTFilePath, DVTStackBacktrace, NSString;

@interface IDEContainerCore : NSObject <IDEContainerCore>
{
    DVTFilePath *_filePath;
    DVTExtension *_containerExtension;
    int _currentActivity;
}

+ (void)_invalidateContainerCore:(id)arg1;
+ (void)_releaseContainerCore:(id)arg1;
+ (void)_retainContainerCore:(id)arg1;
+ (BOOL)_closeContainerCoreIfNeeded:(id)arg1;
+ (void)_removeReferencesToContainerCore:(id)arg1;
+ (void)_decrementCountForContainerCore:(id)arg1;
+ (void)_incrementCountForContainerCore:(id)arg1;
+ (unsigned long long)_countForContainerCore:(id)arg1;
+ (id)_openContainerCores;
+ (id)containerDataFilePathsForFilePath:(id)arg1;
+ (BOOL)supportsFilePersistence;
+ (id)containerFileType;
+ (BOOL)isContainerCoreOpenForFilePath:(id)arg1;
+ (id)retainedContainerCoreForFilePath:(id)arg1;
+ (id)retainedContainerCoreAtFilePath:(id)arg1 ofType:(id)arg2 error:(id *)arg3;
+ (id)containerExtensionForFileDataType:(id)arg1;
+ (void)initialize;
- (id)filePath;
- (id)containerExtension;
- (id)rootGroup;
- (int)currentActivity;
- (void)primitiveInvalidate;
- (void)releaseContainerCore;
- (void)retainContainerCore;
- (void)_saveContainerCoreIfNeeded;
- (id)init;
- (id)initWithFilePath:(id)arg1 extension:(id)arg2 error:(id *)arg3;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end

