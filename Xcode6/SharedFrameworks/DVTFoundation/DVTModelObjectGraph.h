

#import <Foundation/Foundation.h>

@interface DVTModelObjectGraph : NSObject
{
    NSString *_name;
    NSOperationQueue *_asyncQueue;
    NSOperationQueue *_changeQueue;
    dispatch_queue_t _asyncDispatchQueue;
    dispatch_queue_t _changeDispatchQueue;
    NSMutableSet *_insertedObjects;
    NSMutableSet *_updatedObjects;
    NSMutableSet *_deletedObjects;
    BOOL _coalescePending;
    BOOL _changeNotificationsAreSuspended;
    BOOL _hasPendingChanges;
}

+ (BOOL)automaticallyNotifiesObserversOfHasPendingChanges;
@property(readonly) BOOL hasPendingChanges; // @synthesize hasPendingChanges=_hasPendingChanges;
@property(readonly) dispatch_queue_t changeDispatchQueue; // @synthesize changeDispatchQueue=_changeDispatchQueue;
@property(readonly) dispatch_queue_t asyncDispatchQueue; // @synthesize asyncDispatchQueue=_asyncDispatchQueue;
@property(readonly) NSOperationQueue *changeQueue; // @synthesize changeQueue=_changeQueue;
@property(readonly) NSOperationQueue *asyncQueue; // @synthesize asyncQueue=_asyncQueue;
@property(readonly, copy) NSString *name; // @synthesize name=_name;
- (void)didDeleteModelObject:(id)arg1;
- (void)didUpdateModelObject:(id)arg1;
- (void)didInsertModelObject:(id)arg1;
- (void)performBlockCoalescingModelChanges:(CDUnknownBlockType)arg1;
- (void)_processPendingChanges;
- (void)_locked_coalesceUpdates;
- (void)_coalescingTick;
- (void)_disassociateModelObject:(id)arg1;
- (void)_associateModelObject:(id)arg1;
- (NSString *)description;
- (id)initWithName:(id)arg1 asyncDispatchQueue:(id)arg2 changeDispatchQueue:(id)arg3;
- (id)initWithName:(id)arg1 asyncQueue:(id)arg2 changeQueue:(id)arg3;

@end

