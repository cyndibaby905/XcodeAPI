

#import <IDEFoundation/IDELocalizationWorkContext.h>

@class IDEContainer, NSArray, NSString, NSURL;

@protocol IDELocalizedContainer;

@interface IDELocalizationBundleExportContext : IDELocalizationWorkContext
{
    NSURL *_destinationUrl;
    IDEContainer<IDELocalizedContainer> *_container;
    NSString *_sourceLanguage;
    NSArray *_targetLanguages;
}

@property(retain) NSArray *targetLanguages; // @synthesize targetLanguages=_targetLanguages;
@property(retain) NSString *sourceLanguage; // @synthesize sourceLanguage=_sourceLanguage;
@property(retain) IDEContainer<IDELocalizedContainer> *container; // @synthesize container=_container;
@property(retain) NSURL *destinationUrl; // @synthesize destinationUrl=_destinationUrl;
- (void)primitiveInvalidate;

@end

