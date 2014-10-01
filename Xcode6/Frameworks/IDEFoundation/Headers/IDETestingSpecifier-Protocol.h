

#import <Foundation/Foundation.h>

@class IDEDeviceAppDataReference, IDELocationScenarioReference, NSArray, NSMutableArray;

@protocol IDETestable;

@protocol IDETestingSpecifier <NSObject>
@property(readonly) NSMutableArray *mutableSkippedTests;
@property(copy) NSArray *skippedTests;
@property BOOL skipped;
@property(retain) IDELocationScenarioReference *locationScenarioReference;
@property(retain) IDEDeviceAppDataReference *deviceAppDataReference;
- (id <IDETestable>)testable;
@end

