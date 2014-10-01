

#import <IDEFoundation/IDESchemeActionAbstractTestSummaryObject.h>

#import <IDEFoundation/IDESchemeActionTestSummaryContainer-Protocol.h>

@interface IDESchemeActionTestSummaryGroup : IDESchemeActionAbstractTestSummaryObject <IDESchemeActionTestSummaryContainer>
{
    NSMutableArray *_subtests;
    NSString *_identifier;
}

+ (void)initialize;
@property(copy) NSString *identifier; // @synthesize identifier=_identifier;
@property(readonly) NSMutableArray *mutableContainedTestSummaries;
@property(readonly) NSArray *containedTestSummaries;
- (BOOL)updateWithDictionaryRepresentation:(id)arg1;
- (id)dictionaryRepresentation;
- (id)addNewTestSummaryGroupWithName:(id)arg1 identifier:(id)arg2;
- (id)addNewTestSummaryWithName:(id)arg1 identifier:(id)arg2 status:(unsigned long long)arg3 failureSummaries:(id)arg4 performanceMetrics:(id)arg5;
- (unsigned long long)status;
- (id)initWithDictionaryRepresentation:(id)arg1;
- (id)initWithName:(id)arg1 identifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(copy) NSMutableArray *mutableSubtests; // @dynamic mutableSubtests;
@property(copy) NSString *name;
@property(copy) NSArray *subtests; // @dynamic subtests;
@property(readonly) Class superclass;

@end

