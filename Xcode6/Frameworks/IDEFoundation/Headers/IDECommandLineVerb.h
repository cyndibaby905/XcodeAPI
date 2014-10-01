

#import <Foundation/Foundation.h>

@interface IDECommandLineVerb : NSObject
{
}

+ (int)performWithEnvironment:(id)arg1;
+ (CDUnknownBlockType)fallbackOptionHandlerBlockWithEnvironment:(id)arg1 options:(id)arg2;
+ (id)optionDefinitionsWithEnvironment:(id)arg1;

@end

