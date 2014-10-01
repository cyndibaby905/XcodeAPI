

#import <Foundation/Foundation.h>

@interface NSSet (DVTNSSetAdditions)
- (id)dvt_objectByFoldingWithBlock:(CDUnknownBlockType)arg1;
- (id)dvt_sortedArrayUsingComparator:(CDUnknownBlockType)arg1;
- (id)dvt_sortedArrayUsingSelector:(SEL)arg1;
- (id)dvt_sortedArray;
- (id)dvt_onlyObject;
- (BOOL)dvt_isNonEmpty;
- (id)dvt_anyObjectPassingTest:(CDUnknownBlockType)arg1;
- (id)dvt_setByFilteringUsingBlock:(CDUnknownBlockType)arg1;
- (id)dvt_setByApplyingBlockStrictly:(CDUnknownBlockType)arg1;
- (id)dvt_setByApplyingBlock:(CDUnknownBlockType)arg1;
- (id)dvt_setByApplyingSelector:(SEL)arg1;
- (id)dvt_setBySubtractingSet:(id)arg1;
- (id)dvt_setByIntersectingSet:(id)arg1;
- (Class)dvt_mutableClass;
@end

