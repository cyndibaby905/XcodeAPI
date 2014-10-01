

#import <Foundation/Foundation.h>

@class NSString;

@interface DVTCommandLineOptionDefinition : NSObject
{
    NSString *_name;
    NSString *_usageName;
    NSString *_usageDescription;
    long long _argumentType;
    NSString *_argumentKey;
    CDUnknownBlockType _handlerBlock;
}

+ (id)optionDefinitionWithName:(id)arg1 usageName:(id)arg2 usageDescription:(id)arg3 argumentType:(long long)arg4 argumentKey:(id)arg5 handlerBlock:(CDUnknownBlockType)arg6;
@property(copy) CDUnknownBlockType handlerBlock; // @synthesize handlerBlock=_handlerBlock;
@property(copy) NSString *argumentKey; // @synthesize argumentKey=_argumentKey;
@property long long argumentType; // @synthesize argumentType=_argumentType;
@property(copy) NSString *usageDescription; // @synthesize usageDescription=_usageDescription;
@property(copy) NSString *usageName; // @synthesize usageName=_usageName;
@property(copy) NSString *name; // @synthesize name=_name;
- (BOOL)handleArgument:(id)arg1 remainingArguments:(id)arg2 options:(id)arg3 status:(char *)arg4 error:(id *)arg5;
- (BOOL)matchesArgument:(id)arg1;
- (NSString *)description;
- (id)initWithName:(id)arg1 usageName:(id)arg2 usageDescription:(id)arg3 argumentType:(long long)arg4 argumentKey:(id)arg5 handlerBlock:(CDUnknownBlockType)arg6;

@end

