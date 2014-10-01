

#import <IDEFoundation/IDELocalizationWorkContext.h>

@class IDELocalizedResourceAdaptor;

@interface IDELocalizedResourceAdaptorWorkContext : IDELocalizationWorkContext
{
    IDELocalizedResourceAdaptor *_adaptor;
}

@property(retain) IDELocalizedResourceAdaptor *adaptor; // @synthesize adaptor=_adaptor;
- (void)primitiveInvalidate;

@end

