

#import <Foundation/Foundation.h>

@interface NSMutableDictionary (DVTFoundationClassAdditions)
- (void)dvt_recursivelyRemoveAllObjects;
- (void)dvt_setRect:(CGRect)arg1 forKey:(id)arg2;
- (void)dvt_setSize:(CGSize)arg1 forKey:(id)arg2;
- (void)dvt_setPoint:(CGPoint)arg1 forKey:(id)arg2;
- (void)dvt_setDouble:(double)arg1 forKey:(id)arg2;
- (void)dvt_setFloat:(float)arg1 forKey:(id)arg2;
- (void)dvt_setBool:(BOOL)arg1 forKey:(id)arg2;
- (void)dvt_setInteger:(long long)arg1 forKey:(id)arg2;
- (void)dvt_addObject:(id)arg1 toArrayForKey:(id)arg2;
- (void)dvt_setObject:(id)arg1 forKey:(id)arg2 inDictionaryForKey:(id)arg3;
@end

