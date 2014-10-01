

#import <Foundation/Foundation.h>

@class NSString;

@interface _IDEUnitTestParserValidator : NSObject
{
    int _type;
    NSString *_identifier;
}

+ (id)errorDescriptionForEvent:(int)arg1;
+ (id)validatorWithType:(int)arg1 andIdentifier:(id)arg2;
@property(retain) NSString *identifier; // @synthesize identifier=_identifier;
@property int type; // @synthesize type=_type;
- (NSString *)description;
- (BOOL)validateEvent:(int)arg1;

@end

