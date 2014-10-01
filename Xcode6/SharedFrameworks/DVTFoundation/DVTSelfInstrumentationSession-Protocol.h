

#import <Foundation/Foundation.h>

@class NSString;

@protocol DVTSelfInstrumentationSession <NSObject>
+ (id)timeProfileSessionOrError:(id *)arg1;
+ (void)sendStopSignalWithName:(NSString *)arg1;
+ (void)sendPointSignalWithName:(NSString *)arg1;
+ (void)sendStartSignalWithName:(NSString *)arg1;
- (BOOL)endSessionAndDiscardResultsWithError:(id *)arg1;
- (NSString *)endSessionAndSaveToPath:(NSString *)arg1 error:(id *)arg2;
@end

