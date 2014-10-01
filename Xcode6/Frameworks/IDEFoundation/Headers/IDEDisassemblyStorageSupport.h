

#import <Foundation/Foundation.h>

@interface IDEDisassemblyStorageSupport : NSObject
{
}

+ (unsigned long long)_integerFromHexString:(id)arg1;
+ (unsigned long long)_integerAddressFromLineOfDisassembly:(id)arg1;
+ (id)hexAddressFromLineOfDisassembly:(id)arg1;
+ (id)addressForLineNumber:(unsigned long long)arg1 inDisassembly:(id)arg2;
+ (unsigned long long)_lineNumberForAddress:(id)arg1 inLinesOfDisassembly:(id)arg2;
+ (unsigned long long)lineNumberForAddress:(id)arg1 inDisassembly:(id)arg2;
+ (BOOL)isDisassemblyStorageURL:(id)arg1;

@end

