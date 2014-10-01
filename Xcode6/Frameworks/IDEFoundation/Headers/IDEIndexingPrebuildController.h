

#import <Foundation/Foundation.h>

@class IDEIndex;

@interface IDEIndexingPrebuildController : NSObject
{
    IDEIndex *_index;
    dispatch_queue_t _queue;
    BOOL _hasInitiatedPrebuild;
    BOOL _hasPerformedPrebuild;
}

@property BOOL hasPerformedPrebuild; // @synthesize hasPerformedPrebuild=_hasPerformedPrebuild;
- (void)cancelAnyPrebuild;
- (void)needsPrebuild;
- (void)initiatePrebuild;
- (id)initWithIndex:(id)arg1;

@end

