

#import <Foundation/Foundation.h>

@interface NSString (DVTMacroExpansionAdditions)
- (id)dvt_literalValueOfCommonString;
- (id)dvt_parseAsMacroExpansionStringList;
- (id)dvt_parseAsMacroExpansionStringListReturningError:(id *)arg1;
- (id)dvt_parseAsMacroExpansionString;
- (id)dvt_parseAsMacroExpansionStringReturningError:(id *)arg1;
@end

