

#import <DVTFoundation/DVTMacroExpansionRetrievalOperator.h>

@class NSError;

@interface DVTMacroExpansionRetrievalOperatorWithParseError : DVTMacroExpansionRetrievalOperator
{
    NSError *_parseError;
}

+ (id)operatorName;
- (id)stringByApplyingOperatorToString:(id)arg1 inMacroExpansionScope:(id)arg2;
- (id)parseError;
- (id)initWithParseError:(id)arg1;

@end

