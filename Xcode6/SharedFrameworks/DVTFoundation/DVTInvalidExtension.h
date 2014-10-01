

#import <DVTFoundation/DVTExtension.h>

@interface DVTInvalidExtension : DVTExtension
{
}

+ (void)initialize;
- (BOOL)hasValueForKey:(id)arg1;
- (id)valueForKey:(id)arg1;
- (id)extensionElement;
- (id)basedOnExtension;
- (id)extensionPoint;
- (id)plugIn;
- (BOOL)isValid;
- (id)bundle;
- (id)initWithIdentifier:(id)arg1;
- (void)_throwInvalidExtensionExceptionForProperty:(id)arg1;

@end

