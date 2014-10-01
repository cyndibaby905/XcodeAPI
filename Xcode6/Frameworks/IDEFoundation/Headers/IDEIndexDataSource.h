

#import <Foundation/Foundation.h>

@class DVTPerformanceMetric, NSString;

@interface IDEIndexDataSource : NSObject
{
    DVTPerformanceMetric *_generatorMetric;
    NSString *_source;
}

+ (const char *)builtinClassResolutionCString;
+ (id)builtinClassResolution;
+ (const char *)builtinIdResolutionCString;
+ (id)builtinIdResolution;
+ (const char *)builtinVoidResolutionCString;
+ (id)builtinVoidResolution;
+ (id)dataSourceVersion;
@property(retain, nonatomic) DVTPerformanceMetric *generatorMetric; // @synthesize generatorMetric=_generatorMetric;
@property(readonly, nonatomic) NSString *source; // @synthesize source=_source;
- (BOOL)generateDataForJob:(id)arg1;
- (BOOL)processJob:(id)arg1;
- (id)initWithSource:(id)arg1;

@end

