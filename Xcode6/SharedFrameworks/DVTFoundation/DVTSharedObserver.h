

#import <Foundation/Foundation.h>

@class DVTMapTable, NSString;

@interface DVTSharedObserver : NSObject
{
    NSString *_keyPath;
    id _object;
    DVTMapTable *_registeredObservers;
}

@property(readonly) BOOL _hasRegisteredObservers;
- (void)_removeObserver:(id)arg1 forName:(id)arg2;
- (void)_setObserver:(id)arg1 forName:(id)arg2 handlerBlock:(CDUnknownBlockType)arg3;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (id)_handlerInfoForObserver:(id)arg1;
- (void)dealloc;
- (id)_initWithObservedObject:(id)arg1 keyPath:(id)arg2;

@end

