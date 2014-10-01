

#import <DVTFoundation/DVTSourceSpecification.h>

@class DVTSourceModelParserProductionRule, DVTSourceScanner, NSDictionary, NSString;

@interface DVTLanguageSpecification : DVTSourceSpecification
{
    long long _uniqueId;
    Class _scannerClass;
    DVTSourceScanner *_scanner;
    NSDictionary *_syntaxRules;
    BOOL _includeInMenu;
    BOOL _usesCLikeIndentation;
    DVTSourceModelParserProductionRule *_productionRule;
    BOOL _preservesTrailingWhitespace;
}

+ (id)identifierForUniqueId:(long long)arg1;
+ (long long)_uniqueIdForIdentifier:(id)arg1;
+ (id)specificationRegistryName;
+ (id)specificationTypePathExtensions;
+ (id)localizedSpecificationTypeName;
+ (id)specificationType;
+ (Class)specificationTypeBaseClass;
@property(readonly) BOOL preservesTrailingWhitespace; // @synthesize preservesTrailingWhitespace=_preservesTrailingWhitespace;
@property(retain) DVTSourceModelParserProductionRule *productionRule; // @synthesize productionRule=_productionRule;
@property(readonly) NSDictionary *syntaxRules; // @synthesize syntaxRules=_syntaxRules;
@property(readonly) Class scannerClass; // @synthesize scannerClass=_scannerClass;
@property(readonly) BOOL usesCLikeIndentation; // @synthesize usesCLikeIndentation=_usesCLikeIndentation;
@property(readonly) BOOL includeInMenu; // @synthesize includeInMenu=_includeInMenu;
@property(readonly) long long uniqueId; // @synthesize uniqueId=_uniqueId;
@property(readonly) NSString *syntaxType;
- (id)availableKeywords;
- (id)lexerKeywords;
@property(readonly) DVTSourceScanner *scanner; // @synthesize scanner=_scanner;
- (id)name;
- (id)initWithPropertyListDictionary:(id)arg1;

@end

