

#import <IDEFoundation/IDELocalizationWorkContext.h>

#import <IDEFoundation/IDELocalizationWorkReadStrings-Protocol.h>

@class DVTFilePath, DVTLocale, IDELocalizedStringsAdaptor, NSDictionary;

@interface _IDELocalizedStringsAdaptorReadContext : IDELocalizationWorkContext <IDELocalizationWorkReadStrings>
{
    DVTFilePath *IDELocalizationWork_path;
    NSDictionary *IDELocalizationWork_strings;
    NSDictionary *IDELocalizationWork_comments;
    IDELocalizedStringsAdaptor *_adaptor;
    DVTLocale *_language;
}

@property(retain) DVTLocale *language; // @synthesize language=_language;
@property(retain) IDELocalizedStringsAdaptor *adaptor; // @synthesize adaptor=_adaptor;
@property(retain) NSDictionary *IDELocalizationWork_comments; // @synthesize IDELocalizationWork_comments;
@property(retain) NSDictionary *IDELocalizationWork_strings; // @synthesize IDELocalizationWork_strings;
@property(retain) DVTFilePath *IDELocalizationWork_path; // @synthesize IDELocalizationWork_path;
- (void)primitiveInvalidate;

@end
