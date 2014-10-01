

#import <IDEFoundation/IDESchemeActionAbstractTestSummaryObject.h>

@class NSArray, NSString;

@interface IDESchemeActionTestSummary : IDESchemeActionAbstractTestSummaryObject
{
    unsigned long long _status;
    NSString *_identifier;
    NSString *_testSummaryGUID;
    NSArray *_failureSummaries;
    NSArray *_performanceMetrics;
}

+ (unsigned long long)testStatusForString:(id)arg1;
+ (id)stringForTestStatus:(unsigned long long)arg1;
@property(copy) NSArray *performanceMetrics; // @synthesize performanceMetrics=_performanceMetrics;
@property(copy) NSArray *failureSummaries; // @synthesize failureSummaries=_failureSummaries;
@property(copy) NSString *testSummaryGUID; // @synthesize testSummaryGUID=_testSummaryGUID;
@property(copy) NSString *identifier; // @synthesize identifier=_identifier;
@property unsigned long long status; // @synthesize status=_status;
- (BOOL)updateWithDictionaryRepresentation:(id)arg1;
- (id)dictionaryRepresentation;
- (id)initWithDictionaryRepresentation:(id)arg1;
- (id)initWithName:(id)arg1 identifier:(id)arg2 status:(unsigned long long)arg3 failureSummaries:(id)arg4 performanceMetrics:(id)arg5;

// Remaining properties
@property(copy) NSString *name;

@end

