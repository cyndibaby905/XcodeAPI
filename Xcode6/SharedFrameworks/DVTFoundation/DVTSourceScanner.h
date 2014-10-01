

#import <Foundation/Foundation.h>

@class DVTLanguageSpecification, NSArray, NSMutableArray;

@interface DVTSourceScanner : NSObject
{
    DVTLanguageSpecification *_langSpec;
    NSMutableArray *_includedRules;
    DVTSourceScanner *_lexer;
    long long _langId;
    long long _token;
    unsigned int _nodeType:16;
    unsigned int _altNodeType:16;
    unsigned int _startAtBOL:1;
    unsigned int _startAtColumnZero:1;
    unsigned int _isFoldable:1;
    unsigned int _ignoreToken:1;
    unsigned int _inheritsNodeType:1;
    unsigned int _altIgnoreToken:1;
    unsigned int _altInheritsNodeType:1;
    unsigned int _needToDirtyRightEdges:1;
}

+ (void)initialize;
@property(readonly) DVTLanguageSpecification *langSpec; // @synthesize langSpec=_langSpec;
@property(readonly) DVTSourceScanner *lexer; // @synthesize lexer=_lexer;
@property(readonly) long long token; // @synthesize token=_token;
@property(readonly) long long langId; // @synthesize langId=_langId;
- (NSRange)wordRangeInString:(id)arg1 fromIndex:(unsigned long long)arg2;
- (NSRange)wordRangeInString:(id)arg1 fromIndex:(unsigned long long)arg2 allowNonWords:(BOOL)arg3;
- (BOOL)canTokenize;
- (id)parse:(id)arg1 withContext:(id)arg2 initialToken:(long long)arg3 inputStream:(id)arg4 range:(NSRange)arg5 dirtyRange:(NSRange *)arg6;
- (BOOL)predictsRule:(long long)arg1 inputStream:(id)arg2;
- (void)parseIncludedRules:(id)arg1 inTree:(id)arg2 withContext:(id)arg3 initialToken:(long long)arg4 inputStream:(id)arg5 range:(NSRange)arg6 dirtyRange:(NSRange *)arg7;
- (long long)parseOneIncludedRule:(id)arg1 inTree:(id)arg2 withContext:(id)arg3 initialToken:(long long)arg4 inputStream:(id)arg5 range:(NSRange)arg6 dirtyRange:(NSRange *)arg7 isLexing:(BOOL)arg8 reusedToken:(char *)arg9;
- (id)nodeForThisScanner:(id)arg1 atLocation:(unsigned long long)arg2 inputStream:(id)arg3;
- (id)nodeToReuse:(id)arg1 forScanner:(id)arg2 inputStream:(id)arg3;
@property(readonly) NSArray *includedRules; // @synthesize includedRules=_includedRules;
- (NSString *)description;
- (id)initWithLanguageSpecification:(id)arg1;
- (id)initWithPropertyListDictionary:(id)arg1 language:(long long)arg2;

@end
