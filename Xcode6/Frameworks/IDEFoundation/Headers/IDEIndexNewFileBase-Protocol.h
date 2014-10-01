

@class DVTSourceCodeLanguage, DVTSourceCodeSymbolKind, IDEIndexNewSymbol, NSString;

@protocol IDEIndexNewFileBase
- (IDEIndexNewSymbol *)newSymbolWithName:(NSString *)arg1 kind:(DVTSourceCodeSymbolKind *)arg2 role:(int)arg3 language:(DVTSourceCodeLanguage *)arg4 resolution:(NSString *)arg5 lineNumber:(long long)arg6 column:(long long)arg7 locator:(NSString *)arg8 receiver:(NSString *)arg9 completionString:(void *)arg10 container:(IDEIndexNewSymbol *)arg11;
- (void)addSymbolWithName:(NSString *)arg1 kind:(DVTSourceCodeSymbolKind *)arg2 role:(int)arg3 language:(DVTSourceCodeLanguage *)arg4 resolution:(NSString *)arg5 lineNumber:(long long)arg6 column:(long long)arg7 locator:(NSString *)arg8 receiver:(NSString *)arg9 completionString:(void *)arg10 container:(IDEIndexNewSymbol *)arg11;
@end

