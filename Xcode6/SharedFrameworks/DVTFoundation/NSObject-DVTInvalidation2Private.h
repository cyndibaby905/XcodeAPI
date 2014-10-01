

#import <Foundation/Foundation.h>

@interface NSObject (DVTInvalidation2Private)
+ (void)_dvt_synthesizeInvalidationWithoutDeallocAssertion;
+ (id)_dvt_invalidatableClasses;
@end

