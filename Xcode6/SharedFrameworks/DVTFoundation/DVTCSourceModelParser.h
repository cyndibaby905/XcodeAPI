

#import <DVTFoundation/DVTSourceModelParser.h>

@interface DVTCSourceModelParser : DVTSourceModelParser
{
    void *_lexer;
}

+ (void)initialize;
+ (id)createTerminalNodeForToken:(CDStruct_341fcc3f *)arg1 scopeProductionRule:(id *)arg2;
+ (void)initializeLexerModes;
+ (id)languageSpecification;
- (void)_endLexerMode:(unsigned long long)arg1;
- (void)_beginLexerMode:(unsigned long long)arg1;
- (BOOL)_getNextToken:(CDStruct_341fcc3f *)arg1 temporaryFlags:(unsigned long long)arg2;
- (unsigned long long)_currentLocation;
- (void)_setCurrentLocation:(unsigned long long)arg1;
- (void)_resetLexerWithInputString:(id)arg1;
- (id)init;

@end
