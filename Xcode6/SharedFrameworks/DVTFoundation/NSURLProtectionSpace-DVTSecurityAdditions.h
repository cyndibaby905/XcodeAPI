

#import <Foundation/Foundation.h>

@interface NSURLProtectionSpace (DVTSecurityAdditions)
- (unsigned int)dvt_secProtocol;
- (unsigned int)dvt_secAuthentication;
@end

