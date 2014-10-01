

#import <Foundation/Foundation.h>

#import <DVTFoundation/DVTInvalidation-Protocol.h>
#import <IDEFoundation/IDETestContainer-Protocol.h>

@class DVTDocumentLocation, DVTStackBacktrace, NSArray, NSMutableArray, NSMutableSet, NSSet, NSString;

@interface IDETest : NSObject <IDETestContainer, DVTInvalidation>
{
    NSMutableSet *_subtests;
    NSMutableArray *_cachedArrangedSubtests;
    NSMutableArray *_performanceMetricsForPreviousRun;
    BOOL _canHaveSubtests;
    BOOL _indexLocationWasSet;
    id <IDETestable> _testable;
    NSString *_identifier;
    NSString *_name;
    NSArray *_errorLocations;
    IDETest *_supertest;
    DVTDocumentLocation *_indexLocation;
    NSArray *_recentErrorLocations;
}

+ (id)keyPathsForValuesAffectingLocation;
+ (id)keyPathsForValuesAffectingIsAdHocRunnable;
+ (void)initialize;
@property BOOL indexLocationWasSet; // @synthesize indexLocationWasSet=_indexLocationWasSet;
@property(copy) NSArray *recentErrorLocations; // @synthesize recentErrorLocations=_recentErrorLocations;
@property(copy, nonatomic) DVTDocumentLocation *indexLocation; // @synthesize indexLocation=_indexLocation;
@property BOOL canHaveSubtests; // @synthesize canHaveSubtests=_canHaveSubtests;
@property(readonly) IDETest *supertest; // @synthesize supertest=_supertest;
@property(readonly, copy) NSArray *errorLocations; // @synthesize errorLocations=_errorLocations;
@property(readonly, copy) NSString *name; // @synthesize name=_name;
@property(readonly, copy) NSString *identifier; // @synthesize identifier=_identifier;
@property(readonly) id <IDETestable> testable; // @synthesize testable=_testable;
@property(readonly, copy) NSArray *arrangedSubtests; // @dynamic arrangedSubtests;
- (void)_primitiveRemoveSubtest:(id)arg1;
- (void)_primitiveAddSubtest:(id)arg1;
- (void)_setErrorLocations:(id)arg1;
- (void)_setIndexLocation:(id)arg1;
@property(readonly, copy, nonatomic) DVTDocumentLocation *location; // @dynamic location;
- (void)setPerformanceMetricsForPreviousRun:(id)arg1;
- (id)performanceMetricsForPreviousRun;
@property(readonly) BOOL isAdHocRunnable;
- (long long)localizedStandardCompare:(id)arg1;
@property(readonly) unsigned long long hash;
- (BOOL)isEqual:(id)other;
@property(readonly, copy) NSString *description;
- (id)initWithTestable:(id)arg1 identifier:(id)arg2;
- (void)primitiveInvalidate;
- (BOOL)_isInFile:(id)arg1;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly, copy) NSMutableSet *mutableSubtests; // @dynamic mutableSubtests;
@property(readonly, copy) NSSet *subtests; // @dynamic subtests;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end

