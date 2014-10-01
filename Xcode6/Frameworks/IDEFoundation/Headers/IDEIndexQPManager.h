

#import <Foundation/Foundation.h>

@class IDEIndex;

@interface IDEIndexQPManager : NSObject
{
    IDEIndex *_index;
    dispatch_queue_t _qp_queue;
    NSMutableArray *_masterBlocks;
    NSMutableArray *_recentQueryProviders;
    NSTimer *_purgeTimer;
}

+ (void)initialize;
@property(readonly, nonatomic) IDEIndex *index; // @synthesize index=_index;
- (void)_logRecents;
- (void)_cancelPurgeTimer;
- (void)_purgeTimeout:(id)arg1;
- (void)_scheduleQPPurge;
- (void)_addQueryProviderToRecents:(id)arg1 highPriority:(BOOL)arg2;
- (void)purgeQPsUsingPCH:(id)arg1;
- (void)purgeAllQPs;
- (id)queryProviderForFile:(id)arg1 highPriority:(BOOL)arg2;
- (void)dealloc;
- (id)initWithIndex:(id)arg1;

@end

