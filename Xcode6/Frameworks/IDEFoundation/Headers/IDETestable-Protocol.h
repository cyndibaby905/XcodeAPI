

#import <DVTFoundation/DVTInvalidation-Protocol.h>
#import <IDEFoundation/IDETestContainer-Protocol.h>
#import <Foundation/Foundation.h>

@class IDETest, IDETestRunner, IDEWorkspace, NSSet, NSString, NSURL;

@protocol IDETestable <IDETestContainer, DVTInvalidation, NSObject>
@property(readonly) BOOL isSearchingForTests;
@property(readonly) BOOL usesXCTest;
@property(readonly) NSSet *testFiles;
@property(readonly) NSString *name;
@property(readonly) id <IDETestableProvider> testableProvider;
- (void)removeSubtest:(IDETest *)arg1;
- (BOOL)canHaveSubtestsForTestWithIdentifier:(NSString *)arg1;
- (IDETest *)supertestForTestWithIdentifier:(NSString *)arg1;
- (NSString *)nameForTestWithIdentifier:(NSString *)arg1;
- (NSSet *)testsInFile:(NSURL *)arg1;
- (IDETest *)testForIdentifier:(NSString *)arg1 createIfNeeded:(BOOL)arg2;
- (IDETest *)testForIdentifier:(NSString *)arg1;
- (id <IDEBuildable>)parentBuildableInWorkspace:(IDEWorkspace *)arg1;
- (id <IDEBuildableProduct>)testHostBuildableInWorkspace:(IDEWorkspace *)arg1;
- (id <IDEBuildable>)primaryBuildable;
- (void)waitUntilTestSearchIsFinished;
- (void)searchForTestsInWorkspace:(IDEWorkspace *)arg1;
- (IDETestRunner *)newTestRunner;
@end

