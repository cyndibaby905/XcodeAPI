

#import <IDEFoundation/IDECommandLineVerb.h>

@interface IDESDKInfoCommandLineVerb : IDECommandLineVerb
{
}

+ (int)_printVerboseInfoForSDK:(id)arg1 inEnvironment:(id)arg2 keysToEmit:(id)arg3;
+ (void)_enumerateAllPlatformsAlphabeticallyWithBlock:(CDUnknownBlockType)arg1;
+ (int)performWithEnvironment:(id)arg1;
+ (id)optionDefinitionsWithEnvironment:(id)arg1;

@end

