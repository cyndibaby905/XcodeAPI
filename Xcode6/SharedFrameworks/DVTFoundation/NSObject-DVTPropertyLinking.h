

#import <Foundation/Foundation.h>

@interface NSObject (DVTPropertyLinking)
- (void)dvt_removeObserverWithName:(id)arg1 fromKeyPath:(id)arg2 ofObject:(id)arg3;
- (void)dvt_addObserverWithName:(id)arg1 toKeyPath:(id)arg2 ofObject:(id)arg3 block:(CDUnknownBlockType)arg4;
@end

