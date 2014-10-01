

#import <Foundation/Foundation.h>

@class NSArray, NSMutableSet;

@interface _IDETestRunPerTestableSessionState : NSObject
{
    NSArray *_skippedTestIDList;
    NSMutableSet *_skippedTestIDs;
    NSMutableSet *_pendingRunTestIDs;
    NSMutableSet *_alreadyRunTestIDs;
}

@property(readonly, retain) NSMutableSet *alreadyRunTestIDs; // @synthesize alreadyRunTestIDs=_alreadyRunTestIDs;
@property(readonly, retain) NSMutableSet *pendingRunTestIDs; // @synthesize pendingRunTestIDs=_pendingRunTestIDs;
@property(readonly, retain) NSMutableSet *skippedTestIDs; // @synthesize skippedTestIDs=_skippedTestIDs;
@property(readonly, retain) NSArray *skippedTestIDList; // @synthesize skippedTestIDList=_skippedTestIDList;
- (BOOL)_testIsPendingRun:(id)arg1;
- (void)_updateStatisticsForTestable:(id)arg1;
- (void)_addRunTest:(id)arg1;
- (id)initWithSkippedTestList:(id)arg1;

@end

