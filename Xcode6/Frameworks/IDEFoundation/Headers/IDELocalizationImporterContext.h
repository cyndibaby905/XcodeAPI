

#import <IDEFoundation/IDELocalizationWorkContext.h>

@class IDEContainer, IDELocalizationLanguageExportContext, IDELocalizationLanguageImportContext, IDELocalizationXLIFFComparisonContext;

@protocol IDELocalizedContainer;

@interface IDELocalizationImporterContext : IDELocalizationWorkContext
{
    BOOL _resolved;
    NSURL *_sourceUrl;
    IDEContainer<IDELocalizedContainer> *_container;
    NSString *_sourceLanguage;
    NSString *_targetLanguage;
    CDUnknownBlockType _onNeedsResolutions;
    IDELocalizationLanguageExportContext *_languageExportContext;
    IDELocalizationLanguageImportContext *_languageImportContext;
    IDELocalizationXLIFFComparisonContext *_comparison;
}

@property BOOL resolved; // @synthesize resolved=_resolved;
@property(retain) IDELocalizationXLIFFComparisonContext *comparison; // @synthesize comparison=_comparison;
@property(retain) IDELocalizationLanguageImportContext *languageImportContext; // @synthesize languageImportContext=_languageImportContext;
@property(retain) IDELocalizationLanguageExportContext *languageExportContext; // @synthesize languageExportContext=_languageExportContext;
@property(copy) CDUnknownBlockType onNeedsResolutions; // @synthesize onNeedsResolutions=_onNeedsResolutions;
@property(retain) NSString *targetLanguage; // @synthesize targetLanguage=_targetLanguage;
@property(retain) NSString *sourceLanguage; // @synthesize sourceLanguage=_sourceLanguage;
@property(retain) IDEContainer<IDELocalizedContainer> *container; // @synthesize container=_container;
@property(retain) NSURL *sourceUrl; // @synthesize sourceUrl=_sourceUrl;
- (void)primitiveInvalidate;

@end

