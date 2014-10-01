

#import <DVTFoundation/DVTFileDataType.h>

@class NSString;

@interface DVTPrimitiveFileDataType : DVTFileDataType
{
    unsigned long long _number;
    NSString *_identifier;
    NSString *_displayName;
}

- (NSString *)description;
- (id)stringRepresentation;
- (id)secondaryFileDataTypes;
- (id)primaryFileDataType;
- (id)displayName;
- (id)identifier;
- (BOOL)isEqual:(id)other;
- (id)init;
- (id)initWithIdentifier:(id)arg1;
- (id)initWithIdentifier:(id)arg1 displayName:(id)arg2 conformingToTypes:(id)arg3;

@end

