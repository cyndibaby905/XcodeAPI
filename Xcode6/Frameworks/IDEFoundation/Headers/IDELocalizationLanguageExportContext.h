

#import <IDEFoundation/IDELocalizationWorkContext.h>

@class IDEContainer, IDELocalizedResourcePopulationContext;

@protocol IDELocalizedContainer;

@interface IDELocalizationLanguageExportContext : IDELocalizationWorkContext
{
    IDELocalizedResourcePopulationContext *_populationContext;
    NSURL *_destinationUrl;
    IDEContainer<IDELocalizedContainer> *_container;
    NSString *_sourceLanguage;
    NSString *_targetLanguage;
    NSXMLDocument *_exportXLIFF;
}

@property(retain) NSXMLDocument *exportXLIFF; // @synthesize exportXLIFF=_exportXLIFF;
@property(retain) NSString *targetLanguage; // @synthesize targetLanguage=_targetLanguage;
@property(retain) NSString *sourceLanguage; // @synthesize sourceLanguage=_sourceLanguage;
@property(retain) IDEContainer<IDELocalizedContainer> *container; // @synthesize container=_container;
@property(retain) NSURL *destinationUrl; // @synthesize destinationUrl=_destinationUrl;
@property(retain) IDELocalizedResourcePopulationContext *populationContext; // @synthesize populationContext=_populationContext;
- (void)primitiveInvalidate;

@end

