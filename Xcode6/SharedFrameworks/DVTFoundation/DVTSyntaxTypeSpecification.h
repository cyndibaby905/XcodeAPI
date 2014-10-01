

#import <DVTFoundation/DVTSourceSpecification.h>

@class NSString;

@interface DVTSyntaxTypeSpecification : DVTSourceSpecification
{
    NSString *_urlFormat;
    NSString *_nameFormat;
    NSString *_colorName;
    BOOL _inheritsNodeType;
    BOOL _isMark;
    BOOL _includeInPreferences;
    BOOL _ignoreToken;
    BOOL _isLink;
}

+ (id)specificationRegistryName;
+ (id)specificationTypePathExtensions;
+ (id)localizedSpecificationTypeName;
+ (id)specificationType;
+ (Class)specificationTypeBaseClass;
@property(copy) NSString *colorName; // @synthesize colorName=_colorName;
@property(copy) NSString *nameFormat; // @synthesize nameFormat=_nameFormat;
@property(copy) NSString *urlFormat; // @synthesize urlFormat=_urlFormat;
@property(readonly) BOOL isLink; // @synthesize isLink=_isLink;
@property(readonly) BOOL ignoreToken; // @synthesize ignoreToken=_ignoreToken;
@property(readonly) BOOL includeInPreferences; // @synthesize includeInPreferences=_includeInPreferences;
@property(readonly) BOOL isMark; // @synthesize isMark=_isMark;
@property(readonly) BOOL inheritsNodeType; // @synthesize inheritsNodeType=_inheritsNodeType;
- (id)initWithPropertyListDictionary:(id)arg1;

@end

