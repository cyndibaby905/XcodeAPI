

#import <Foundation/Foundation.h>

@interface IDETestIdentifierResolver : NSObject
{
}

+ (id)defaultResolver;
- (id)resolvedTestSuiteIdentifierForInputSuiteIdentifier:(id)arg1;
- (id)resolvedTestMethodNameForInputClassName:(id)arg1 methodName:(id)arg2;
- (id)resolvedTestClassNameForInputClassName:(id)arg1;

@end

