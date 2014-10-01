

#import <DVTFoundation/DVTCSourceModelParser.h>

@interface DVTObjCSourceModelParser : DVTCSourceModelParser
{
}

+ (void)initialize;
+ (id)createTerminalNodeForToken:(CDStruct_341fcc3f *)arg1 scopeProductionRule:(id *)arg2;
+ (void)initializeLexerModes;
+ (id)languageSpecification;
- (void)_resetLexerWithInputString:(id)arg1;
- (id)init;

@end
