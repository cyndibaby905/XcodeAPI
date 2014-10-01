

#import <DVTFoundation/DVTDeveloperAccount.h>

@interface DVTAppleIDBasedDeveloperAccount : DVTDeveloperAccount
{
}

+ (id)accountWithCredentials:(id)arg1;
- (id)_sessionByLoggingIn:(id *)arg1;
- (id)propertyListRepresentation;
- (BOOL)isEqual:(id)other;
- (NSUInteger)hash;

@end

