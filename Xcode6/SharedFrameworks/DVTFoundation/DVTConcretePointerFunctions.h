

#import <DVTFoundation/DVTPointerFunctions.h>

__attribute__((visibility("hidden")))
@interface DVTConcretePointerFunctions : DVTPointerFunctions
{
    struct DVTSlice slice;
}

+ (_Bool)initializeSlice:(struct DVTSlice *)arg1 withOptions:(int)arg2;
+ (void)initializeBackingStore:(struct DVTSlice *)arg1 sentinel:(BOOL)arg2 compactable:(BOOL)arg3;
- (BOOL)usesWeakReadAndWriteBarriers;
- (BOOL)usesStrongWriteBarrier;
- (CDUnknownFunctionPointerType)relinquishFunction;
- (CDUnknownFunctionPointerType)acquireFunction;
- (CDUnknownFunctionPointerType)descriptionFunction;
- (CDUnknownFunctionPointerType)isEqualFunction;
- (CDUnknownFunctionPointerType)hashFunction;
- (CDUnknownFunctionPointerType)sizeFunction;
- (void)setUsesWeakReadAndWriteBarriers:(BOOL)arg1;
- (void)setUsesStrongWriteBarrier:(BOOL)arg1;
- (void)setRelinquishFunction:(CDUnknownFunctionPointerType)arg1;
- (void)setAcquireFunction:(CDUnknownFunctionPointerType)arg1;
- (void)setDescriptionFunction:(CDUnknownFunctionPointerType)arg1;
- (void)setIsEqualFunction:(CDUnknownFunctionPointerType)arg1;
- (void)setHashFunction:(CDUnknownFunctionPointerType)arg1;
- (void)setSizeFunction:(CDUnknownFunctionPointerType)arg1;
- (BOOL)isEqual:(id)other;
- (NSUInteger)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithOptions:(int)arg1;

@end

