

#import <IDEFoundation/IDELocalizationWorkContext.h>

@class DVTFilePath, DVTLocale, IDEContainer, IDEGroup;

@protocol IDELocalizedContainer, IDELocalizedGroup;

@interface _IDELocalizationAddFileReferenceContext : IDELocalizationWorkContext
{
    IDEContainer<IDELocalizedContainer> *_container;
    IDEGroup<IDELocalizedGroup> *_group;
    DVTLocale *_locale;
    DVTFilePath *_filePath;
}

@property(retain) DVTFilePath *filePath; // @synthesize filePath=_filePath;
@property(retain) DVTLocale *locale; // @synthesize locale=_locale;
@property(retain) IDEGroup<IDELocalizedGroup> *group; // @synthesize group=_group;
@property(retain) IDEContainer<IDELocalizedContainer> *container; // @synthesize container=_container;
- (void)primitiveInvalidate;

@end

