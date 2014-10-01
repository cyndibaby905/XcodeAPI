

#import <Foundation/Foundation.h>

@interface NSMapTable (DVTNSMapTableAdditions)
+ (id)dvt_strongObjectToStrongObjectTable;
+ (id)dvt_strongObjectPointerToStrongObjectTable;
- (void)dvt_addObject:(id)arg1 toArrayForKey:(id)arg2;
- (id)dvt_collectionOfClass:(Class)arg1 forKey:(id)arg2;
- (id)dvt_removeObjectForKey:(id)arg1;
- (void)dvt_enumerateKeysAndObjectsUsingBlock:(CDUnknownBlockType)arg1;
- (id)dvt_allValues;
- (id)dvt_allKeys;
@end

