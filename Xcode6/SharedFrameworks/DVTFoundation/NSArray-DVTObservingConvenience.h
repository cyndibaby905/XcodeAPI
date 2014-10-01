

#import <Foundation/Foundation.h>

@interface NSArray (DVTObservingConvenience)
- (id)dvt_newObserverForKeyPath:(id)arg1 options:(unsigned long long)arg2 withHandlerBlock:(CDUnknownBlockType)arg3;
- (id)dvt_newObserverForKeyPath:(id)arg1 options:(unsigned long long)arg2 owner:(id)arg3 withHandlerBlock:(CDUnknownBlockType)arg4;
- (void)dvt_addObserverForKeyPath:(id)arg1 options:(unsigned long long)arg2 owner:(id)arg3 withHandlerBlock:(CDUnknownBlockType)arg4;
@end

