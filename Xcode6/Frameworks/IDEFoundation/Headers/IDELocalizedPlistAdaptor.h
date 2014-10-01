

#import <IDEFoundation/IDELocalizedResourceAdaptor.h>

@class IDEFileReference, NSDictionary, NSMutableDictionary;

@interface IDELocalizedPlistAdaptor : IDELocalizedResourceAdaptor
{
    IDEFileReference *_plistFileReference;
    NSDictionary *_baseStrings;
    NSMutableDictionary *_stringsCache;
}

+ (id)writeWorkForContext:(id)arg1 langauge:(id)arg2;
+ (id)readWorkForContext:(id)arg1;
- (id)target;
- (id)expectedSuperitem;
- (id)expectedDirectoryPath;
- (id)expectedFileName;
- (id)filteredBaseStringsByKey:(id)arg1;
- (id)localizedGroupIdentifier;
- (id)plistFileReference;
- (id)commentsByKey;
- (void)setStringsByKey:(id)arg1 forLanguage:(id)arg2;
- (id)stringsByKeyForLanguage:(id)arg1;
- (void)primitiveInvalidate;
- (id)initWithLocalizedContainer:(id)arg1 localizedGroup:(id)arg2 plistFileReference:(id)arg3;

@end

