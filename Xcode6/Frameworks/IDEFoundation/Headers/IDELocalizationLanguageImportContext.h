

#import <IDEFoundation/IDELocalizationWorkContext.h>

@class IDEContainer;

@protocol IDELocalizedContainer;

@interface IDELocalizationLanguageImportContext : IDELocalizationWorkContext
{
    NSURL *_sourceUrl;
    IDEContainer<IDELocalizedContainer> *_container;
    NSXMLDocument *_importXLIFF;
}

@property(retain) NSXMLDocument *importXLIFF; // @synthesize importXLIFF=_importXLIFF;
@property(retain) IDEContainer<IDELocalizedContainer> *container; // @synthesize container=_container;
@property(retain) NSURL *sourceUrl; // @synthesize sourceUrl=_sourceUrl;
- (void)primitiveInvalidate;

@end

