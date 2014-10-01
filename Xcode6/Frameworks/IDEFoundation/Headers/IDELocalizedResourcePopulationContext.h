

#import <IDEFoundation/IDELocalizationWorkContext.h>

@class IDEContainer;

@protocol IDELocalizedContainer;

@interface IDELocalizedResourcePopulationContext : IDELocalizationWorkContext
{
    IDEContainer<IDELocalizedContainer> *_container;
    NSDictionary *_adaptorsByName;
}

@property(retain) NSDictionary *adaptorsByName; // @synthesize adaptorsByName=_adaptorsByName;
@property(retain) IDEContainer<IDELocalizedContainer> *container; // @synthesize container=_container;
- (void)primitiveInvalidate;

@end

