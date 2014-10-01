

#import <Foundation/Foundation.h>

@class NSArray, NSString;

@interface DVTCommandLineParser : NSObject
{
    NSString *_usageBanner;
    NSArray *_optionDefinitions;
    CDUnknownBlockType _fallbackOptionHandlerBlock;
}

@property(copy) CDUnknownBlockType fallbackOptionHandlerBlock; // @synthesize fallbackOptionHandlerBlock=_fallbackOptionHandlerBlock;
@property(copy) NSArray *optionDefinitions; // @synthesize optionDefinitions=_optionDefinitions;
@property(copy) NSString *usageBanner; // @synthesize usageBanner=_usageBanner;
- (id)usageString;
- (id)parseArguments:(id)arg1 intoOptionsDictionary:(id)arg2 error:(id *)arg3;
- (id)lookUpOptionDefinitionForArgument:(id)arg1;
- (id)init;

@end

