

#import <Foundation/Foundation.h>

@interface IDEEnergyLogScoreFormatter : NSFormatter
{
}

+ (id)defaultFormatter;
- (BOOL)getObjectValue:(out id *)arg1 forString:(id)arg2 errorDescription:(out id *)arg3;
- (id)stringForObjectValue:(id)arg1;

@end

