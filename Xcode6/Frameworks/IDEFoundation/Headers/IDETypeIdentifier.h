

#import <Foundation/Foundation.h>

@class NSArray, NSString;

@interface IDETypeIdentifier : NSObject
{
    NSString *_stringRepresentation;
    NSArray *_subTypes;
    IDETypeIdentifier *_parentType;
}

+ (id)typeIdentifierForStringRepresentation:(id)arg1;
+ (id)registerTypeIdentifierWithStringRepresentation:(id)arg1 basedOn:(id)arg2;
+ (id)_registerTypeIdentifierWithStringRepresentation:(id)arg1 basedOn:(id)arg2;
+ (id)_rootType;
+ (void)_registerBasicTypeIdentifiers;
@property(retain) IDETypeIdentifier *parentType; // @synthesize parentType=_parentType;
@property(retain) NSArray *subTypes; // @synthesize subTypes=_subTypes;
@property(copy) NSString *stringRepresentation; // @synthesize stringRepresentation=_stringRepresentation;
- (id)typeIdentifierLineage;
- (BOOL)isEqual:(id)other;
- (BOOL)isKindOfType:(id)arg1;
- (void)addSubType:(id)arg1;
- (NSString *)description;
- (id)initWithStringRepresentation:(id)arg1;

@end

