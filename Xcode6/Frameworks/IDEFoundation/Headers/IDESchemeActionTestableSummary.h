

#import <IDEFoundation/IDESchemeActionAbstractTestSummaryObject.h>

#import <IDEFoundation/IDESchemeActionTestSummaryContainer-Protocol.h>

@class NSArray, NSMutableArray, NSString;

@interface IDESchemeActionTestableSummary : IDESchemeActionAbstractTestSummaryObject <IDESchemeActionTestSummaryContainer>
{
    NSMutableArray *_tests;
    NSString *_blueprintProviderPath;
    NSString *_blueprintName;
}

+ (void)_countOfSuccessfulTests:(unsigned long long *)arg1 failingTests:(unsigned long long *)arg2 mixedTests:(unsigned long long *)arg3 inSummaryContainer:(id)arg4;
+ (void)countOfSuccessfulTests:(unsigned long long *)arg1 failingTests:(unsigned long long *)arg2 mixedTests:(unsigned long long *)arg3 inSummaries:(id)arg4;
+ (void)_coalesceTestSummariesInContainers:(id)arg1 intoAggregateContainer:(id)arg2;
+ (id)coalescedTestableSummaryForTestableSummariesForSameTestable:(id)arg1;
+ (BOOL)includeDummyTestSummaryInTestableSummary;
+ (void)initialize;
@property(copy) NSString *blueprintName; // @synthesize blueprintName=_blueprintName;
@property(copy) NSString *blueprintProviderPath; // @synthesize blueprintProviderPath=_blueprintProviderPath;
- (BOOL)isSummaryForSameTestableAsSummary:(id)arg1;
- (BOOL)updateWithDictionaryRepresentation:(id)arg1;
@property(readonly) NSMutableArray *mutableContainedTestSummaries;
@property(readonly) NSArray *containedTestSummaries;
- (id)dictionaryRepresentation;
- (id)addNewTestSummaryGroupWithName:(id)arg1 identifier:(id)arg2;
- (id)addNewTestSummaryWithName:(id)arg1 identifier:(id)arg2 status:(unsigned long long)arg3 failureSummaries:(id)arg4 performanceMetrics:(id)arg5;
- (unsigned long long)status;
- (id)initWithDictionaryRepresentation:(id)arg1;
- (id)initWithName:(id)arg1 blueprintProviderPath:(id)arg2 blueprintName:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(copy) NSMutableArray *mutableTests; // @dynamic mutableTests;
@property(copy) NSString *name;
@property(readonly) Class superclass;
@property(copy) NSArray *tests; // @dynamic tests;

@end

