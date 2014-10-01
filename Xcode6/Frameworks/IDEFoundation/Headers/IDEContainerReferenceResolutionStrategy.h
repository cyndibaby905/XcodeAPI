

#import <DVTFoundation/DVTReferenceResolutionStrategy.h>

@interface IDEContainerReferenceResolutionStrategy : DVTReferenceResolutionStrategy
{
}

+ (id)currentSDKRelativeContainerResolutionStrategy;
+ (id)developerDirectoryRelativeContainerResolutionStrategy;
+ (id)buildProductsRelativeContainerResolutionStrategy;
+ (id)pathRelativeContainerResolutionStrategy;
+ (id)containerItselfContainerResolutionStrategy;
+ (id)containerRelativeContainerResolutionStrategy;
+ (id)groupRelativeContainerResolutionStrategy;
+ (id)absoluteContainerResolutionStrategy;
- (id)resolveInput:(id)arg1 forContainer:(id)arg2 group:(id)arg3 inContext:(id)arg4 usingSnapshot:(id)arg5 error:(id *)arg6;
- (id)resolveInput:(id)arg1 inContext:(id)arg2 usingSnapshot:(id)arg3 error:(id *)arg4;
- (BOOL)canResolveInputInBackground;

@end

