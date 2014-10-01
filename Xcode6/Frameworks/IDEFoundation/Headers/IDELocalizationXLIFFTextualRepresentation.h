

#import <Foundation/Foundation.h>

@class NSMutableString;

@interface IDELocalizationXLIFFTextualRepresentation : NSObject
{
    NSMutableString *_representation;
}

@property(retain) NSMutableString *representation; // @synthesize representation=_representation;
- (unsigned long long)length;
- (BOOL)createDirectoryAndWriteToURL:(id)arg1 error:(id *)arg2;
- (NSRange)appendResource:(id)arg1 translationUnits:(id)arg2;
- (void)appendResourceEnd:(id)arg1;
- (void)appendResourceStart:(id)arg1;
- (NSRange)appendGap;
- (NSRange)appendTranslationUnit:(id)arg1;
- (id)init;

@end

