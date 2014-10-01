

@class DVTFilePath, DVTLocale, IDEContainer, IDEGroup;

@protocol IDELocalizedContainer, IDELocalizedGroup;

@protocol IDELocalizationWorkWriteStrings
@property(retain) DVTFilePath *IDELocalizationWork_path;
@property BOOL IDELocalizationWork_createdNewSubitem;
@property(retain) DVTLocale *IDELocalizationWork_language;
@property(retain) IDEGroup<IDELocalizedGroup> *IDELocalizationWork_group;
@property(retain) IDEContainer<IDELocalizedContainer> *IDELocalizationWork_container;
@property(retain) NSDictionary *IDELocalizationWork_comments;
@property(retain) NSDictionary *IDELocalizationWork_strings;
@end

