

#import <Foundation/Foundation.h>

@interface NSData (DVTSecurityAdditions)
- (id)dvt_dataDecryptedWithKey:(struct OpaqueSecKeyRef *)arg1 error:(id *)arg2;
- (id)dvt_dataEncryptedWithKey:(struct OpaqueSecKeyRef *)arg1 error:(id *)arg2;
@end

