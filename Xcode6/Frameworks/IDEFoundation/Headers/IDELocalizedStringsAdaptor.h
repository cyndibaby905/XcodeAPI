

#import <IDEFoundation/IDELocalizedResourceAdaptor.h>

@class NSDictionary, NSMutableDictionary, NSString;

@interface IDELocalizedStringsAdaptor : IDELocalizedResourceAdaptor
{
    NSString *_tableName;
    NSDictionary *_baseStrings;
    NSDictionary *_baseComments;
    NSMutableDictionary *_stringsCache;
}

+ (id)writeWorkForContext:(id)arg1 langauge:(id)arg2;
+ (id)readWorkForContext:(id)arg1;
- (id)target;
- (id)expectedSuperitem;
- (id)expectedDirectoryPath;
- (id)expectedFileName;
- (id)tableName;
- (id)commentsByKey;
- (void)setStringsByKey:(id)arg1 forLanguage:(id)arg2;
- (id)stringsByKeyForLanguage:(id)arg1;
- (void)updateBaseStrings:(id)arg1 updateBaseComments:(id)arg2;
- (id)initWithLocalizedContainer:(id)arg1 localizedGroup:(id)arg2 tableName:(id)arg3 baseStrings:(id)arg4 baseComments:(id)arg5;

@end

