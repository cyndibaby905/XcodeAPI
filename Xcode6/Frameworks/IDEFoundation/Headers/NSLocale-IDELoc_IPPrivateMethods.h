

#import <Foundation/Foundation.h>

@interface NSLocale (IDELoc_IPPrivateMethods)
+ (id)_ideloc_containingRegionOfType:(int)arg1 forRegion:(id)arg2;
+ (id)ideloc_containingSubcontinentOfRegion:(id)arg1;
+ (id)ideloc_containingContinentOfRegion:(id)arg1;
+ (id)_ideloc_availableRegionsOfType:(int)arg1;
+ (id)ideloc_availableSubcontinents;
+ (id)ideloc_availableContinents;
+ (id)ideloc_localeIdentifierFromLanguageIdentifier:(id)arg1 countryCode:(id)arg2;
+ (id)ideloc_addLikelySubtagsToLocaleIdentifier:(id)arg1;
+ (id)ideloc_languageAndScriptFromLocaleIdentifier:(id)arg1;
+ (id)ideloc_languageIdentifierFromLocaleIdentifier:(id)arg1;
@end

