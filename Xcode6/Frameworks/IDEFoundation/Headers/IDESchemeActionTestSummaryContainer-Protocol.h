

#import <Foundation/Foundation.h>

@class NSArray, NSMutableArray;

@protocol IDESchemeActionTestSummaryContainer <NSObject>
@property(readonly) NSMutableArray *mutableContainedTestSummaries;
@property(readonly) NSArray *containedTestSummaries;
@end

