

#import <Foundation/Foundation.h>

@interface DVTSourceNodeTypes : NSObject
{
}

+ (BOOL)nodeType:(short)arg1 conformsToNodeTypesInList:(long long *)arg2;
+ (long long *)nodeTypeListForTypeNames:(id)arg1;
+ (BOOL)nodeType:(short)arg1 conformsToNodeTypeNamed:(id)arg2;
+ (long long)nodeTypesCount;
+ (id)nodeTypeNameForId:(short)arg1;
+ (short)registerNodeTypeNamed:(id)arg1;
+ (void)initialize;

@end

