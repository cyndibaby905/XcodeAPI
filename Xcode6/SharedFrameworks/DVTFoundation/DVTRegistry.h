

#import <Foundation/Foundation.h>

@class DVTDispatchLock, DVTMutableOrderedDictionary, NSMutableDictionary, NSString;

@interface DVTRegistry : NSObject
{
    DVTDispatchLock *_lock;
    DVTMutableOrderedDictionary *_identsToObjects;
    NSMutableDictionary *_aliasesToObjects;
    NSString *_debugName;
}

@property(readonly) DVTDispatchLock *lock; // @synthesize lock=_lock;
- (NSString *)description;
- (id)allRegisteredObjects;
- (id)objectForIdentifier:(id)arg1;
- (void)didRegisterObject:(id)arg1 replacingObject:(id)arg2;
- (BOOL)registerObject:(id)arg1 collisionHandler:(CDUnknownBlockType)arg2;
@property(readonly) NSString *debugName;
- (id)init;
- (id)initWithDebugName:(id)arg1;

@end

