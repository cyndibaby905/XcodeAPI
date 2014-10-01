

#import <IDEFoundation/IDELocalizationWorkContext.h>

#import <IDEFoundation/IDELocalizationWorkWriteStrings-Protocol.h>

@class DVTFilePath, DVTLocale, IDEContainer, IDEGroup;

@protocol IDELocalizedGroup, IDELocalizedContainer;

@interface _IDELocalizedPlistAdaptorWriteContext : IDELocalizationWorkContext <IDELocalizationWorkWriteStrings>
{
    BOOL IDELocalizationWork_createdNewSubitem;
    NSDictionary *IDELocalizationWork_strings;
    NSDictionary *IDELocalizationWork_comments;
    IDEContainer<IDELocalizedContainer> *IDELocalizationWork_container;
    IDEGroup<IDELocalizedGroup> *IDELocalizationWork_group;
    DVTLocale *IDELocalizationWork_language;
    DVTFilePath *IDELocalizationWork_path;
}

@property(retain) DVTFilePath *IDELocalizationWork_path; // @synthesize IDELocalizationWork_path;
@property BOOL IDELocalizationWork_createdNewSubitem; // @synthesize IDELocalizationWork_createdNewSubitem;
@property(retain) DVTLocale *IDELocalizationWork_language; // @synthesize IDELocalizationWork_language;
@property(retain) IDEGroup<IDELocalizedGroup> *IDELocalizationWork_group; // @synthesize IDELocalizationWork_group;
@property(retain) IDEContainer<IDELocalizedContainer> *IDELocalizationWork_container; // @synthesize IDELocalizationWork_container;
@property(retain) NSDictionary *IDELocalizationWork_comments; // @synthesize IDELocalizationWork_comments;
@property(retain) NSDictionary *IDELocalizationWork_strings; // @synthesize IDELocalizationWork_strings;
- (void)primitiveInvalidate;

@end

