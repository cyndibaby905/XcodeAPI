

#import <Foundation/Foundation.h>

@class DVTWeakInterposer;

@interface _DVTFilePathAssoc : NSObject
{
    _DVTFilePathAssoc *next;
    NSString *role;
    DVTWeakInterposer *_object_dvtWeakInterposer;
    BOOL recursiveObserver;
    CDUnknownBlockType block;
    dispatch_queue_t dispatchQueue;
    NSOperationQueue *operationQueue;
}

- (NSString *)description;
- (void)dealloc;
- (id)initWithRole:(id)arg1 object:(id)arg2 observingDidChangeRecursively:(BOOL)arg3 onOperationQueue:(id)arg4 block:(CDUnknownBlockType)arg5;
- (id)initWithRole:(id)arg1 object:(id)arg2 observingDidChangeRecursively:(BOOL)arg3 onDispatchQueue:(id)arg4 block:(CDUnknownBlockType)arg5;
@property __weak id object;

@end

