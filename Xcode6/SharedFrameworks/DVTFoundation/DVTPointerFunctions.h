

#import <Foundation/Foundation.h>

@interface DVTPointerFunctions : NSObject <NSCopying>
{
}

+ (id)pointerFunctionsWithOptions:(int)arg1;
+ (id)allocWithZone:(struct _NSZone *)arg1;
@property BOOL usesWeakReadAndWriteBarriers;
@property BOOL usesStrongWriteBarrier;
@property CDUnknownFunctionPointerType relinquishFunction;
@property CDUnknownFunctionPointerType acquireFunction;
@property CDUnknownFunctionPointerType descriptionFunction;
@property CDUnknownFunctionPointerType isEqualFunction;
@property CDUnknownFunctionPointerType hashFunction;
@property CDUnknownFunctionPointerType sizeFunction;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithOptions:(int)arg1;

@end

