

#import <Foundation/Foundation.h>

#import <DVTFoundation/DVTInvalidation-Protocol.h>
#import <IDEFoundation/IDETestable-Protocol.h>

@class DVTStackBacktrace, NSArray, NSMutableArray, NSMutableDictionary, NSMutableSet, NSSet, NSString;

@interface IDEStandardTestable : NSObject <IDETestable, DVTInvalidation>
{
    NSMutableSet *_subtests;
    NSMutableArray *_cachedArrangedSubtests;
    NSMutableDictionary *_testIDsByURL;
    NSMutableDictionary *_testsByID;
}

+ (void)initialize;
@property(readonly, copy) NSMutableDictionary *testsByID; // @synthesize testsByID=_testsByID;
@property(readonly, copy) NSMutableDictionary *testIDsByURL; // @synthesize testIDsByURL=_testIDsByURL;
@property(readonly, copy) NSArray *arrangedSubtests; // @dynamic arrangedSubtests;
- (void)removeSubtest:(id)arg1;
- (void)_recursiveUnregisteringOfSubtest:(id)arg1;
- (void)_primitiveRemoveSubtest:(id)arg1;
- (void)_addSubtest:(id)arg1;
- (void)_primitiveAddSubtest:(id)arg1;
@property(readonly) BOOL canHaveSubtests;
- (BOOL)canHaveSubtestsForTestWithIdentifier:(id)arg1;
- (id)supertestForTestWithIdentifier:(id)arg1;
- (id)supertestForTestWithIdentifier:(id)arg1 createIfNeeded:(BOOL)arg2;
- (id)nameForTestWithIdentifier:(id)arg1;
- (id)testForIdentifier:(id)arg1 createIfNeeded:(BOOL)arg2;
- (id)testForIdentifier:(id)arg1;
- (id)identifierForTestClass:(id)arg1 method:(id)arg2;
- (void)_removeTestIDFromURL:(id)arg1 testID:(id)arg2;
- (void)_updateLocationOfTest:(id)arg1 oldLocation:(id)arg2;
@property(readonly) NSSet *testFiles;
- (id)testsInFile:(id)arg1;
- (id)parentBuildableInWorkspace:(id)arg1;
- (id)testHostBuildableInWorkspace:(id)arg1;
- (id)primaryBuildable;
- (BOOL)matchesBlueprint:(id)arg1;
- (void)waitUntilTestSearchIsFinished;
@property(readonly) BOOL isSearchingForTests;
- (void)searchForTestsInWorkspace:(id)arg1;
- (id)newTestRunner;
@property(readonly) BOOL usesXCTest;
@property(readonly) NSString *name;
@property(readonly) id <IDETestableProvider> testableProvider;
- (void)primitiveInvalidate;
- (id)init;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly, copy) NSMutableSet *mutableSubtests; // @dynamic mutableSubtests;
@property(readonly, copy) NSSet *subtests; // @dynamic subtests;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end

