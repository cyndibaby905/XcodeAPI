

#import <Foundation/Foundation.h>

@class IDEBuildParameters, NSArray, NSString, NSString;

@protocol IDEBuildSettingsProvider <NSObject>
- (NSString *)absolutePathByEvaluatingBuildSettingExpressionString:(NSString<DVTMacroExpansion> *)arg1 withBuildParameters:(IDEBuildParameters *)arg2;
- (NSString *)stringByEvaluatingBuildSettingExpressionString:(NSString<DVTMacroExpansion> *)arg1 withBuildParameters:(IDEBuildParameters *)arg2;
- (NSArray *)evaluatedStringListValueForBuildSetting:(NSString *)arg1 withBuildParameters:(IDEBuildParameters *)arg2;
- (NSString *)evaluatedStringValueForBuildSetting:(NSString *)arg1 withBuildParameters:(IDEBuildParameters *)arg2;
- (NSArray *)allBuildSettingNamesWithBuildParameters:(IDEBuildParameters *)arg1;
@end

