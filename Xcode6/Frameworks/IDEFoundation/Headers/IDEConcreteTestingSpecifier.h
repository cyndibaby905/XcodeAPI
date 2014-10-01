

#import <Foundation/Foundation.h>

#import <IDEFoundation/IDETestingSpecifier-Protocol.h>

@class DVTObservingToken, IDEDeviceAppDataReference, IDELocationScenarioReference, NSArray, NSMutableArray, NSString;

@protocol IDETestable;

@interface IDEConcreteTestingSpecifier : NSObject <IDETestingSpecifier>
{
    id <IDETestable> _testable;
    NSMutableArray *_skippedTests;
    IDEDeviceAppDataReference *_deviceAppDataReference;
    IDELocationScenarioReference *_locationScenarioReference;
    DVTObservingToken *_buildableValidityObservingToken;
    BOOL _skipped;
}

+ (void)initialize;
@property BOOL skipped;
@property(retain) IDELocationScenarioReference *locationScenarioReference;
@property(retain) IDEDeviceAppDataReference *deviceAppDataReference;
- (id)testable;
- (id)initWithTestable:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) NSMutableArray *mutableSkippedTests; // @dynamic mutableSkippedTests;
@property(copy) NSArray *skippedTests; // @dynamic skippedTests;
@property(readonly) Class superclass;

@end

