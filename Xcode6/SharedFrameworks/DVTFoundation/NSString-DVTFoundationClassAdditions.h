

#import <Foundation/Foundation.h>

@interface NSString (DVTFoundationClassAdditions)
+ (id)dvt_stringWithListComponentsJoinedByCommasAndAnd:(id)arg1;
+ (id)dvt_stringWithUniqueFileNameSuffixForDistinguishingStrings:(id)arg1;
+ (BOOL)dvt_isFileUTF8WithBOM:(id)arg1 fileData:(id)arg2;
+ (BOOL)dvt_isFileUnicode:(id)arg1 fileData:(id)arg2;
+ (id)dvt_UUIDString;
+ (id)dvt_localizedNameOfLineEnding:(unsigned long long)arg1;
+ (BOOL)dvt_isDataUTF8WithBOM:(id)arg1;
+ (BOOL)dvt_isDataUnicodeEncoded:(id)arg1 isBigEndian:(char *)arg2;
+ (id)dvt_stringWithPotentiallyMalformedUTF8Bytes:(const char *)arg1 length:(unsigned long long)arg2;
+ (id)dvt_stringWithPotentiallyMalformedUTF8Bytes:(const char *)arg1 length:(unsigned long long)arg2 stopAtTrailingIncompleteUTF8Sequence:(BOOL)arg3 getUsedLength:(unsigned long long *)arg4 getNumberOfMalformedSequences:(unsigned long long *)arg5;
+ (id)dvt_stringWithFileSystemRepresentation:(const char *)arg1 length:(unsigned long long)arg2;
+ (id)dvt_stringWithFileSystemRepresentation:(const char *)arg1;
- (BOOL)dvt_range:(NSRange)arg1 isEqualToString:(id)arg2;
- (BOOL)dvt_hasCaseInsensitivePrefix:(id)arg1;
- (id)dvt_arrayByParsingAsStringList;
- (void)dvt_enumerateWhitespaceSeparatedSubstringsInRange:(NSRange)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (void)dvt_enumerateOccurancesOfSubstring:(id)arg1 options:(unsigned long long)arg2 usingBlock:(CDUnknownBlockType)arg3;
- (id)dvt_md5Hash;
- (id)dvt_stringByRepeating:(unsigned long long)arg1;
- (id)dvt_componentsSeparatedByUnquotedWhitespacePreservingQuotes:(BOOL)arg1;
- (id)dvt_stringByMakingAbsolutePathWithBasePath:(id)arg1;
- (id)dvt_stringByMakingPathRelativeToBasePath:(id)arg1;
- (id)dvt_stringByStrippingExtraZeroesAfterDecimalPlace;
- (id)dvt_capitalizedWordsFromString;
- (id)dvt_wordsFromString;
- (id)dvt_wordsFromStringWithLetterCasing:(unsigned long long)arg1;
- (id)dvt_stringByManglingToLegalRFC1034Identifier;
- (long long)dvt_versionNumberComparison:(id)arg1;
- (id)dvt_dataForHexString;
- (BOOL)dvt_isLegalCIdentifier;
- (BOOL)dvt_isNonEmpty;
- (id)dvt_stringByRemovingCStringEscapeSequences;
- (id)dvt_stringByQuotingOnlyIfNeeded:(BOOL)arg1 quoteTabsAndEOLs:(BOOL)arg2 quoteHighBitUnichars:(BOOL)arg3;
- (id)dvt_stringByQuotingIfNeeded;
- (id)dvt_stringByTranslatingSmartQuotesToReal;
- (NSRange)dvt_characterRangeForLineRange:(NSRange)arg1;
- (unsigned long long)dvt_adlerHashWithRange:(NSRange)arg1;
- (id)dvt_stringByStandardizingWithLineEnding:(unsigned long long)arg1;
- (id)dvt_stringByLowercasingFirstCharacter;
- (id)dvt_stringByCapitalizingFirstCharacter;
- (id)dvt_lastKeyPathComponent;
- (id)dvt_firstKeyPathComponent;
- (id)dvt_stringByRemovingLeadingAndTrailingCharactersInSet:(id)arg1;
- (id)dvt_stringByReplacingWhitespaceRunsWithCharacter:(unsigned short)arg1 range:(NSRange)arg2;
- (id)dvt_stringByDeletingAllWhitespace;
- (id)dvt_stringByRemovingSuffix:(id)arg1;
- (id)dvt_stringByRemovingPrefix:(id)arg1;
- (BOOL)dvt_getFileSystemRepresentation:(char *)arg1 maxLength:(unsigned long long)arg2;
@end
