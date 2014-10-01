

#import <Foundation/Foundation.h>

@interface NSError (DVTSecurityAdditions)
+ (id)dvt_errorWithSecurityErrorCode:(int)arg1;
- (BOOL)dvt_secItemNotFound;
@end

