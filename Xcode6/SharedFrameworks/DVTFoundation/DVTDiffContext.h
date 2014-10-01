

#import <Foundation/Foundation.h>

#import <DVTFoundation/DVTInvalidation-Protocol.h>

@class DVTDiffDataSource, DVTObservingToken, DVTStackBacktrace, NSArray, NSIndexSet, NSMutableArray, NSOperationQueue, NSString;

@interface DVTDiffContext : NSObject <DVTInvalidation>
{
    DVTDiffDataSource *_originalDataSource;
    DVTDiffDataSource *_modifiedDataSource;
    DVTObservingToken *_originalDataSourceObserver;
    DVTObservingToken *_modifiedDataSourceObserver;
    NSMutableArray *_diffDescriptors;
    NSMutableArray *_tmpDiffDescriptors;
    NSOperationQueue *_diffQueue;
    unsigned long long _timestamp;
    int _needsUpdate;
    struct _DVTDiffContextFlags _dcFlags;
    int _defaultDiffMergeDirection;
    BOOL _shouldGenerateSubdiffDescriptors;
    BOOL _isRestoringState;
    BOOL _updatingChangedDescriptor;
}

+ (void)initialize;
+ (id)performanceLogAspect;
@property BOOL isRestoringState; // @synthesize isRestoringState=_isRestoringState;
@property(retain) NSMutableArray *tmpDiffDescriptors; // @synthesize tmpDiffDescriptors=_tmpDiffDescriptors;
@property unsigned long long timestamp; // @synthesize timestamp=_timestamp;
- (void)_dumpDataSources;
- (void)copyDiffResultsWithDiffString:(CDUnknownBlockType)arg1;
- (void)copyDiffResults:(CDUnknownBlockType)arg1;
- (void)_waitOnAllPendingDiffQueueOperations;
@property(readonly) NSString *diffString;
- (id)diffStringForDescriptorInRange:(NSRange)arg1;
- (id)diffStringForDescriptorInRange:(NSRange)arg1 options:(id)arg2;
- (id)diffStringForDescriptors:(id)arg1 options:(id)arg2;
- (id)diffDescriptorIndexesForModifiedTokenRange:(NSRange)arg1;
- (id)diffDescriptorIndexesForOriginalTokenRange:(NSRange)arg1;
- (long long)numberOfModifiedDescriptors;
- (long long)numberOfCommonDescriptors;
- (long long)numberOfDiffDescriptors;
- (void)_buildDiffDescriptors;
- (void)_buildSubdescriptors;
- (struct __CFStorage *)_createLCSStorageInDiffDescriptor:(id)arg1 startIndex:(long long *)arg2;
- (id)tmpModifiedDescriptorIndexes;
@property(readonly) NSIndexSet *modifiedDescriptorIndexes;
@property(readonly) NSIndexSet *commonDescriptorIndexes;
- (void)setNeedsUpdateDiffDescriptors:(BOOL)arg1;
- (void)_internalBuildDiffDescriptors;
@property(readonly, copy) NSString *description;
- (struct _DVTDiffContextFlags)dcFlags;
- (void)setDcFlags:(struct _DVTDiffContextFlags)arg1;
@property int defaultDiffMergeDirection;
@property BOOL shouldGenerateSubdiffDescriptors;
@property BOOL ignoresCommon;
@property BOOL ignoresLineEnds;
@property BOOL ignoresTrailingSpaces;
@property BOOL ignoresSpacesInRuns;
@property BOOL ignoresLeadingSpaces;
@property BOOL ignoresCase;
@property(retain) DVTDiffDataSource *modifiedDataSource;
- (BOOL)_setModifiedDataSource:(id)arg1;
@property(retain) DVTDiffDataSource *originalDataSource;
- (BOOL)_setOriginalDataSource:(id)arg1;
- (void)setUpdatingChangedDescriptor:(BOOL)arg1;
- (BOOL)updatingChangedDescriptor;
- (void)setDiffQueue:(id)arg1;
- (id)diffQueue;
- (id)_observeDataSource:(id)arg1;
- (void)primitiveInvalidate;
- (id)init;
- (id)initWithOriginalDataSource:(id)arg1 modifiedDataSource:(id)arg2;
- (id)initWithOriginalDataSource:(id)arg1 modifiedDataSource:(id)arg2 updatesDescriptorsImmediately:(BOOL)arg3;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(copy) NSArray *diffDescriptors; // @dynamic diffDescriptors;
@property(readonly) unsigned long long hash;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly, copy) NSMutableArray *mutableDiffDescriptors; // @dynamic mutableDiffDescriptors;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end

