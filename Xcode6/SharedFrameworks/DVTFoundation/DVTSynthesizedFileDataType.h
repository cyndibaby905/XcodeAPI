

#import <DVTFoundation/DVTFileDataType.h>

@class DVTPrimitiveFileDataType, NSSet;

@interface DVTSynthesizedFileDataType : DVTFileDataType
{
    DVTPrimitiveFileDataType *_primaryType;
    NSSet *_secondaryTypes;
}

- (NSString *)description;
- (id)stringRepresentation;
- (id)secondaryFileDataTypes;
- (id)primaryFileDataType;
- (id)init;
- (id)initWithPrimaryType:(id)arg1 secondaryTypes:(id)arg2;

@end

