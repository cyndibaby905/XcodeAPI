

#import <Foundation/Foundation.h>

@class DVTFilePath, NSString;

@interface IDEXcodeServerUseConfiguration : NSObject
{
    BOOL _testInstallShouldCopyEntireBuiltProductsDir;
    DVTFilePath *_controlPath;
    NSString *_testUserName;
    DVTFilePath *_testUserPath;
}

+ (id)sharedServerUseConfiguration;
+ (void)initialize;
@property(readonly) BOOL testInstallShouldCopyEntireBuiltProductsDir; // @synthesize testInstallShouldCopyEntireBuiltProductsDir=_testInstallShouldCopyEntireBuiltProductsDir;
@property(readonly, copy) DVTFilePath *testUserPath; // @synthesize testUserPath=_testUserPath;
@property(readonly, copy) NSString *testUserName; // @synthesize testUserName=_testUserName;
@property(readonly, copy) DVTFilePath *controlPath; // @synthesize controlPath=_controlPath;
- (id)initWithControlPath:(id)arg1 testUserName:(id)arg2 testUserPath:(id)arg3;

@end

